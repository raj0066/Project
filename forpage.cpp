#include "forpage.h"
#include "ui_forpage.h"

forpage::forpage(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::forpage)
{
    ui->setupUi(this);
}

forpage::~forpage()
{
    delete ui;
}

void forpage::on_pushButton_end_clicked()
{
    this->close();
}

