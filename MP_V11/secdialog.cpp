#include "secdialog.h"
#include "ui_secdialog.h"
#include <QFile>
#include <QTextStream>
#include <QMessageBox>
#include<QFileDialog>
#include <QSqlQuery>
#include <QTimer>
#include <QDebug>
#include <QDateTime>
#include <QPixmap>
#include "mainwindow.h"


SecDialog::SecDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::SecDialog)
{
    ui->setupUi(this);

    ui->plot->addGraph();
    ui->plot->graph(0)->setScatterStyle(QCPScatterStyle::ssCircle);
    ui->plot->graph(0)->setLineStyle(QCPGraph::lsNone);

    timer=new QTimer(this);
    connect(timer,SIGNAL(timeout()),this,SLOT(myfonction()));
    timer->start(1000);

            MainWindow conn;

            if(!conn.connOpen())
                ui->label_status->setText("Failed to open the database");
            else
                ui->label_status->setText("Database connected");


    QPixmap pix("./WELCOME.jpg");
    int w = ui->label_pic1->width();
    int h =ui->label_pic1->height();
        ui->label_pic1->setPixmap(pix.scaled(w,h,Qt::KeepAspectRatio));


        /* **********************************************************/
        QPixmap pic("./wpf.jpg");
        int wi = ui->label_pic_pic->width();
        int hi =ui->label_pic_pic->height();
            ui->label_pic_pic->setPixmap(pic.scaled(1000,800,Qt::KeepAspectRatio));
        /***************************************************************/



}

SecDialog::~SecDialog()
{
    delete ui;
}

void SecDialog::addpoint(double x, double y)
{
    qvx.append(x);
    qvy.append(y);

}

void SecDialog::clearData()
{
    qvx.clear();
    qvy.clear();
}

void SecDialog::Plot()
{
    ui->plot->graph(0)->setData(qvx,qvy);
    ui->plot->replot();
    ui->plot->update();
}

void SecDialog::myfonction()
{
    QTime time=QTime::currentTime();
    QString time_text=time.toString("hh : mm : ss");
    ui->label_date_time->setText(time_text);
}

void SecDialog::on_pushButton_clicked()
{
    QFile file("./MP.txt");
    if(!file.open(QFile::WriteOnly | QFile::Text)){
        QMessageBox::warning(this,"title","file not open");
    }
    QTextStream out(&file);
    QString text=ui->plainTextEdit->toPlainText();
    out <<text ;
        file.flush();
        file.close();

}

void SecDialog::on_pushButton_2_clicked()
{
    QString filter = " Text File(*.txt) ";
        QString file_name= QFileDialog::getOpenFileName(this,"open a file","./",filter);
        QFile file(file_name);
        if(!file.open(QFile::ReadOnly | QFile::Text)) {
            QMessageBox::warning(this,"title","file not open");


        }
        QTextStream in(&file);
        QString text = in.readAll();
        ui->plainTextEdit->setPlainText(text);

        file.close();

}

void SecDialog::on_pushButton_Enregistrer_clicked()
{
    MainWindow conn;
    QString ID_achat, Date_achat,Nbre_achat,Categorie,Moyen_de_payement,ID_produit,Heure_achat;

    ID_achat=ui->lineEdit_ID_achat->text();
    Date_achat=ui->lineEdit_Date_achat->text();
    Nbre_achat=ui->lineEdit_Nbre_achat->text();
    Categorie=ui->lineEdit_Categorie->text();
    Moyen_de_payement=ui->lineEdit_payement->text();
    ID_produit=ui->lineEdit_ID_produit->text();
    Heure_achat=ui->label_date_time->text();

        if(!conn.connOpen()){

            qDebug()<<("Failed to open the database");
            return ;
        }
    conn.connOpen();
    QSqlQuery qry;
    qry.prepare("insert into Achats(ID_achat,Date_achat,Nbre_achat,Categorie,Moyen_de_payement,ID_produit,Heure_achat) values('"+ID_achat+"','"+Date_achat+"','"+Nbre_achat+"','"+Categorie+"','"+Moyen_de_payement+"','"+ID_produit+"','"+Heure_achat+"')");


    if(qry.exec())
    {
        QMessageBox::critical(this,tr("Enregistrement"),tr("Your Data is saved"));
        conn.connClose();
    }
    else
    {
        QMessageBox::critical(this,tr("Error"),tr("Your Data is not saved"));
    }

}

