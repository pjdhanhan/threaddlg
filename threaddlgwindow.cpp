#include "threaddlgwindow.h"
#include "ui_threaddlgwindow.h"

ThreadDlgWindow::ThreadDlgWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::ThreadDlgWindow)
{
    ui->setupUi(this);
}

ThreadDlgWindow::~ThreadDlgWindow()
{
    delete ui;
}
