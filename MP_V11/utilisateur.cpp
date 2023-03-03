#include "utilisateur.h"
#include "ui_utilisateur.h"
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

utilisateur::utilisateur(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::utilisateur)
{
    ui->setupUi(this);
    QPixmap pix("./WELCOME.jpg");
    int w = ui->label_pic11->width();
    int h =ui->label_pic11->height();
        ui->label_pic11->setPixmap(pix.scaled(w,h,Qt::KeepAspectRatio));

        /*****************************************************************/
        QPixmap pic("./wpf.jpg");
        int wi = ui->label_picture->width();
        int hi =ui->label_picture->height();
            ui->label_picture->setPixmap(pic.scaled(1000,800,Qt::KeepAspectRatio));

            /**************************************************************************/
            QPixmap pict("./wpf.jpg");
            int wia = ui->label->width();
            int hia =ui->label->height();
                ui->label->setPixmap(pict.scaled(wia,hi,Qt::KeepAspectRatio));



        /****************************************************************/
}

utilisateur::~utilisateur()
{
    delete ui;
}