void SecDialog::on_pushButton_Enregistrer_2_clicked()
{
    MainWindow conn;
    QString ID_produit,Nom,Categorie,Stock ;

    ID_produit=ui->lineEdit_ID_produit_2->text();
    Nom=ui->lineEdit_Nom->text();
    Categorie=ui->lineEdit_Categorie_2->text();
    Stock=ui->lineEdit_Stock->text();

        if(!conn.connOpen()){

            qDebug()<<("Failed to open the database");
            return ;
        }
    conn.connOpen();
    QSqlQuery qry;
    qry.prepare("insert into Produits(ID_produit,Nom,Categorie,Stock) values('"+ID_produit+"','"+Nom+"','"+Categorie+"','"+Stock+"')");

    if(qry.exec())
    {
        QMessageBox::critical(this,tr("Enregistrement"),tr("Your Data is saved"));
        conn.connClose();
    }
    else
    {
        QMessageBox::critical(this,tr("Error"),tr("Your Data is not saved"));
    }
}

void SecDialog::on_pushButton_Modifier_clicked()
{
    MainWindow conn;
    QString ID_achat, Date_achat,Nbre_achat,Categorie,Moyen_de_payement,ID_produit,Heure_achat;

    ID_achat=ui->lineEdit_ID_achat->text();
    Date_achat=ui->lineEdit_Date_achat->text();
    Nbre_achat=ui->lineEdit_Nbre_achat->text();
    Categorie=ui->lineEdit_Categorie->text();
    Moyen_de_payement=ui->lineEdit_payement->text();
    ID_produit=ui->lineEdit_ID_produit->text();
    Heure_achat=ui->label_date_time->text();

        if(!conn.connOpen()){

            qDebug()<<("Failed to open the database");
            return ;
        }
    conn.connOpen();
    QSqlQuery qry;
//    qry.prepare("insert into Achats(ID_achat,Date_achat,Nbre_achat,Categorie,Moyen_de_payement,ID_produit) values('"+ID_achat+"','"+Date_achat+"','"+Nbre_achat+"','"+Categorie+"','"+Moyen_de_payement+"','"+ID_produit+"')");

    qry.prepare("update Achats set ID_achat='"+ID_achat+"',Date_achat='"+Date_achat+"',Nbre_achat='"+Nbre_achat+"',Categorie='"+Categorie+"', Moyen_de_payement='"+ Moyen_de_payement+"',ID_produit='"+ ID_produit+"',Heure_achat='"+Heure_achat+"' where ID_achat='"+ID_achat+"'");


    if(qry.exec())
    {
        QMessageBox::critical(this,tr("Modification"),tr("Donnée modifiée"));
        conn.connClose();
    }
    else
    {
        QMessageBox::critical(this,tr("Error"),tr("Your Data is not modified"));
    }

}

void SecDialog::on_pushButton_Modifier_2_clicked()
{
    MainWindow conn;
    QString ID_produit,Nom,Categorie,Stock ;

    ID_produit=ui->lineEdit_ID_produit_2->text();
    Nom=ui->lineEdit_Nom->text();
    Categorie=ui->lineEdit_Categorie_2->text();
    Stock=ui->lineEdit_Stock->text();

        if(!conn.connOpen()){

            qDebug()<<("Failed to open the database");
            return ;
        }
    conn.connOpen();
    QSqlQuery qry;
    qry.prepare("update Produits set ID_produit='"+ID_produit+"',Nom='"+Nom+"',Stock='"+Stock+"',Categorie='"+Categorie+"' where ID_produit='"+ID_produit+"'");

    if(qry.exec())
    {
        QMessageBox::critical(this,tr("Modification"),tr("Donnée modifiée"));
        conn.connClose();
    }
    else
    {
        QMessageBox::critical(this,tr("Error"),tr("Your Data is not saved"));
    }
}

