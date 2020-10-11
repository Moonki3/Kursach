#ifndef RATEAPP_H
#define RATEAPP_H

#include <QMainWindow>

namespace Ui {
class rateApp;
}

class rateApp : public QMainWindow
{
    Q_OBJECT

public:
    explicit rateApp(QWidget *parent = nullptr);
    ~rateApp();

private:
    Ui::rateApp *ui;
};

#endif // RATEAPP_H
