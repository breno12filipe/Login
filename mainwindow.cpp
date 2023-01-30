#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include <QMessageBox>

MainWindow::MainWindow(QWidget *parent): QMainWindow(parent), ui(new Ui::MainWindow){
    ui->setupUi(this);
    connect(ui->pushButton_2, SIGNAL(clicked()), this, SLOT(clearAllLoginLineEdit()));
}

void MainWindow::clearAllLoginLineEdit(){
    ui->lineEdit->clear();
    ui->lineEdit_2->clear();
}

void MainWindow::on_pushButton_clicked() {
    QMessageBox::information(this, "Sistema", "Usuário foi logado com sucesso!");
}

MainWindow::~MainWindow() {
    delete ui;
}

void MainWindow::on_checkBox_stateChanged(int arg1)
{
    if (arg1 == 2) {
        ui->lineEdit_2->setEchoMode(QLineEdit::Normal);
    }
    if (arg1 == 0){
        ui->lineEdit_2->setEchoMode(QLineEdit::Password);
    }
}

