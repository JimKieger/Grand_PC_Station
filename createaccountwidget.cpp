#include "createaccountwidget.h"
#include "ui_createaccountwidget.h"

CreateAccountWidget::CreateAccountWidget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::CreateAccountWidget)
{
    ui->setupUi(this);
}

CreateAccountWidget::~CreateAccountWidget()
{
    delete ui;
}

/*void CreateAccountWidget::on_CreateAccountButton_clicked()
{
    //Check if two passwords match
    void CreateAccountWidget::on_MakePasswordEditBox_textEdited("")
    {
        void CreateAccountWidget::on_MakePasswordAgainEditBox_textEdited("")
        {

        }

    }

    //Check to see if name is missing from Qsettings.  If yes, save to settings.

    //Pop up little box, showing player he's assigned an account.

}

void CreateAccountWidget::on_Cancel_clicked()
{
    //Delete this widget

}

void CreateAccountWidget::on_ReadLicenseButton_clicked()
{
    //Put in License Agreement Document here
}


*/
