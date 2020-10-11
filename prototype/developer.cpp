#include "developer.h"
#include "ui_developer.h"


developer::developer(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::developer)
{
    ui->setupUi(this);

}

developer::~developer()
{
    delete ui;
}
