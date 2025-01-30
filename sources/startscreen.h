#ifndef STARTSCREEN_H
#define STARTSCREEN_H

#include <QDialog>
#include <memory>
#include "Database.h"

namespace Ui {
class StartScreen;
}

class StartScreen : public QDialog
{
    Q_OBJECT

public:
    explicit StartScreen(std::shared_ptr<Database> dbPtr = nullptr,
                         QWidget *parent = nullptr);
    ~StartScreen();
    void setLoginForm();
    void setRegistrationForm();
    void setAdminRegistrationForm();
    int userId() const;
    QString userName() const;
    QDateTime getBanTime() const;  // When the user is removed from ban
    bool getAdmin() const;         // Whether user is admin or not

    std::shared_ptr<Database> getDatabase() const;

public slots:
    void onLoggedIn(uint userId, QString userName, QDateTime banTime, bool admin);
    void onRejectRequested();

private:
    Ui::StartScreen *ui;
    int m_userId;
    QString m_userName;
    QDateTime m_banTime;               // When the user is removed from ban
    bool m_admin;                      // Whether user is admin or not
    std::shared_ptr<Database> m_dbPtr;
};

#endif // STARTSCREEN_H
