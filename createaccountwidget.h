#ifndef CREATEACCOUNTWIDGET_H
#define CREATEACCOUNTWIDGET_H

#include <QWidget>

namespace Ui {
class CreateAccountWidget;
}

class CreateAccountWidget : public QWidget
{
    Q_OBJECT
    
public:
    explicit CreateAccountWidget(QWidget *parent = 0);
    ~CreateAccountWidget();
    
private slots:
    void on_CreateAccountButton_clicked();

    void on_Cancel_clicked();

    void on_ReadLicenseButton_clicked();

    void on_MakePasswordEditBox_textEdited(const QString &arg1);

    void on_MakePasswordAgainEditBox_textEdited(const QString &arg1);

private:
    Ui::CreateAccountWidget *ui;
};

#endif // CREATEACCOUNTWIDGET_H
