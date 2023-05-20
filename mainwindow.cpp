
#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QtSql>
#include<QDebug>


MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    db = QSqlDatabase::addDatabase("QSQLITE");
    db.setDatabaseName("D:/Software new/sqlite/a.db");
    qDebug() << db.open();
}

MainWindow::~MainWindow()
{
    db.close();
    delete ui;
}



void MainWindow::on_SignUp_clicked()
{
    signup_name = ui->lineName->text();
     signup_id = ui->lineID->text();
     signup_phone = ui->linePhone->text();
      signup_email = ui->lineEmail->text();
     if(signup_name.size()!=0 && signup_id.size()!=0 && signup_phone.size()!=0 && signup_email.size()!=0 ){
    QSqlQuery query;
         query.exec("INSERT INTO a(username, id, phone, email) VALUES (' "+signup_name+" ',' "+ signup_id+" ',' "+signup_phone+" ',' "+signup_email+" ')");

    hide();
    s = new secpage(this);
    s->show();
     }


}

