/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.15.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSplitter>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionOpen_another_client;
    QAction *actionClose_this_client;
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLineEdit *MessageLineEdit;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *sendCommonMessageButton;
    QPushButton *sendPrivateMessageButton;
    QPushButton *conversationButton;
    QSplitter *splitter;
    QTextBrowser *commonChatBrowser;
    QTextBrowser *privateChatBrowser;
    QPushButton *forAdminButton;
    QMenuBar *menubar;
    QMenu *menuMain_menu;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(514, 406);
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(MainWindow->sizePolicy().hasHeightForWidth());
        MainWindow->setSizePolicy(sizePolicy);
        actionOpen_another_client = new QAction(MainWindow);
        actionOpen_another_client->setObjectName(QString::fromUtf8("actionOpen_another_client"));
        actionClose_this_client = new QAction(MainWindow);
        actionClose_this_client->setObjectName(QString::fromUtf8("actionClose_this_client"));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        verticalLayout = new QVBoxLayout(centralwidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));
        QFont font;
        font.setPointSize(12);
        label->setFont(font);

        horizontalLayout->addWidget(label);

        MessageLineEdit = new QLineEdit(centralwidget);
        MessageLineEdit->setObjectName(QString::fromUtf8("MessageLineEdit"));

        horizontalLayout->addWidget(MessageLineEdit);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        sendCommonMessageButton = new QPushButton(centralwidget);
        sendCommonMessageButton->setObjectName(QString::fromUtf8("sendCommonMessageButton"));
        sendCommonMessageButton->setFont(font);

        horizontalLayout_2->addWidget(sendCommonMessageButton);

        sendPrivateMessageButton = new QPushButton(centralwidget);
        sendPrivateMessageButton->setObjectName(QString::fromUtf8("sendPrivateMessageButton"));
        sendPrivateMessageButton->setFont(font);

        horizontalLayout_2->addWidget(sendPrivateMessageButton);

        conversationButton = new QPushButton(centralwidget);
        conversationButton->setObjectName(QString::fromUtf8("conversationButton"));
        conversationButton->setFont(font);

        horizontalLayout_2->addWidget(conversationButton);


        verticalLayout->addLayout(horizontalLayout_2);

        splitter = new QSplitter(centralwidget);
        splitter->setObjectName(QString::fromUtf8("splitter"));
        splitter->setOrientation(Qt::Horizontal);
        commonChatBrowser = new QTextBrowser(splitter);
        commonChatBrowser->setObjectName(QString::fromUtf8("commonChatBrowser"));
        splitter->addWidget(commonChatBrowser);
        privateChatBrowser = new QTextBrowser(splitter);
        privateChatBrowser->setObjectName(QString::fromUtf8("privateChatBrowser"));
        splitter->addWidget(privateChatBrowser);

        verticalLayout->addWidget(splitter);

        forAdminButton = new QPushButton(centralwidget);
        forAdminButton->setObjectName(QString::fromUtf8("forAdminButton"));
        QSizePolicy sizePolicy1(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(forAdminButton->sizePolicy().hasHeightForWidth());
        forAdminButton->setSizePolicy(sizePolicy1);
        forAdminButton->setFont(font);
        forAdminButton->setLayoutDirection(Qt::RightToLeft);

        verticalLayout->addWidget(forAdminButton);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 514, 22));
        menuMain_menu = new QMenu(menubar);
        menuMain_menu->setObjectName(QString::fromUtf8("menuMain_menu"));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        menubar->addAction(menuMain_menu->menuAction());
        menuMain_menu->addAction(actionOpen_another_client);
        menuMain_menu->addSeparator();
        menuMain_menu->addAction(actionClose_this_client);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        actionOpen_another_client->setText(QCoreApplication::translate("MainWindow", "Open another client", nullptr));
        actionClose_this_client->setText(QCoreApplication::translate("MainWindow", "Close this client", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "Your message:", nullptr));
        sendCommonMessageButton->setText(QCoreApplication::translate("MainWindow", "Send to all", nullptr));
        sendPrivateMessageButton->setText(QCoreApplication::translate("MainWindow", "Send private", nullptr));
        conversationButton->setText(QCoreApplication::translate("MainWindow", "Open a conversation", nullptr));
        forAdminButton->setText(QCoreApplication::translate("MainWindow", "For admin", nullptr));
        menuMain_menu->setTitle(QCoreApplication::translate("MainWindow", "Main menu", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