void SecDialog::on_pushButton_Delete_clicked()
{
    MainWindow conn;
    QString ID_achat, Date_achat,Nbre_achat,Categorie,Moyen_de_payement,ID_produit;

    ID_achat=ui->lineEdit_ID_achat->text();
//    Date_achat=ui->lineEdit_Date_achat->text();
//    Nbre_achat=ui->lineEdit_Nbre_achat->text();
//    Categorie=ui->lineEdit_Categorie->text();
//    Moyen_de_payement=ui->lineEdit_payement->text();
//    ID_produit=ui->lineEdit_ID_produit->text();

        if(!conn.connOpen()){

            qDebug()<<("Failed to open the database");
            return ;
        }
    conn.connOpen();
    QSqlQuery qry;

    qry.prepare("Delete from Achats where ID_achat='"+ID_achat+"'");


    if(qry.exec())
    {
        QMessageBox::critical(this,tr("Suppression"),tr("Donnée supprimée"));
        conn.connClose();
    }
    else
    {
        QMessageBox::critical(this,tr("Error"),tr("Your Data is not deleted"));
    }

}

void SecDialog::on_pushButton_Delete_2_clicked()
{
    MainWindow conn;
    QString ID_produit,Nom,Categorie,Stock ;

    ID_produit=ui->lineEdit_ID_produit_2->text();
//    Nom=ui->lineEdit_Nom->text();
//    Categorie=ui->lineEdit_Categorie_2->text();
//    Stock=ui->lineEdit_Stock->text();

        if(!conn.connOpen()){

            qDebug()<<("Failed to open the database");
            return ;
        }
    conn.connOpen();
    QSqlQuery qry;
    //qry.prepare("update Produits set ID_produit='"+ID_produit+"',Nom='"+Nom+"',Stock='"+Stock+"',Categorie='"+Categorie+"' where ID_produit='"+ID_produit+"'");

    qry.prepare("Delete from Produits where ID_produit='"+ID_produit+"'");
    if(qry.exec())
    {
        QMessageBox::critical(this,tr("Suppression"),tr("Donnée supprimée"));
        //conn.connClose();
    }
    else
    {
        QMessageBox::critical(this,tr("Error"),tr("Your Data is not saved"));
    }
}

void SecDialog::on_pushButton_load_table_a_clicked()
{
    MainWindow conn;
    QSqlQueryModel * modal=new QSqlQueryModel();
    conn.connOpen();
    QSqlQuery* qry=new QSqlQuery(conn.mydb);
    qry->prepare("select * from Achats");
    qry->exec();
    modal->setQuery(*qry);
    ui->tableView_achat->setModel(modal);
    ui->comboBox_2->setModel(modal);
    conn.connClose();

    qDebug() <<(modal->rowCount());
}

void SecDialog::on_pushButton_load_table_p_clicked()
{
    MainWindow conn;
    QSqlQueryModel * modal=new QSqlQueryModel();
    conn.connOpen();
    QSqlQuery* qry=new QSqlQuery(conn.mydb);
    qry->prepare("select * from Produits");
    qry->exec();
    modal->setQuery(*qry);
    ui->tableView_produit->setModel(modal);
    ui->comboBox->setModel(modal);
    conn.connClose();

    qDebug() <<(modal->rowCount());
}

void SecDialog::on_tableView_achat_activated(const QModelIndex &index)
{
    QString val=ui->tableView_achat->model()->data(index).toString();
    MainWindow conn;
    if(!conn.connOpen()){

        qDebug()<<("Failed to open the database");
        return ;
    }
    conn.connOpen();
    QSqlQuery qry;
    //ID_achat, Date_achat,Nbre_achat,Categorie,Moyen_de_payement,ID_produit;
    qry.prepare("select * from Achats where ID_achat='"+val+"' or Date_achat='"+val+"' or Nbre_achat='"+val+"' or Categorie='"+val+"' or Moyen_de_payement='"+val+"' or ID_produit='"+val+"'");

    if(qry.exec())
    {
        while(qry.next())
        {
            ui->lineEdit_ID_achat->setText(qry.value(0).toString());
            ui->lineEdit_Date_achat->setText(qry.value(1).toString());
            ui->lineEdit_Nbre_achat->setText(qry.value(2).toString());
            ui->lineEdit_Categorie->setText(qry.value(3).toString());
            ui->lineEdit_payement->setText(qry.value(4).toString());
            ui->lineEdit_ID_produit->setText(qry.value(5).toString());
        }
        conn.connClose();
    }
    else
    {
        QMessageBox::critical(this,tr("error::"),qry.lastError().text());
    }



}


