#include "login.h"
#include "ui_login.h"

Login::Login(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Login)
{
    ui->setupUi(this);
    QSqlDatabase mydb=QSqlDatabase::addDatabase("QSQLITE");
    mydb.setDatabaseName("/Boutique.db");

    if(!mydb.open())
        ui->label->setText("Failed to open the database");
    else
        ui->label->setText("Database connected");
}

Login::~Login()
{
    delete ui;
}
