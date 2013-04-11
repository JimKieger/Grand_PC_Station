#include "loginwidget.h"
#include "ui_loginwidget.h"

LogInWidget::LogInWidget(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::LogInWidget)
{
    ui->setupUi(this);
}

LogInWidget::~LogInWidget()
{
    delete ui;
}

void LogInWidget::on_CreateLocalAccountButton_clicked()
{
    new CreateAccount::QWidget ()
}
