#include "banwindow.h"
#include "ui_banwindow.h"

#include <QMessageBox>
BanWindow::BanWindow(QWidget *parent, std::shared_ptr<Database> db_Ptr)
    : QDialog(parent)
    , ui(new Ui::BanWindow)
    , m_dbPtr(db_Ptr)
{
    ui->setupUi(this);
    vector<string> userList = m_dbPtr->getUserList();
    ui->userLoginBrowser->clear();
    for (const auto &user : userList)
    {
        ui->userLoginBrowser->append(user.c_str());
    }
}

BanWindow::~BanWindow()
{
    delete ui;
}


void BanWindow::on_userLoginLineEdit_returnPressed()
{

}


void BanWindow::on_banButton_clicked()
{
    QString userName = ui->userLoginLineEdit->text();   // Getting user's name

    if (userName.isEmpty())                             // If the name is not empty
    {
        QMessageBox::warning(this, tr("Warning"), tr("Please enter a username."));
        return;
    }

    int selectedIndex = ui->banTimeComboBox->currentIndex();  // Getting a selected index from comboBox
    int banTimeHours = 0;

    switch (selectedIndex)                    // Setting banTimeHours
    {
    case 0: // "remove from ban"
        banTimeHours = 0; // remove the ban
        break;
    case 1: // "1 h"
        banTimeHours = 1;
        break;
    case 2: // "24 h"
        banTimeHours = 24;
        break;
    case 3: // "72 h"
        banTimeHours = 72;
        break;
    case 4: // "forever"
        banTimeHours = 500000; // set for 500.000 h (practically forever)
        break;
    default:
        QMessageBox::warning(this, tr("Warning"), tr("Invalid selection."));
        return;
    }

    int userId = m_dbPtr->getUserId(userName.toStdString()); //Getting user's Id from the database


    if (userId == -1)          // If there is a user
    {
        QMessageBox::warning(this, tr("Warning"), tr("User  not found."));
        return;

    }

    if (banTimeHours == 0)     // Set the ban
    {
        m_dbPtr->setBanTime(userId, 0);             // Removing the user from the ban
    } else {
        m_dbPtr->setBanTime(userId, banTimeHours);  // Setting the ban for a user
    }

    QMessageBox::information(this, tr("Success"), tr("User  has been banned/unbanned successfully."));
}


void BanWindow::on_banTimeComboBox_currentIndexChanged(int index)
{

}


void BanWindow::on_exitButton_clicked()
{
    emit dialogClosed();
    this->close();
}


