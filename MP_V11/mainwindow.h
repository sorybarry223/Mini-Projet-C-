#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QtSql>
#include <QtDebug>
#include <QFileInfo>
#include "secdialog.h"
#include <QVector>
#include "user.h"
#include "utilisateur.h"

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    QSqlDatabase mydb;
    void connClose()
    {
        mydb.close();
        mydb.removeDatabase(QSqlDatabase::defaultConnection);
    }

    bool connOpen()
    {
        mydb=QSqlDatabase::addDatabase("QSQLITE");
        mydb.setDatabaseName("./Boutique.db");

        if(!mydb.open()){

            qDebug()<<("Failed to open the database");
            return false;
        }
            else
        {
            qDebug()<<("Database connected");
            return true;
        }
    }



public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();
    QVector<user> liste_user;
    QVector<user>::iterator it;

private slots:
    void on_pushButton_Login_clicked();

    void on_lineEdit_user_name_selectionChanged();

private:
    Ui::MainWindow *ui;
    SecDialog *secDialog;
    utilisateur *UT;


};

#endif // MAINWINDOW_H
