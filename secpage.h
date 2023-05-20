#ifndef SECPAGE_H
#define SECPAGE_H

#include <QDialog>
#include "thipage.h"

namespace Ui {
class secpage;
}

class secpage : public QDialog
{
    Q_OBJECT

public:
    explicit secpage(QWidget *parent = nullptr);
    ~secpage();

private slots:
    void on_pushButton_next_clicked();

private:
    Ui::secpage *ui;
    thipage *t;
};

#endif // SECPAGE_H
