/********************************************************************************
** Form generated from reading UI file 'adminregistrationform.ui'
**
** Created by: Qt User Interface Compiler version 5.15.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADMINREGISTRATIONFORM_H
#define UI_ADMINREGISTRATIONFORM_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_AdminRegistrationForm
{
public:
    QVBoxLayout *verticalLayout;
    QFormLayout *formLayout;
    QLabel *label;
    QLineEdit *AdminLoginEdit;
    QLabel *label_2;
    QLineEdit *AdminPasswordEdit;
    QLabel *label_3;
    QSpacerItem *verticalSpacer;
    QHBoxLayout *horizontalLayout;
    QDialogButtonBox *buttonBox;
    QPushButton *AdminLoginButton;

    void setupUi(QWidget *AdminRegistrationForm)
    {
        if (AdminRegistrationForm->objectName().isEmpty())
            AdminRegistrationForm->setObjectName(QString::fromUtf8("AdminRegistrationForm"));
        AdminRegistrationForm->resize(348, 268);
        verticalLayout = new QVBoxLayout(AdminRegistrationForm);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        formLayout = new QFormLayout();
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        label = new QLabel(AdminRegistrationForm);
        label->setObjectName(QString::fromUtf8("label"));
        QFont font;
        font.setPointSize(12);
        label->setFont(font);

        formLayout->setWidget(0, QFormLayout::LabelRole, label);

        AdminLoginEdit = new QLineEdit(AdminRegistrationForm);
        AdminLoginEdit->setObjectName(QString::fromUtf8("AdminLoginEdit"));

        formLayout->setWidget(0, QFormLayout::FieldRole, AdminLoginEdit);

        label_2 = new QLabel(AdminRegistrationForm);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setFont(font);

        formLayout->setWidget(1, QFormLayout::LabelRole, label_2);

        AdminPasswordEdit = new QLineEdit(AdminRegistrationForm);
        AdminPasswordEdit->setObjectName(QString::fromUtf8("AdminPasswordEdit"));
        AdminPasswordEdit->setEchoMode(QLineEdit::Password);

        formLayout->setWidget(1, QFormLayout::FieldRole, AdminPasswordEdit);

        label_3 = new QLabel(AdminRegistrationForm);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(label_3->sizePolicy().hasHeightForWidth());
        label_3->setSizePolicy(sizePolicy);
        label_3->setFont(font);

        formLayout->setWidget(2, QFormLayout::SpanningRole, label_3);


        verticalLayout->addLayout(formLayout);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        buttonBox = new QDialogButtonBox(AdminRegistrationForm);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(buttonBox->sizePolicy().hasHeightForWidth());
        buttonBox->setSizePolicy(sizePolicy1);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        horizontalLayout->addWidget(buttonBox);

        AdminLoginButton = new QPushButton(AdminRegistrationForm);
        AdminLoginButton->setObjectName(QString::fromUtf8("AdminLoginButton"));
        sizePolicy.setHeightForWidth(AdminLoginButton->sizePolicy().hasHeightForWidth());
        AdminLoginButton->setSizePolicy(sizePolicy);
        QFont font1;
        font1.setPointSize(9);
        AdminLoginButton->setFont(font1);

        horizontalLayout->addWidget(AdminLoginButton);

        horizontalLayout->setStretch(0, 1);

        verticalLayout->addLayout(horizontalLayout);


        retranslateUi(AdminRegistrationForm);

        QMetaObject::connectSlotsByName(AdminRegistrationForm);
    } // setupUi

    void retranslateUi(QWidget *AdminRegistrationForm)
    {
        AdminRegistrationForm->setWindowTitle(QCoreApplication::translate("AdminRegistrationForm", "Form", nullptr));
        label->setText(QCoreApplication::translate("AdminRegistrationForm", "Login:", nullptr));
        label_2->setText(QCoreApplication::translate("AdminRegistrationForm", "Admin password:", nullptr));
        AdminPasswordEdit->setText(QString());
        label_3->setText(QCoreApplication::translate("AdminRegistrationForm", "(type 'qwerty' but it's classified)", nullptr));
        AdminLoginButton->setText(QCoreApplication::translate("AdminRegistrationForm", "Register", nullptr));
    } // retranslateUi

};

namespace Ui {
    class AdminRegistrationForm: public Ui_AdminRegistrationForm {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADMINREGISTRATIONFORM_H
