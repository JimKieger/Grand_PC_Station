#ifndef LOGINDIALOG_H
#define LOGINDIALOG_H

#include <QDialog>

namespace Ui {
class LogInDialog;
}

class LogInDialog : public QDialog
{
    Q_OBJECT
    
public:
    explicit LogInDialog(QWidget *parent = 0);
    ~LogInDialog();
    
private slots:
    void on_pushButton_2_clicked();

    void on_MakeAccountButton_clicked();

    int on_CancelButton_clicked();

    void on_pushButton_clicked();

    void on_LogInButton_clicked();

    void on_GuestAccountButton_clicked();

    void on_CreateAccountButton_clicked();

    void on_NewUserNameEditBox_textEdited(const QString &arg1);

    void on_NewPasswordEditBox_textEdited(const QString &arg1);

private:
    Ui::LogInDialog *ui;
};

#endif // LOGINDIALOG_H