void SecDialog::on_tableView_produit_activated(const QModelIndex &index)
{
    QString val=ui->tableView_produit->model()->data(index).toString();
    MainWindow conn;
    if(!conn.connOpen()){

        qDebug()<<("Failed to open the database");
        return ;
    }
    conn.connOpen();
    QSqlQuery qry;
    //ID_produit,Nom,Categorie,Stock ;
    qry.prepare("select * from Produits where ID_produit='"+val+"' or Nom='"+val+"' or Categorie='"+val+"' or Stock='"+val+"'");

    if(qry.exec())
    {
        while(qry.next())
        {
            ui->lineEdit_ID_produit_2->setText(qry.value(0).toString());
            ui->lineEdit_Nom->setText(qry.value(1).toString());
            ui->lineEdit_Categorie_2->setText(qry.value(2).toString());
            ui->lineEdit_Stock->setText(qry.value(3).toString());

        }
        conn.connClose();
    }
    else
    {
        QMessageBox::critical(this,tr("error::"),qry.lastError().text());
    }

}


void SecDialog::on_comboBox_2_currentIndexChanged(const QString &arg1)
{
    QString ID_achat=ui->comboBox_2->currentText();
    MainWindow conn;


        if(!conn.connOpen()){

            qDebug()<<("Failed to open the database");
            return ;
        }
    QSqlQueryModel * modal=new QSqlQueryModel();
        conn.connOpen();


    QSqlQuery* qryy=new QSqlQuery(conn.mydb);
    qryy->prepare("select ID_achat from Achats");
    qryy->exec();
    modal->setQuery(*qryy);
    ui->tableView->setModel(modal);
    //ui->comboBox_2->setModel(modal);

    QSqlQuery qry;
    qry.prepare("select * from Achats where ID_achat='"+ID_achat+"' ");


    if(qry.exec())
    {
        while(qry.next())
        {
            ui->lineEdit_ID_achat->setText(qry.value(0).toString());
            ui->lineEdit_Date_achat->setText(qry.value(1).toString());
            ui->lineEdit_Nbre_achat->setText(qry.value(2).toString());
            ui->lineEdit_Categorie->setText(qry.value(3).toString());
            ui->lineEdit_payement->setText(qry.value(4).toString());
            ui->lineEdit_ID_produit->setText(qry.value(5).toString());
        }
        conn.connClose();
         qDebug() <<(modal->rowCount());
    }
    else
    {
        QMessageBox::critical(this,tr("Error"),tr("Your Data is not saved"));
    }
}

void SecDialog::on_comboBox_currentIndexChanged(const QString &arg1)
{
    QString ID_produit=ui->comboBox->currentText();
    MainWindow conn;


        if(!conn.connOpen()){

            qDebug()<<("Failed to open the database");
            return ;
        }
    QSqlQueryModel * modal=new QSqlQueryModel();
        conn.connOpen();


    QSqlQuery* qryy=new QSqlQuery(conn.mydb);
    qryy->prepare("select ID_produit from Produits");
    qryy->exec();
    modal->setQuery(*qryy);
    ui->tableView_2->setModel(modal);
    //ui->comboBox_2->setModel(modal);

    QSqlQuery qry;
    qry.prepare("select * from Produits where ID_produit='"+ID_produit+"' ");


    if(qry.exec())
    {
        while(qry.next())
        {
            ui->lineEdit_ID_produit_2->setText(qry.value(0).toString());
            ui->lineEdit_Nom->setText(qry.value(1).toString());
            ui->lineEdit_Categorie_2->setText(qry.value(2).toString());
            ui->lineEdit_Stock->setText(qry.value(3).toString());

        }
        conn.connClose();
         qDebug() <<(modal->rowCount());
    }
    else
    {
        QMessageBox::critical(this,tr("Error"),tr("Your Data is not saved"));
    }
}

void SecDialog::on_pushButton_add_clicked()
{
    addpoint(ui->doubleSpinBox->value(),ui->doubleSpinBox_2->value());
    Plot();
}

void SecDialog::on_pushButton_clear_clicked()
{
    clearData();
    Plot();
}
