/********************************************************************************
** Form generated from reading UI file 'startscreen.ui'
**
** Created by: Qt User Interface Compiler version 5.15.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_STARTSCREEN_H
#define UI_STARTSCREEN_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QStackedWidget>
#include "adminregistrationform.h"
#include "loginform.h"
#include "registrationform.h"

QT_BEGIN_NAMESPACE

class Ui_StartScreen
{
public:
    QStackedWidget *stackedWidget;
    LoginForm *loginWidget;
    RegistrationForm *registerWidget;
    AdminRegistrationForm *adminRegisterWidget;

    void setupUi(QDialog *StartScreen)
    {
        if (StartScreen->objectName().isEmpty())
            StartScreen->setObjectName(QString::fromUtf8("StartScreen"));
        StartScreen->resize(409, 296);
        stackedWidget = new QStackedWidget(StartScreen);
        stackedWidget->setObjectName(QString::fromUtf8("stackedWidget"));
        stackedWidget->setGeometry(QRect(10, 9, 381, 281));
        loginWidget = new LoginForm();
        loginWidget->setObjectName(QString::fromUtf8("loginWidget"));
        stackedWidget->addWidget(loginWidget);
        registerWidget = new RegistrationForm();
        registerWidget->setObjectName(QString::fromUtf8("registerWidget"));
        stackedWidget->addWidget(registerWidget);
        adminRegisterWidget = new AdminRegistrationForm();
        adminRegisterWidget->setObjectName(QString::fromUtf8("adminRegisterWidget"));
        stackedWidget->addWidget(adminRegisterWidget);

        retranslateUi(StartScreen);

        stackedWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(StartScreen);
    } // setupUi

    void retranslateUi(QDialog *StartScreen)
    {
        StartScreen->setWindowTitle(QCoreApplication::translate("StartScreen", "Dialog", nullptr));
    } // retranslateUi

};

namespace Ui {
    class StartScreen: public Ui_StartScreen {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_STARTSCREEN_H
