#ifndef CONVERSATIONWINDOW_H
#define CONVERSATIONWINDOW_H

#include <QDialog>
#include "Database.h"

namespace Ui {
class ConversationWindow;
}

class ConversationWindow : public QDialog
{
    Q_OBJECT

public:
    explicit ConversationWindow(int userId, QString userName,
                                QWidget *parent = nullptr,
                                std::shared_ptr<Database> dbPtr = nullptr);
    ~ConversationWindow();

signals:
    void dialogClosed();

private slots:
    void on_userNameEdit_returnPressed();
    void on_showButton_clicked();
    void on_exitButton_clicked();

private:
    Ui::ConversationWindow *ui;
    std::shared_ptr<Database> m_dbPtr;
    int m_userId;
    QString m_userName;  // user's name
    QString senderName;  // sender's name
};

#endif // CONVERSATIONWINDOW_H
