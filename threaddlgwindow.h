#ifndef THREADDLGWINDOW_H
#define THREADDLGWINDOW_H

#include <QMainWindow>

namespace Ui {
class ThreadDlgWindow;
}

class ThreadDlgWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit ThreadDlgWindow(QWidget *parent = 0);
    ~ThreadDlgWindow();

private:
    Ui::ThreadDlgWindow *ui;
};

#endif // THREADDLGWINDOW_H
