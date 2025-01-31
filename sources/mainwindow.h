#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <memory>
#include "Database.h"


namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow //
{
    Q_OBJECT

public:
    explicit MainWindow(int userId,
                        QString userName,
                        QDateTime banTime,
                        bool admin,
                        std::shared_ptr<Database> dbPtr = nullptr,
                        QWidget *parent = nullptr);
    ~MainWindow();
    static MainWindow* createClient(std::shared_ptr<Database> dbPtr = nullptr);
    QDateTime getBanTime() const;    // Time of ban
    bool getAdmin() const;           // Whether user is admin or not
    static int kInstanceCount;


private slots:
    void on_MessageLineEdit_returnPressed();
    void on_sendCommonMessageButton_clicked();
    void on_sendPrivateMessageButton_clicked();
    void on_actionOpen_another_client_triggered();
    void on_actionClose_this_client_triggered();
    void updateChats();
    void on_forAdminButton_clicked();
    void on_conversationButton_clicked();
private:
    Ui::MainWindow *ui;
    std::shared_ptr<Database> m_dbPtr;
    int m_userId;
    QString m_userName;
    QDateTime m_banTime;  // The time when the use is removed from ban
    bool m_admin;         // Admin's mark
};

#endif // MAINWINDOW_H
