#include "rateapp.h"
#include "ui_rateapp.h"

rateApp::rateApp(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::rateApp)
{
    ui->setupUi(this);
}

rateApp::~rateApp()
{
    delete ui;
}
