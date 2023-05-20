
#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include<QSqlDatabase>
#include<QSqlQuery>
#include "secpage.h"



QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow

{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_SignUp_clicked();

private:
    Ui::MainWindow *ui;
    QString signup_name,signup_id,signup_phone,signup_email;
    secpage *s;
    QSqlDatabase db;
};

#endif // MAINWINDOW_H
