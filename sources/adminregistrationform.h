#ifndef ADMINREGISTRATIONFORM_H
#define ADMINREGISTRATIONFORM_H

#include <QWidget>
#include <memory>
#include "Database.h"

namespace Ui {
class AdminRegistrationForm;
}

class AdminRegistrationForm : public QWidget
{
    Q_OBJECT

public:
    explicit AdminRegistrationForm(QWidget *parent = nullptr);
    ~AdminRegistrationForm();
    void setDatabase(std::shared_ptr<Database> dbPtr);

signals:
    void AdminLoginRequested();
    void accepted(int userId, QString userName, QDateTime banTime, bool admin);
    void rejected();

private slots:
    void on_AdminLoginButton_clicked();
    void on_buttonBox_accepted();
    void on_buttonBox_rejected();
private:
    Ui::AdminRegistrationForm *ui;
    std::shared_ptr<Database> m_dbPtr;
};

#endif // ADMINREGISTRATIONFORM_H
