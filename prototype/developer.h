#ifndef DEVELOPER_H
#define DEVELOPER_H

#include <QMainWindow>

namespace Ui {
class developer;
}

class developer : public QMainWindow
{
    Q_OBJECT

public:
    explicit developer(QWidget *parent = nullptr);
    ~developer();

private slots:


private:
    Ui::developer *ui;
};

#endif // DEVELOPER_H
