#include "startscreen.h"
#include "ui_startscreen.h"
#include "loginform.h"
#include "registrationform.h"
#include "adminregistrationform.h"


StartScreen::StartScreen(std::shared_ptr<Database> dbPtr, QWidget *parent) :
    QDialog(parent),
    ui(new Ui::StartScreen)
{
    ui->setupUi(this);

    if(dbPtr)
        m_dbPtr = dbPtr;
    else
        m_dbPtr = make_shared<Database>();

    ui->loginWidget->setDatabase(m_dbPtr);
    ui->registerWidget->setDatabase(m_dbPtr);
    ui->adminRegisterWidget->setDatabase(m_dbPtr);

    connect(ui->loginWidget, &LoginForm::registerRequested, this, &StartScreen::setRegistrationForm);
    connect(ui->loginWidget, &LoginForm::adminRegisterRequested, this, &StartScreen::setAdminRegistrationForm); // Admin registration on stack widget
    connect(ui->loginWidget, &LoginForm::accepted, this, &StartScreen::onLoggedIn);
    connect(ui->loginWidget, &LoginForm::rejected, this, &StartScreen::onRejectRequested);

    connect(ui->registerWidget, &RegistrationForm::loginRequested, this, &StartScreen::setLoginForm);
    connect(ui->registerWidget, &RegistrationForm::accepted, this, &StartScreen::onLoggedIn);
    connect(ui->registerWidget, &RegistrationForm::rejected, this, &StartScreen::onRejectRequested);

    connect(ui->adminRegisterWidget, &AdminRegistrationForm::AdminLoginRequested, this, &StartScreen::setLoginForm);
    connect(ui->adminRegisterWidget, &AdminRegistrationForm::accepted, this, &StartScreen::onLoggedIn);
    connect(ui->adminRegisterWidget, &AdminRegistrationForm::rejected, this, &StartScreen::onRejectRequested);
}

StartScreen::~StartScreen()
{
    delete ui;
}

void StartScreen::setLoginForm()
{
    ui->stackedWidget->setCurrentIndex(0);
}

void StartScreen::setRegistrationForm()
{
    ui->stackedWidget->setCurrentIndex(1);
}

void StartScreen::setAdminRegistrationForm()
{
    ui->stackedWidget->setCurrentIndex(2);   // Set the admin register window
}

void StartScreen::onLoggedIn(uint userId, QString userName, QDateTime banTime, bool admin)
{
    m_userId = userId;
    m_userName = userName;
    m_banTime = banTime;
    m_admin = admin;
    accept();
}

void StartScreen::onRejectRequested()
{
    reject();
}

std::shared_ptr<Database> StartScreen::getDatabase() const
{
    return m_dbPtr;
}

QString StartScreen::userName() const
{
    return m_userName;
}

QDateTime StartScreen::getBanTime() const
{
    return m_banTime;
}

bool StartScreen::getAdmin() const
{
    return m_admin;
}

int StartScreen::userId() const
{
    return m_userId;
}

