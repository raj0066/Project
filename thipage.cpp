#include "thipage.h"
#include "ui_thipage.h"

thipage::thipage(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::thipage)
{
    ui->setupUi(this);
}

thipage::~thipage()
{
    delete ui;
}

void thipage::on_pushButton_next2_clicked()
{
    if(ui->radioButton->isChecked()){
        hide();
        f = new forpage(this);
        f->show();
    }
    else if(ui->radioButton_2->isChecked()){
        hide();
        f = new forpage(this);
        f->show();
    }
    else if(ui->radioButton_3->isChecked()){
        hide();
        f = new forpage(this);
        f->show();
    }
    else if(ui->radioButton_4->isChecked()){
        hide();
        f = new forpage(this);
        f->show();
    }

}

/*hide();
    f = new forpage(this);
    f->show();*/
