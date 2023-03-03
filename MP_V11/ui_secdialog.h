/********************************************************************************
** Form generated from reading UI file 'secdialog.ui'
**
** Created by: Qt User Interface Compiler version 5.2.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SECDIALOG_H
#define UI_SECDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTableView>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "qcustomplot.h"

QT_BEGIN_NAMESPACE

class Ui_SecDialog
{
public:
    QLabel *label_pic_pic;
    QLabel *label_date_time;
    QLabel *label_status;
    QTabWidget *tabWidget;
    QWidget *tab;
    QLabel *label_pic1;
    QWidget *tab_2;
    QVBoxLayout *verticalLayout;
    QPlainTextEdit *plainTextEdit;
    QHBoxLayout *horizontalLayout;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QWidget *tab_3;
    QTextEdit *textEdit_2;
    QWidget *tab_4;
    QGroupBox *groupBox;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_ID_achat;
    QLineEdit *lineEdit_ID_achat;
    QHBoxLayout *horizontalLayout_7;
    QLabel *label_Date_achat;
    QLineEdit *lineEdit_Date_achat;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_Nbre_achat;
    QLineEdit *lineEdit_Nbre_achat;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_categorie;
    QLineEdit *lineEdit_Categorie;
    QHBoxLayout *horizontalLayout_6;
    QLabel *label_Methode_payement;
    QLineEdit *lineEdit_payement;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_ID_produit;
    QLineEdit *lineEdit_ID_produit;
    QPushButton *pushButton_Enregistrer;
    QPushButton *pushButton_Modifier;
    QPushButton *pushButton_Delete;
    QTableView *tableView_achat;
    QPushButton *pushButton_load_table_a;
    QComboBox *comboBox_2;
    QTableView *tableView;
    QWidget *tab_5;
    QGroupBox *groupBox_2;
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *horizontalLayout_9;
    QLabel *label_ID_produit_2;
    QLineEdit *lineEdit_ID_produit_2;
    QHBoxLayout *horizontalLayout_10;
    QLabel *label_Nom;
    QLineEdit *lineEdit_Nom;
    QHBoxLayout *horizontalLayout_12;
    QLabel *label_Categorie_2;
    QLineEdit *lineEdit_Categorie_2;
    QHBoxLayout *horizontalLayout_11;
    QLabel *label_Stock;
    QLineEdit *lineEdit_Stock;
    QPushButton *pushButton_Enregistrer_2;
    QPushButton *pushButton_Modifier_2;
    QPushButton *pushButton_Delete_2;
    QTableView *tableView_produit;
    QPushButton *pushButton_load_table_p;
    QComboBox *comboBox;
    QTableView *tableView_2;
    QWidget *tab_6;
    QCustomPlot *plot;
    QDoubleSpinBox *doubleSpinBox;
    QDoubleSpinBox *doubleSpinBox_2;
    QPushButton *pushButton_add;
    QLabel *label;
    QLabel *label_2;
    QPushButton *pushButton_clear;

    void setupUi(QDialog *SecDialog)
    {
        if (SecDialog->objectName().isEmpty())
            SecDialog->setObjectName(QStringLiteral("SecDialog"));
        SecDialog->resize(818, 501);
        label_pic_pic = new QLabel(SecDialog);
        label_pic_pic->setObjectName(QStringLiteral("label_pic_pic"));
        label_pic_pic->setGeometry(QRect(10, 10, 791, 481));
        label_date_time = new QLabel(SecDialog);
        label_date_time->setObjectName(QStringLiteral("label_date_time"));
        label_date_time->setGeometry(QRect(570, 450, 171, 21));
        QFont font;
        font.setPointSize(14);
        font.setBold(true);
        font.setWeight(75);
        label_date_time->setFont(font);
        label_status = new QLabel(SecDialog);
        label_status->setObjectName(QStringLiteral("label_status"));
        label_status->setGeometry(QRect(60, 440, 241, 31));
        tabWidget = new QTabWidget(SecDialog);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
        tabWidget->setGeometry(QRect(30, 30, 761, 381));
        tabWidget->setStyleSheet(QStringLiteral("background-color:rgb(85, 170, 255)"));
        tabWidget->setTabShape(QTabWidget::Triangular);
        tab = new QWidget();
        tab->setObjectName(QStringLiteral("tab"));
        label_pic1 = new QLabel(tab);
        label_pic1->setObjectName(QStringLiteral("label_pic1"));
        label_pic1->setGeometry(QRect(120, 0, 491, 361));
        tabWidget->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QStringLiteral("tab_2"));
        verticalLayout = new QVBoxLayout(tab_2);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        plainTextEdit = new QPlainTextEdit(tab_2);
        plainTextEdit->setObjectName(QStringLiteral("plainTextEdit"));
        plainTextEdit->setStyleSheet(QStringLiteral("background-color:rgb(255, 255, 255)"));

        verticalLayout->addWidget(plainTextEdit);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        pushButton = new QPushButton(tab_2);
        pushButton->setObjectName(QStringLiteral("pushButton"));

        horizontalLayout->addWidget(pushButton);

        pushButton_2 = new QPushButton(tab_2);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));

        horizontalLayout->addWidget(pushButton_2);


        verticalLayout->addLayout(horizontalLayout);

        tabWidget->addTab(tab_2, QString());
        tab_3 = new QWidget();
        tab_3->setObjectName(QStringLiteral("tab_3"));
        textEdit_2 = new QTextEdit(tab_3);
        textEdit_2->setObjectName(QStringLiteral("textEdit_2"));
        textEdit_2->setGeometry(QRect(10, 20, 461, 311));
        textEdit_2->setStyleSheet(QStringLiteral("background-color:rgb(85, 170, 255)"));
        tabWidget->addTab(tab_3, QString());
        tab_4 = new QWidget();
        tab_4->setObjectName(QStringLiteral("tab_4"));
        groupBox = new QGroupBox(tab_4);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setGeometry(QRect(10, 10, 301, 321));
        verticalLayout_2 = new QVBoxLayout(groupBox);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        label_ID_achat = new QLabel(groupBox);
        label_ID_achat->setObjectName(QStringLiteral("label_ID_achat"));

        horizontalLayout_2->addWidget(label_ID_achat);

        lineEdit_ID_achat = new QLineEdit(groupBox);
        lineEdit_ID_achat->setObjectName(QStringLiteral("lineEdit_ID_achat"));
        lineEdit_ID_achat->setStyleSheet(QStringLiteral("background-color:rgb(255, 255, 255)"));

        horizontalLayout_2->addWidget(lineEdit_ID_achat);


        verticalLayout_2->addLayout(horizontalLayout_2);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName(QStringLiteral("horizontalLayout_7"));
        label_Date_achat = new QLabel(groupBox);
        label_Date_achat->setObjectName(QStringLiteral("label_Date_achat"));

        horizontalLayout_7->addWidget(label_Date_achat);

        lineEdit_Date_achat = new QLineEdit(groupBox);
        lineEdit_Date_achat->setObjectName(QStringLiteral("lineEdit_Date_achat"));
        lineEdit_Date_achat->setStyleSheet(QStringLiteral("background-color:rgb(255, 255, 255)"));

        horizontalLayout_7->addWidget(lineEdit_Date_achat);


        verticalLayout_2->addLayout(horizontalLayout_7);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        label_Nbre_achat = new QLabel(groupBox);
        label_Nbre_achat->setObjectName(QStringLiteral("label_Nbre_achat"));

        horizontalLayout_4->addWidget(label_Nbre_achat);

        lineEdit_Nbre_achat = new QLineEdit(groupBox);
        lineEdit_Nbre_achat->setObjectName(QStringLiteral("lineEdit_Nbre_achat"));
        lineEdit_Nbre_achat->setStyleSheet(QStringLiteral("background-color:rgb(255, 255, 255)"));

        horizontalLayout_4->addWidget(lineEdit_Nbre_achat);


        verticalLayout_2->addLayout(horizontalLayout_4);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        label_categorie = new QLabel(groupBox);
        label_categorie->setObjectName(QStringLiteral("label_categorie"));

        horizontalLayout_5->addWidget(label_categorie);

        lineEdit_Categorie = new QLineEdit(groupBox);
        lineEdit_Categorie->setObjectName(QStringLiteral("lineEdit_Categorie"));
        lineEdit_Categorie->setStyleSheet(QStringLiteral("background-color:rgb(255, 255, 255)"));

        horizontalLayout_5->addWidget(lineEdit_Categorie);


        verticalLayout_2->addLayout(horizontalLayout_5);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName(QStringLiteral("horizontalLayout_6"));
        label_Methode_payement = new QLabel(groupBox);
        label_Methode_payement->setObjectName(QStringLiteral("label_Methode_payement"));

        horizontalLayout_6->addWidget(label_Methode_payement);

        lineEdit_payement = new QLineEdit(groupBox);
        lineEdit_payement->setObjectName(QStringLiteral("lineEdit_payement"));
        lineEdit_payement->setStyleSheet(QStringLiteral("background-color:rgb(255, 255, 255)"));

        horizontalLayout_6->addWidget(lineEdit_payement);


        verticalLayout_2->addLayout(horizontalLayout_6);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        label_ID_produit = new QLabel(groupBox);
        label_ID_produit->setObjectName(QStringLiteral("label_ID_produit"));

        horizontalLayout_3->addWidget(label_ID_produit);

        lineEdit_ID_produit = new QLineEdit(groupBox);
        lineEdit_ID_produit->setObjectName(QStringLiteral("lineEdit_ID_produit"));
        lineEdit_ID_produit->setStyleSheet(QStringLiteral("background-color:rgb(255, 255, 255)"));
        lineEdit_ID_produit->setEchoMode(QLineEdit::Normal);

        horizontalLayout_3->addWidget(lineEdit_ID_produit);


        verticalLayout_2->addLayout(horizontalLayout_3);

        pushButton_Enregistrer = new QPushButton(groupBox);
        pushButton_Enregistrer->setObjectName(QStringLiteral("pushButton_Enregistrer"));
        pushButton_Enregistrer->setStyleSheet(QStringLiteral("background-color:rgb(255, 255, 255)"));

        verticalLayout_2->addWidget(pushButton_Enregistrer);

        pushButton_Modifier = new QPushButton(groupBox);
        pushButton_Modifier->setObjectName(QStringLiteral("pushButton_Modifier"));
        pushButton_Modifier->setStyleSheet(QStringLiteral("background-color:rgb(255, 255, 255)"));

        verticalLayout_2->addWidget(pushButton_Modifier);

        pushButton_Delete = new QPushButton(groupBox);
        pushButton_Delete->setObjectName(QStringLiteral("pushButton_Delete"));
        pushButton_Delete->setStyleSheet(QStringLiteral("background-color:rgb(255, 255, 255)"));

        verticalLayout_2->addWidget(pushButton_Delete);

        tableView_achat = new QTableView(tab_4);
        tableView_achat->setObjectName(QStringLiteral("tableView_achat"));
        tableView_achat->setGeometry(QRect(480, 30, 271, 261));
        tableView_achat->setStyleSheet(QStringLiteral("background-color:rgb(255, 255, 255)"));
        pushButton_load_table_a = new QPushButton(tab_4);
        pushButton_load_table_a->setObjectName(QStringLiteral("pushButton_load_table_a"));
        pushButton_load_table_a->setGeometry(QRect(570, 300, 81, 31));
        pushButton_load_table_a->setStyleSheet(QStringLiteral("background-color:rgb(255, 255, 255)"));
        comboBox_2 = new QComboBox(tab_4);
        comboBox_2->setObjectName(QStringLiteral("comboBox_2"));
        comboBox_2->setGeometry(QRect(330, 10, 91, 31));
        comboBox_2->setStyleSheet(QStringLiteral("background-color:rgb(255, 255, 255)"));
        tableView = new QTableView(tab_4);
        tableView->setObjectName(QStringLiteral("tableView"));
        tableView->setGeometry(QRect(320, 50, 131, 181));
        tableView->setStyleSheet(QStringLiteral("background-color:rgb(255, 255, 255)"));
        tabWidget->addTab(tab_4, QString());
        tab_5 = new QWidget();
        tab_5->setObjectName(QStringLiteral("tab_5"));
        groupBox_2 = new QGroupBox(tab_5);
        groupBox_2->setObjectName(QStringLiteral("groupBox_2"));
        groupBox_2->setGeometry(QRect(0, 10, 331, 331));
        verticalLayout_3 = new QVBoxLayout(groupBox_2);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        horizontalLayout_9 = new QHBoxLayout();
        horizontalLayout_9->setObjectName(QStringLiteral("horizontalLayout_9"));
        label_ID_produit_2 = new QLabel(groupBox_2);
        label_ID_produit_2->setObjectName(QStringLiteral("label_ID_produit_2"));

        horizontalLayout_9->addWidget(label_ID_produit_2);

        lineEdit_ID_produit_2 = new QLineEdit(groupBox_2);
        lineEdit_ID_produit_2->setObjectName(QStringLiteral("lineEdit_ID_produit_2"));
        lineEdit_ID_produit_2->setStyleSheet(QStringLiteral("background-color:rgb(255, 255, 255)"));

        horizontalLayout_9->addWidget(lineEdit_ID_produit_2);


        verticalLayout_3->addLayout(horizontalLayout_9);

        horizontalLayout_10 = new QHBoxLayout();
        horizontalLayout_10->setObjectName(QStringLiteral("horizontalLayout_10"));
        label_Nom = new QLabel(groupBox_2);
        label_Nom->setObjectName(QStringLiteral("label_Nom"));

        horizontalLayout_10->addWidget(label_Nom);

        lineEdit_Nom = new QLineEdit(groupBox_2);
        lineEdit_Nom->setObjectName(QStringLiteral("lineEdit_Nom"));
        lineEdit_Nom->setStyleSheet(QStringLiteral("background-color:rgb(255, 255, 255)"));

        horizontalLayout_10->addWidget(lineEdit_Nom);


        verticalLayout_3->addLayout(horizontalLayout_10);

        horizontalLayout_12 = new QHBoxLayout();
        horizontalLayout_12->setObjectName(QStringLiteral("horizontalLayout_12"));
        label_Categorie_2 = new QLabel(groupBox_2);
        label_Categorie_2->setObjectName(QStringLiteral("label_Categorie_2"));

        horizontalLayout_12->addWidget(label_Categorie_2);

        lineEdit_Categorie_2 = new QLineEdit(groupBox_2);
        lineEdit_Categorie_2->setObjectName(QStringLiteral("lineEdit_Categorie_2"));
        lineEdit_Categorie_2->setStyleSheet(QStringLiteral("background-color:rgb(255, 255, 255)"));

        horizontalLayout_12->addWidget(lineEdit_Categorie_2);


        verticalLayout_3->addLayout(horizontalLayout_12);

        horizontalLayout_11 = new QHBoxLayout();
        horizontalLayout_11->setObjectName(QStringLiteral("horizontalLayout_11"));
        label_Stock = new QLabel(groupBox_2);
        label_Stock->setObjectName(QStringLiteral("label_Stock"));

        horizontalLayout_11->addWidget(label_Stock);

        lineEdit_Stock = new QLineEdit(groupBox_2);
        lineEdit_Stock->setObjectName(QStringLiteral("lineEdit_Stock"));
        lineEdit_Stock->setStyleSheet(QStringLiteral("background-color:rgb(255, 255, 255)"));

        horizontalLayout_11->addWidget(lineEdit_Stock);


        verticalLayout_3->addLayout(horizontalLayout_11);

        pushButton_Enregistrer_2 = new QPushButton(groupBox_2);
        pushButton_Enregistrer_2->setObjectName(QStringLiteral("pushButton_Enregistrer_2"));
        pushButton_Enregistrer_2->setStyleSheet(QStringLiteral("background-color:rgb(255, 255, 255)"));

        verticalLayout_3->addWidget(pushButton_Enregistrer_2);

        pushButton_Modifier_2 = new QPushButton(groupBox_2);
        pushButton_Modifier_2->setObjectName(QStringLiteral("pushButton_Modifier_2"));
        pushButton_Modifier_2->setStyleSheet(QStringLiteral("background-color:rgb(255, 255, 255)"));

        verticalLayout_3->addWidget(pushButton_Modifier_2);

        pushButton_Delete_2 = new QPushButton(groupBox_2);
        pushButton_Delete_2->setObjectName(QStringLiteral("pushButton_Delete_2"));
        pushButton_Delete_2->setStyleSheet(QStringLiteral("background-color:rgb(255, 255, 255)"));

        verticalLayout_3->addWidget(pushButton_Delete_2);

        tableView_produit = new QTableView(tab_5);
        tableView_produit->setObjectName(QStringLiteral("tableView_produit"));
        tableView_produit->setGeometry(QRect(490, 20, 256, 281));
        tableView_produit->setStyleSheet(QStringLiteral("background-color:rgb(255, 255, 255)"));
        pushButton_load_table_p = new QPushButton(tab_5);
        pushButton_load_table_p->setObjectName(QStringLiteral("pushButton_load_table_p"));
        pushButton_load_table_p->setGeometry(QRect(580, 310, 91, 31));
        pushButton_load_table_p->setStyleSheet(QStringLiteral("background-color:rgb(255, 255, 255)"));
        comboBox = new QComboBox(tab_5);
        comboBox->setObjectName(QStringLiteral("comboBox"));
        comboBox->setGeometry(QRect(340, 10, 111, 31));
        comboBox->setStyleSheet(QStringLiteral("background-color:rgb(255, 255, 255)"));
        tableView_2 = new QTableView(tab_5);
        tableView_2->setObjectName(QStringLiteral("tableView_2"));
        tableView_2->setGeometry(QRect(340, 70, 121, 171));
        tableView_2->setStyleSheet(QStringLiteral("background-color:rgb(255, 255, 255)"));
        tabWidget->addTab(tab_5, QString());
        tab_6 = new QWidget();
        tab_6->setObjectName(QStringLiteral("tab_6"));
        plot = new QCustomPlot(tab_6);
        plot->setObjectName(QStringLiteral("plot"));
        plot->setGeometry(QRect(50, 20, 651, 261));
        plot->setStyleSheet(QStringLiteral("background-color:rgb(255, 255, 255);"));
        doubleSpinBox = new QDoubleSpinBox(tab_6);
        doubleSpinBox->setObjectName(QStringLiteral("doubleSpinBox"));
        doubleSpinBox->setGeometry(QRect(200, 310, 71, 31));
        doubleSpinBox_2 = new QDoubleSpinBox(tab_6);
        doubleSpinBox_2->setObjectName(QStringLiteral("doubleSpinBox_2"));
        doubleSpinBox_2->setGeometry(QRect(380, 310, 71, 31));
        pushButton_add = new QPushButton(tab_6);
        pushButton_add->setObjectName(QStringLiteral("pushButton_add"));
        pushButton_add->setGeometry(QRect(460, 310, 81, 31));
        label = new QLabel(tab_6);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(100, 310, 81, 31));
        label_2 = new QLabel(tab_6);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(290, 310, 81, 31));
        pushButton_clear = new QPushButton(tab_6);
        pushButton_clear->setObjectName(QStringLiteral("pushButton_clear"));
        pushButton_clear->setGeometry(QRect(550, 310, 81, 31));
        tabWidget->addTab(tab_6, QString());

        retranslateUi(SecDialog);

        tabWidget->setCurrentIndex(5);


        QMetaObject::connectSlotsByName(SecDialog);
    } // setupUi

    void retranslateUi(QDialog *SecDialog)
    {
        SecDialog->setWindowTitle(QApplication::translate("SecDialog", "Dialog", 0));
        label_pic_pic->setText(QString());
        label_date_time->setText(QString());
        label_status->setText(QApplication::translate("SecDialog", "TextLabel", 0));
        label_pic1->setText(QString());
        tabWidget->setTabText(tabWidget->indexOf(tab), QApplication::translate("SecDialog", "Bienvenue", 0));
        tabWidget->setTabToolTip(tabWidget->indexOf(tab), QApplication::translate("SecDialog", "Bienvenue", 0));
        pushButton->setText(QApplication::translate("SecDialog", "Write", 0));
        pushButton_2->setText(QApplication::translate("SecDialog", "Read", 0));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QApplication::translate("SecDialog", "Admin", 0));
        tabWidget->setTabToolTip(tabWidget->indexOf(tab_2), QApplication::translate("SecDialog", "Admin", 0));
        textEdit_2->setHtml(QApplication::translate("SecDialog", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:8.25pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:12pt;\">Ce projet consiste \303\240 cr\303\251er un gestionnaire d'approvisionnement d'une boutique de vente d'appareils \303\251lectriques et \303\251lectroniques; de faire une interface graphique simplifiant la connexion aux comptes et une base de donn\303\251es permettant la gestion des approvisionnements et des ventes. </span></p></body></html>", 0));
        tabWidget->setTabText(tabWidget->indexOf(tab_3), QApplication::translate("SecDialog", "A propos", 0));
        tabWidget->setTabToolTip(tabWidget->indexOf(tab_3), QApplication::translate("SecDialog", "A propos", 0));
        groupBox->setTitle(QApplication::translate("SecDialog", "Data Base", 0));
        label_ID_achat->setText(QApplication::translate("SecDialog", "ID achat", 0));
        label_Date_achat->setText(QApplication::translate("SecDialog", "Date achat", 0));
        label_Nbre_achat->setText(QApplication::translate("SecDialog", "Nbre d'achat", 0));
        label_categorie->setText(QApplication::translate("SecDialog", "Cat\303\251gorie", 0));
        label_Methode_payement->setText(QApplication::translate("SecDialog", "Methode de payement", 0));
        label_ID_produit->setText(QApplication::translate("SecDialog", "ID du produit", 0));
        lineEdit_ID_produit->setText(QString());
        pushButton_Enregistrer->setText(QApplication::translate("SecDialog", "Enregistrer", 0));
        pushButton_Modifier->setText(QApplication::translate("SecDialog", "Modifier", 0));
        pushButton_Delete->setText(QApplication::translate("SecDialog", "Supprimer", 0));
        pushButton_load_table_a->setText(QApplication::translate("SecDialog", "Load Table", 0));
        tabWidget->setTabText(tabWidget->indexOf(tab_4), QApplication::translate("SecDialog", "Achat", 0));
        groupBox_2->setTitle(QApplication::translate("SecDialog", "Data Base", 0));
        label_ID_produit_2->setText(QApplication::translate("SecDialog", "ID_produit", 0));
        label_Nom->setText(QApplication::translate("SecDialog", "Nom", 0));
        label_Categorie_2->setText(QApplication::translate("SecDialog", "Categorie", 0));
        label_Stock->setText(QApplication::translate("SecDialog", "Stock", 0));
        pushButton_Enregistrer_2->setText(QApplication::translate("SecDialog", "Enregistrer", 0));
        pushButton_Modifier_2->setText(QApplication::translate("SecDialog", "Modifier", 0));
        pushButton_Delete_2->setText(QApplication::translate("SecDialog", "Supprimer", 0));
        pushButton_load_table_p->setText(QApplication::translate("SecDialog", "Load Table", 0));
        tabWidget->setTabText(tabWidget->indexOf(tab_5), QApplication::translate("SecDialog", "Produit", 0));
        pushButton_add->setText(QApplication::translate("SecDialog", "Add", 0));
        label->setText(QApplication::translate("SecDialog", "<html><head/><body><p><span style=\" font-size:10pt; font-weight:600;\">ID_produit</span></p></body></html>", 0));
        label_2->setText(QApplication::translate("SecDialog", "<html><head/><body><p><span style=\" font-size:10pt; font-weight:600;\">Nbre_Achat</span></p></body></html>", 0));
        pushButton_clear->setText(QApplication::translate("SecDialog", "Clear", 0));
        tabWidget->setTabText(tabWidget->indexOf(tab_6), QApplication::translate("SecDialog", "Statistics", 0));
    } // retranslateUi

};

namespace Ui {
    class SecDialog: public Ui_SecDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SECDIALOG_H
