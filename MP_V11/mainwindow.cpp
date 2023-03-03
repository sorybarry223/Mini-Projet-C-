#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QMessageBox>
#include <QPixmap>
#include <QVector>
#include "user.h"
#include <QFile>
#include <QTextStream>
#include "utilisateur.h"
MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);


    if(!connOpen())
        ui->label_db->setText("Failed to open the database");
    else
        ui->label_db->setText("Database connected");



//    QPixmap pix("./pic.jpg");
//    int w=  ui->label_pic->width();
//    int h=  ui->label_pic->height();
//    ui->label_pic->setPixmap(pix.scaled(w,h,Qt::KeepAspectRatio));
    /******************************************************************/
    QPixmap pic("./wp1.jpg");
    int wa=  ui->label_wp->width();
    int ha=  ui->label_wp->height();
    ui->label_wp->setPixmap(pic.scaled(wa,ha,Qt::KeepAspectRatio));
    /******************************************************************/



   /* if(!mydb.open())
        ui->label->setText("Failed to open the database");
    else
        ui->label->setText("Database connected"); */

}

MainWindow::~MainWindow()
{
    delete ui;
}
void MainWindow::on_pushButton_Login_clicked()
{

    QFile file("MP.txt");
    if(!file.open(QFile::ReadOnly|QFile::Text))
    {
        QMessageBox::warning(this,"title","file not open");
    }
    else
    {
        QString line;
        QTextStream stream(&file);



    while(!stream.atEnd())
    {
    line=stream.readLine();
    // QMessageBox::information(this, "line info",line);
    QRegExp rx("(\\ |\\t)");
    QStringList list=line.split(rx);
    user u;
    u.set_username(list.at(0));
    u.set_password(list.at(1));
    u.set_role(list.at(2));
    liste_user.push_back(u);


    }
    file.flush();
    file.close();
    }


    QString username=ui->lineEdit_user_name->text();
    QString Passeword=ui->lineEdit_Passeword->text();

    if(!mydb.open()){

        qDebug()<<("Failed to open the database");
        return ;
    }

    connOpen();
    if(ui->radioButton->isChecked()){

        int trouve=0;
        for(it=liste_user.begin();it!=liste_user.end();it++)
        {
            if(it->get_username()==username && it->get_password()==Passeword && it->get_role()=="admin")
            {
                QMessageBox::information(this, "login", "Username and Password are correct, Welcome Admin");

                hide();
                connClose();
                secDialog=new SecDialog(this);
                secDialog->show();
                trouve=1;
                break;
            }


        }


        if(trouve==0)
       {
           QMessageBox::warning(this, "Title", "Donnée incorrecte");
       }



    if(username == "test" && Passeword== "test_admin"){
        QMessageBox::information(this, "login", "Username and Password are correct, Welcome Admin");

        connClose();
        secDialog=new SecDialog(this);
        secDialog->show();

    }
//    else {
//        QMessageBox::warning(this, "Login", "Username or  Password invalid");
//    }
    }
    if(ui->radioButton_2->isChecked()){

        int trouve=0;

        for(it=liste_user.begin();it!=liste_user.end();it++)
        {
            if(it->get_username()==username && it->get_password()==Passeword && it->get_role()=="user")
            {
                QMessageBox::information(this, "login", "Username and Password are correct, Welcome User");

                /*secDialog=new SecDialog(this);
                secDialog->show();*/
                UT=new utilisateur(this);
                UT->show();
                hide();
                trouve=1;
                break;
            }

        }

        if(trouve==0)
       {
           QMessageBox::warning(this, "Title", "Donnée incorrecte");
       }



        if(username == "test" && Passeword== "testuser"){
            QMessageBox::information(this, "login", "Username and Password are correct, Welcome User");

    }
//        else {
//            QMessageBox::warning(this, "Login", "Username or  Passeword invalid");
//        }
    }
}
