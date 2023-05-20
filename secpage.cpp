#include "secpage.h"
#include "ui_secpage.h"

secpage::secpage(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::secpage)
{
    ui->setupUi(this);
}

secpage::~secpage()
{
    delete ui;
}

void secpage::on_pushButton_next_clicked()
{
    if(ui->saibutton->isChecked()){
        hide();
        t = new thipage(this);
        t->show();
    }
    else if(ui->abubutton->isChecked()){
        hide();
        t = new thipage(this);
        t->show();
    }
}

