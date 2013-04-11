#include "logindialog.h"
#include "ui_logindialog.h"

LogInDialog::LogInDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::LogInDialog)
{
    ui->setupUi(this);
}

LogInDialog::~LogInDialog()
{
    delete ui;
}

//Confirm Login Credentials
void LogInDialog::on_LogInButton_clicked()
{

}

//Exit App
int LogInDialog::on_CancelButton_clicked()
{
    return 0;
}

//Account for a Guest
void LogInDialog::on_GuestAccountButton_clicked()
{

}

//Make a new account
void LogInDialog::on_CreateAccountButton_clicked()
{

}

//User Name Input
void LogInDialog::on_NewUserNameEditBox_textEdited(const QString &arg1)
{

}

//User Password Input
void LogInDialog::on_NewPasswordEditBox_textEdited(const QString &arg1)
{

}
