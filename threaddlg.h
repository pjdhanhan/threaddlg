#ifndef THREADDLG_H
#define THREADDLG_H

#include <QDialog>
#include <QPushButton>
#include "workthread.h"
#define MAXSIZE 2
namespace Ui {
class ThreadDlg;
}

class ThreadDlg : public QDialog
{
    Q_OBJECT

public:
    explicit ThreadDlg(QWidget *parent = 0);
    ~ThreadDlg();

private:
    Ui::ThreadDlg *ui;
    QPushButton *startBtn;
    QPushButton *stopBtn;
    QPushButton *quitBtn;
    WorkThread *workThraed[MAXSIZE];
public slots:
    void slotStart();
    void slotStop();
};

#endif // THREADDLG_H
