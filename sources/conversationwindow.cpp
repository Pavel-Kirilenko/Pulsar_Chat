#include "conversationwindow.h"
#include "ui_conversationwindow.h"
#include <QMessageBox>

ConversationWindow::ConversationWindow(int userId, QString userName,
                                       QWidget *parent, std::shared_ptr<Database> db_Ptr)
    : QDialog(parent)
    , ui(new Ui::ConversationWindow)
    , m_userId(userId)
    , m_userName(userName)
    , m_dbPtr(db_Ptr)
{
    ui->setupUi(this);
    vector<string> userList = m_dbPtr->getUserList();
    ui->userBrowser->clear();
    for (const auto &user : userList)
    {
        ui->userBrowser->append(QString::fromStdString(user)); // Исправлено на правильное преобразование
    }
}

ConversationWindow::~ConversationWindow()
{
    delete ui;
}

void ConversationWindow::on_userNameEdit_returnPressed() {}

void ConversationWindow::on_showButton_clicked()
{
    senderName = ui->userNameEdit->text();  // Gettin sender's name
    if (senderName.isEmpty())                             // If the name is not empty
    {
        QMessageBox::warning(this, tr("Warning"), tr("Please enter a username."));
        return;
    }
    QString chat;
    auto chatMessages = m_dbPtr->getChatMessages();
    chat.clear();
    auto privateMessages = m_dbPtr->getPrivateMessage();
    for (const auto &msg : privateMessages)
    {

        if (msg.getSender() == senderName.toStdString() && msg.getDest() == m_userId )
       {
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
                prefix = "<" + QString::fromStdString(msg.getSender()) + ">" +
                         tr(" is writing to") +
                         QString(" <%1>: ").
                         arg(QString::fromStdString(m_dbPtr->getUserName(msg.getDest())));
        }
        chat.append(prefix + QString::fromStdString(msg.getText()) + "\n");
        }
    }

    if (ui->conversationBrowser->toPlainText() != chat)
    {
        ui->conversationBrowser->setText(chat);
    }
}

void ConversationWindow::on_exitButton_clicked()
{
    emit dialogClosed();
    this->close();
}
