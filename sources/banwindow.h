#ifndef BANWINDOW_H
#define BANWINDOW_H

#include <QDialog>
#include "Database.h"

namespace Ui {
class BanWindow;
}

class BanWindow : public QDialog
{
    Q_OBJECT

public:
    explicit BanWindow(QWidget *parent = nullptr,
    std::shared_ptr<Database> dbPtr = nullptr);
    ~BanWindow();

signals:
    void dialogClosed();


private slots:
    void on_userLoginLineEdit_returnPressed();
    void on_banButton_clicked();
    void on_banTimeComboBox_currentIndexChanged(int index);
    void on_exitButton_clicked();

private:
    Ui::BanWindow *ui;
    std::shared_ptr<Database> m_dbPtr;
};

#endif // BANWINDOW_H
