#include "mainwindow.h"
#include "startscreen.h"
#include "ui_mainwindow.h"
#include "banwindow.h"
#include "conversationwindow.h"
#include <QDialog>
#include <QVBoxLayout>
#include <QDialogButtonBox>
#include <QListWidget>
#include <QTimer>
#include <QMessageBox>

int MainWindow::kInstanceCount = 0;

MainWindow::MainWindow(int userId, QString userName, QDateTime banTime, bool admin,
                       std::shared_ptr<Database> dbPtr, QWidget *parent)
    : QMainWindow(parent),
    ui(new Ui::MainWindow),
    m_userId(userId),
    m_userName(userName),
    m_banTime(banTime),
    m_admin(admin)
{
    ui->setupUi(this);
    kInstanceCount++;
    if(dbPtr)
        m_dbPtr = dbPtr;
    else
        m_dbPtr = make_shared<Database>();
    auto timer = new QTimer(this);
    connect(timer, &QTimer::timeout, this, &MainWindow::updateChats);
    timer->start(10);

}

MainWindow::~MainWindow()
{
    delete ui;
    kInstanceCount--;
    if(kInstanceCount <= 0)
        qApp->exit(0);
}

MainWindow *MainWindow::createClient(std::shared_ptr<Database> dbPtr)
{
    StartScreen s(dbPtr);
    auto result = s.exec();
    if (result == QDialog::Rejected)
        {
            return nullptr;
        }

    auto w = new MainWindow(s.userId(), s.userName(), s.getBanTime(), s.getAdmin(),
                                s.getDatabase());
        w->setAttribute(Qt::WA_DeleteOnClose);
    return w;
}

QDateTime MainWindow::getBanTime() const
{
    return m_banTime;
}

bool MainWindow::getAdmin() const
{
    return m_admin;
}



void MainWindow::on_MessageLineEdit_returnPressed()
{
    on_sendCommonMessageButton_clicked();
}


void MainWindow::on_sendCommonMessageButton_clicked()
{
    if (m_dbPtr->getBanTime(m_userId) <= QDateTime::currentDateTime() || m_dbPtr->getAdmin(m_userId)) // If the user ist't banned
    {
    m_dbPtr->addChatMessage(m_userName.toStdString(), ui->MessageLineEdit->text().toStdString());
    }
    else      // If the user is banned
    {
        QString timeString = m_dbPtr->getBanTime(m_userId).toString("yyyy-MM-dd HH:mm:ss");
        QMessageBox::information(this, tr("Alert"), tr("You can't send messages until ") + " " + timeString);
    }
}


void MainWindow::on_sendPrivateMessageButton_clicked()
{
    if (m_dbPtr->getBanTime(m_userId) <= QDateTime::currentDateTime() || m_dbPtr->getAdmin(m_userId)) // If the user ist't banned
    {
    QDialog dial(this);
    dial.setModal(true);
    auto l = new QVBoxLayout();
    dial.setLayout(l);
    auto userListWgt = new QListWidget(&dial);
    l->addWidget(userListWgt);
    auto buttonBox = new QDialogButtonBox(QDialogButtonBox::Ok | QDialogButtonBox::Cancel, &dial);
    l->addWidget(buttonBox);

    connect(buttonBox, &QDialogButtonBox::accepted, &dial, &QDialog::accept);
    connect(buttonBox, &QDialogButtonBox::rejected, &dial, &QDialog::reject);

    auto userList = m_dbPtr->getUserList();
    for(auto user : userList)
    {
        userListWgt->addItem(QString::fromStdString(user));
    }

    userListWgt->setCurrentRow(0);

    auto result = dial.exec();

    if(result == QDialog::Accepted &&
        userListWgt->currentItem())
    {
        m_dbPtr->addPrivateMessage(m_userName.toStdString(),
                                   userListWgt->currentItem()->text().toStdString(),
                                   ui->MessageLineEdit->text().toStdString());
    }
    }
    else      // If the user is banned
    {
        QString timeString = m_dbPtr->getBanTime(m_userId).toString("yyyy-MM-dd HH:mm:ss");
        QMessageBox::information(this, tr("Alert"), tr("You can't send messages until ") + " " + timeString);
    }
}


void MainWindow::on_actionOpen_another_client_triggered()
{
    auto w = createClient(m_dbPtr);
    if(w)
    w->show();
}


void MainWindow::on_actionClose_this_client_triggered()
{
    this->close();
}

void MainWindow::updateChats()
{
    auto chatMessages = m_dbPtr->getChatMessages();
    QString chat;
    for(const auto &msg : chatMessages)
    {
        chat.append(QString::fromStdString(msg) + "\n");
    }
    if (ui->commonChatBrowser->toPlainText() != chat)
    ui->commonChatBrowser->setText(chat);

    chat.clear();
    auto privateMessages = m_dbPtr->getPrivateMessage();
    for (const auto &msg : privateMessages)
    {
        if (QString::fromStdString(msg.getSender()) != m_userName &&
            msg.getDest() != m_userId &&
                (!this->getAdmin())
            )
        {
            continue;
        }
        QString prefix;
        if(m_userName == QString::fromStdString(msg.getSender()) &&
        m_userId == msg.getDest())
        {
            prefix = tr("self message") + ": ";
        }
        else if(m_userName == QString::fromStdString(msg.getSender()))
        {
            prefix = tr("message to") +
                     QString(" <%1>: ").
                     arg(QString::fromStdString(m_dbPtr->getUserName(msg.getDest())));
        }

        else
        {
            if (!this->getAdmin())
            {
                prefix = "<" + QString::fromStdString(msg.getSender()) + "> " +
                         tr("is writing to you") + ": ";
            }
            else
            {
                prefix = "<" + QString::fromStdString(msg.getSender()) + ">" +
                         tr(" is writing to") +
                         QString(" <%1>: ").
                         arg(QString::fromStdString(m_dbPtr->getUserName(msg.getDest())));
            }
        }
        chat.append(prefix + QString::fromStdString(msg.getText()) + "\n");
    }
    //auto current = ui->privateChatBrowser->toPlainText();
    if (ui->privateChatBrowser->toPlainText() != chat)
        ui->privateChatBrowser->setText(chat);
}


void MainWindow::on_forAdminButton_clicked()
{
    if (this->getAdmin())  // If the user is admin
    {
        BanWindow *dialog = new BanWindow(this, m_dbPtr);
        connect(dialog, &BanWindow::dialogClosed, this, &MainWindow::updateChats);
        dialog->exec();
    }
    else
    {
        QMessageBox::critical(this, tr("Error"), tr("This function is available for admins only"));
        return;
    }
}




void MainWindow::on_conversationButton_clicked()
{
    ConversationWindow *dialog = new ConversationWindow(m_userId, m_userName,
                                                        this, m_dbPtr);
    connect(dialog, &ConversationWindow::dialogClosed, this, &MainWindow::updateChats);
    dialog->exec();
}



