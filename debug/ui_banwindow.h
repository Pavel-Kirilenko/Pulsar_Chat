/********************************************************************************
** Form generated from reading UI file 'banwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.15.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_BANWINDOW_H
#define UI_BANWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_BanWindow
{
public:
    QFormLayout *formLayout;
    QVBoxLayout *verticalLayout_2;
    QLabel *label;
    QTextBrowser *userLoginBrowser;
    QVBoxLayout *verticalLayout;
    QLabel *label_2;
    QLineEdit *userLoginLineEdit;
    QPushButton *banButton;
    QComboBox *banTimeComboBox;
    QSpacerItem *verticalSpacer;
    QPushButton *exitButton;

    void setupUi(QDialog *BanWindow)
    {
        if (BanWindow->objectName().isEmpty())
            BanWindow->setObjectName(QString::fromUtf8("BanWindow"));
        BanWindow->resize(480, 449);
        formLayout = new QFormLayout(BanWindow);
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        label = new QLabel(BanWindow);
        label->setObjectName(QString::fromUtf8("label"));
        QFont font;
        font.setPointSize(12);
        label->setFont(font);

        verticalLayout_2->addWidget(label);

        userLoginBrowser = new QTextBrowser(BanWindow);
        userLoginBrowser->setObjectName(QString::fromUtf8("userLoginBrowser"));

        verticalLayout_2->addWidget(userLoginBrowser);


        formLayout->setLayout(0, QFormLayout::LabelRole, verticalLayout_2);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        label_2 = new QLabel(BanWindow);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setFont(font);

        verticalLayout->addWidget(label_2);

        userLoginLineEdit = new QLineEdit(BanWindow);
        userLoginLineEdit->setObjectName(QString::fromUtf8("userLoginLineEdit"));

        verticalLayout->addWidget(userLoginLineEdit);

        banButton = new QPushButton(BanWindow);
        banButton->setObjectName(QString::fromUtf8("banButton"));
        banButton->setFont(font);

        verticalLayout->addWidget(banButton);

        banTimeComboBox = new QComboBox(BanWindow);
        banTimeComboBox->addItem(QString());
        banTimeComboBox->addItem(QString());
        banTimeComboBox->addItem(QString());
        banTimeComboBox->addItem(QString());
        banTimeComboBox->addItem(QString());
        banTimeComboBox->setObjectName(QString::fromUtf8("banTimeComboBox"));

        verticalLayout->addWidget(banTimeComboBox);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        exitButton = new QPushButton(BanWindow);
        exitButton->setObjectName(QString::fromUtf8("exitButton"));
        exitButton->setFont(font);

        verticalLayout->addWidget(exitButton);


        formLayout->setLayout(0, QFormLayout::FieldRole, verticalLayout);


        retranslateUi(BanWindow);

        QMetaObject::connectSlotsByName(BanWindow);
    } // setupUi

    void retranslateUi(QDialog *BanWindow)
    {
        BanWindow->setWindowTitle(QCoreApplication::translate("BanWindow", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("BanWindow", "Users' list", nullptr));
        label_2->setText(QCoreApplication::translate("BanWindow", "Type or copy user's name", nullptr));
        banButton->setText(QCoreApplication::translate("BanWindow", "Ban for", nullptr));
        banTimeComboBox->setItemText(0, QCoreApplication::translate("BanWindow", "remove from ban", nullptr));
        banTimeComboBox->setItemText(1, QCoreApplication::translate("BanWindow", "1 h", nullptr));
        banTimeComboBox->setItemText(2, QCoreApplication::translate("BanWindow", "24 h", nullptr));
        banTimeComboBox->setItemText(3, QCoreApplication::translate("BanWindow", "72 h", nullptr));
        banTimeComboBox->setItemText(4, QCoreApplication::translate("BanWindow", "forever", nullptr));

        exitButton->setText(QCoreApplication::translate("BanWindow", "Back", nullptr));
    } // retranslateUi

};

namespace Ui {
    class BanWindow: public Ui_BanWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_BANWINDOW_H
