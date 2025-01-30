#include "adminregistrationform.h"
#include "ui_adminregistrationform.h"
#include <QMessageBox>
//#include <iostream>

AdminRegistrationForm::AdminRegistrationForm(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::AdminRegistrationForm)
{
    ui->setupUi(this);
}

AdminRegistrationForm::~AdminRegistrationForm()
{
    delete ui;
}

void AdminRegistrationForm::setDatabase(std::shared_ptr<Database> dbPtr)
{
    m_dbPtr = dbPtr;
}

void AdminRegistrationForm::on_AdminLoginButton_clicked()
{
    emit AdminLoginRequested();
}

void AdminRegistrationForm::on_buttonBox_accepted() //
{
    if(ui->AdminPasswordEdit->text() != "qwerty")
    {
        QMessageBox::critical(this, tr("Error"),
                              tr("The password doesn't belong to administrator"));
        return;
    }
    auto userId = m_dbPtr->addUser(ui->AdminLoginEdit->text().toStdString(),
                                   ui->AdminPasswordEdit->text().toStdString(),
                                   true);  // Udding a user with admin's rights
    switch(userId)
    {
    case -1:
        QMessageBox::critical(this, tr("Error"),
                              tr("Incorrect login"));
        return;
    case -2:
        QMessageBox::critical(this, tr("Error"),
                              tr("Login already exists"));
        return;
    default:
        auto _banTime = m_dbPtr->getBanTime(userId);
        emit accepted(userId, ui->AdminLoginEdit->text(), _banTime, true);
    }

    auto _banTime = m_dbPtr->getBanTime(userId);
    emit accepted(userId, ui->AdminLoginEdit->text(), _banTime, true);
}


void AdminRegistrationForm::on_buttonBox_rejected()
{
    emit rejected();
}




