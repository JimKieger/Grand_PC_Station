#ifndef LOGINWIDGET_H
#define LOGINWIDGET_H

#include <QMainWindow>

namespace Ui {
class LogInWidget;
}

class LogInWidget : public QMainWindow
{
    Q_OBJECT
    
public:
    explicit LogInWidget(QWidget *parent = 0);
    ~LogInWidget();
    
private slots:
    void on_CreateLocalAccountButton_clicked();

private:
    Ui::LogInWidget *ui;
};

#endif // LOGINWIDGET_H
