#include "mainwindow.h"
#include "ui_mainwindow.h"

#include <QDebug>

#include <QHostInfo>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    /**
    //Let's do blocking lookup
    QHostInfo info = QHostInfo::fromName("dsl.sk");

    this->ui->label->setText(info.hostName());
    this->ui->label_2->setText(info.addresses().first().toString());
    **/




}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::lookedup(const QHostInfo &host) {

    auto addrs = host.addresses();
    this->ui->pushButton->setText("Lookup");

    if(host.error() != QHostInfo::NoError) {
        this->ui->lineEdit_2->setText("No records found");
    } else {
        this->ui->lineEdit_2->setText(addrs.first().toString());

        for(auto addr : addrs) {
            this->ui->listWidget->addItem(addr.toString());
        }
    }

}

void MainWindow::on_pushButton_clicked()
{
    //Clear the list
    this->ui->listWidget->clear();
    //Change the button text
    this->ui->pushButton->setText("Cancel");
    //Let's do non-blocking lookup
    QHostInfo::lookupHost(this->ui->lineEdit->text(), this, &MainWindow::lookedup);

}

