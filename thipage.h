#ifndef THIPAGE_H
#define THIPAGE_H

#include <QDialog>
#include "forpage.h"
namespace Ui {
class thipage;
}

class thipage : public QDialog
{
    Q_OBJECT

public:
    explicit thipage(QWidget *parent = nullptr);
    ~thipage();

private slots:
    void on_pushButton_next2_clicked();

private:
    Ui::thipage *ui;
    forpage *f;
};

#endif // THIPAGE_H
