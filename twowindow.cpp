#include "twowindow.h"
#include "ui_twowindow.h"

twoWindow::twoWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::twoWindow)
{
    ui->setupUi(this);
}

twoWindow::~twoWindow()
{
    delete ui;
}
