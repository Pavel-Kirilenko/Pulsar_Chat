#include "registrationform.h"
#include "ui_registrationform.h"
#include <QMessageBox>
#include <iostream> // to delete after debugging

RegistrationForm::RegistrationForm(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::RegistrationForm)
{
    ui->setupUi(this);
}

RegistrationForm::~RegistrationForm()
{
    delete ui;
}

void RegistrationForm::setDatabase(std::shared_ptr<Database> dbPtr)
{
    m_dbPtr = dbPtr;
}

void RegistrationForm::on_LoginButton_clicked()
{
    emit loginRequested();
}


void RegistrationForm::on_buttonBox_accepted()
{
    if(ui->PasswordEdit->text() != ui->ConfirmPasswordEdit->text())
    {
        QMessageBox::critical(this, tr("Error"),
                              tr("Passwords not match"));
        return;
    }
    auto userId = m_dbPtr->addUser(ui->LoginEdit->text().toStdString(),
                                   ui->PasswordEdit->text().toStdString());
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
        auto _admin = m_dbPtr->getAdmin(userId); // Whether the user is admin or not
        auto _banTime = m_dbPtr->getBanTime(userId);

        emit accepted(userId, ui->LoginEdit->text(), _banTime, _admin);
    }

    auto _admin = m_dbPtr->getAdmin(userId); // Whether the user is admin or not
    auto _banTime = m_dbPtr->getBanTime(userId);

    emit accepted(userId, ui->LoginEdit->text(), _banTime, _admin);
}


void RegistrationForm::on_buttonBox_rejected()
{
    emit rejected();
}

