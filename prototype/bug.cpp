#include "bug.h"
#include "ui_bug.h"

bug::bug(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::bug)
{
    ui->setupUi(this);
}

bug::~bug()
{
    delete ui;
}
