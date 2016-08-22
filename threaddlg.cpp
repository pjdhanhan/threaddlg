#include "threaddlg.h"
#include "ui_threaddlg.h"
#include <QHBoxLayout>
#include <QDebug>

ThreadDlg::ThreadDlg(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::ThreadDlg)
{
    ui->setupUi(this);
    setWindowTitle(tr("线程"));
    startBtn=new QPushButton(tr("开始"));
    stopBtn=new QPushButton(tr("停止"));
    quitBtn=new QPushButton(tr("退出"));
    QHBoxLayout *mainLayout=new QHBoxLayout(this);
    mainLayout->addWidget(startBtn);
    mainLayout->addWidget(stopBtn);
    mainLayout->addWidget(quitBtn);
    connect(startBtn,SIGNAL(clicked()),this,SLOT(slotStart()));
    connect(stopBtn,SIGNAL(clicked()),this,SLOT(slotStop()));
    connect(quitBtn,SIGNAL(clicked()),this,SLOT(close()));
}
void ThreadDlg::slotStart()
{
    for(int i=0;i<MAXSIZE;i++)
    {
        workThraed[i]=new WorkThread();
    }
    for(int i=0;i<MAXSIZE;i++)
    {
        workThraed[i]->start();
    }
    startBtn->setEnabled(false);
    stopBtn->setEnabled(true);
}
void ThreadDlg::slotStop()
{
    for(int i=0;i<MAXSIZE;i++)
    {
        workThraed[i]->terminate();
        workThraed[i]->wait();
    }
    startBtn->setEnabled(true);
    stopBtn->setEnabled(false);
}


ThreadDlg::~ThreadDlg()
{
    delete ui;
}
