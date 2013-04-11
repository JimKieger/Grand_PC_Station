#include "displaywidget.h"

DisplayCentralWidget::DisplayCentralWidget(QWidget *parent) :
    QWidget(parent)
{

    QWidget *GameListing = new QWidget;
    QWidget *Options = new QWidget;
    QWidget *Settings = new QWidget;

    QStackedWidget *stackedWidget = new QStackedWidget;
    stackedWidget->addWidget(GameListing);
    stackedWidget->addWidget(Options);
    stackedWidget->addWidget(Settings);


    QComboBox *pageComboBox = new QComboBox;
    pageComboBox->addItem(tr("Page 1"));
    pageComboBox->addItem(tr("Page 2"));
    pageComboBox->addItem(tr("Page 3"));
    connect(pageComboBox, SIGNAL(activated(int)),
            stackedWidget, SLOT(setCurrentIndex(int)));


    QVBoxLayout *layout = new QVBoxLayout;

    layout->addWidget(pageComboBox);

    layout->addWidget(stackedWidget);
    setLayout(layout);

}
