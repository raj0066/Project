#ifndef FORPAGE_H
#define FORPAGE_H

#include <QDialog>

namespace Ui {
class forpage;
}

class forpage : public QDialog
{
    Q_OBJECT

public:
    explicit forpage(QWidget *parent = nullptr);
    ~forpage();

private slots:
    void on_pushButton_end_clicked();

private:
    Ui::forpage *ui;
};

#endif // FORPAGE_H
