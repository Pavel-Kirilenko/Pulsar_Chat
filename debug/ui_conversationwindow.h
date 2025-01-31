/********************************************************************************
** Form generated from reading UI file 'conversationwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.15.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CONVERSATIONWINDOW_H
#define UI_CONVERSATIONWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_ConversationWindow
{
public:
    QFormLayout *formLayout;
    QVBoxLayout *verticalLayout_2;
    QLabel *label;
    QTextBrowser *userBrowser;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label_2;
    QLineEdit *userNameEdit;
    QTextBrowser *conversationBrowser;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *showButton;
    QPushButton *exitButton;
    QSpacerItem *verticalSpacer_2;
    QLabel *label_3;

    void setupUi(QDialog *ConversationWindow)
    {
        if (ConversationWindow->objectName().isEmpty())
            ConversationWindow->setObjectName(QString::fromUtf8("ConversationWindow"));
        ConversationWindow->resize(627, 347);
        ConversationWindow->setMinimumSize(QSize(10, 0));
        formLayout = new QFormLayout(ConversationWindow);
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        label = new QLabel(ConversationWindow);
        label->setObjectName(QString::fromUtf8("label"));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy);
        label->setMinimumSize(QSize(0, 23));
        QFont font;
        font.setPointSize(12);
        label->setFont(font);

        verticalLayout_2->addWidget(label);

        userBrowser = new QTextBrowser(ConversationWindow);
        userBrowser->setObjectName(QString::fromUtf8("userBrowser"));

        verticalLayout_2->addWidget(userBrowser);


        formLayout->setLayout(1, QFormLayout::LabelRole, verticalLayout_2);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label_2 = new QLabel(ConversationWindow);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        horizontalLayout->addWidget(label_2);

        userNameEdit = new QLineEdit(ConversationWindow);
        userNameEdit->setObjectName(QString::fromUtf8("userNameEdit"));

        horizontalLayout->addWidget(userNameEdit);


        verticalLayout->addLayout(horizontalLayout);

        conversationBrowser = new QTextBrowser(ConversationWindow);
        conversationBrowser->setObjectName(QString::fromUtf8("conversationBrowser"));

        verticalLayout->addWidget(conversationBrowser);


        formLayout->setLayout(1, QFormLayout::FieldRole, verticalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        showButton = new QPushButton(ConversationWindow);
        showButton->setObjectName(QString::fromUtf8("showButton"));
        showButton->setFont(font);

        horizontalLayout_2->addWidget(showButton);

        exitButton = new QPushButton(ConversationWindow);
        exitButton->setObjectName(QString::fromUtf8("exitButton"));
        exitButton->setFont(font);

        horizontalLayout_2->addWidget(exitButton);


        formLayout->setLayout(2, QFormLayout::FieldRole, horizontalLayout_2);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        formLayout->setItem(2, QFormLayout::LabelRole, verticalSpacer_2);

        label_3 = new QLabel(ConversationWindow);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(label_3->sizePolicy().hasHeightForWidth());
        label_3->setSizePolicy(sizePolicy1);
        QFont font1;
        font1.setPointSize(15);
        label_3->setFont(font1);
        label_3->setAlignment(Qt::AlignCenter);

        formLayout->setWidget(0, QFormLayout::SpanningRole, label_3);


        retranslateUi(ConversationWindow);

        QMetaObject::connectSlotsByName(ConversationWindow);
    } // setupUi

    void retranslateUi(QDialog *ConversationWindow)
    {
        ConversationWindow->setWindowTitle(QCoreApplication::translate("ConversationWindow", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("ConversationWindow", "Users", nullptr));
        label_2->setText(QCoreApplication::translate("ConversationWindow", "Type or copy user's name", nullptr));
        showButton->setText(QCoreApplication::translate("ConversationWindow", "Show", nullptr));
        exitButton->setText(QCoreApplication::translate("ConversationWindow", "Exit", nullptr));
        label_3->setText(QCoreApplication::translate("ConversationWindow", "Conversation with a particular person", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ConversationWindow: public Ui_ConversationWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CONVERSATIONWINDOW_H
