/********************************************************************************
** Form generated from reading UI file 'utilisateur.ui'
**
** Created by: Qt User Interface Compiler version 5.2.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_UTILISATEUR_H
#define UI_UTILISATEUR_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_utilisateur
{
public:
    QWidget *centralwidget;
    QLabel *label_picture;
    QTabWidget *tabWidget;
    QWidget *tab;
    QLabel *label_pic11;
    QWidget *tab_2;
    QLabel *label;
    QTextEdit *textEdit_2;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *utilisateur)
    {
        if (utilisateur->objectName().isEmpty())
            utilisateur->setObjectName(QStringLiteral("utilisateur"));
        utilisateur->resize(920, 600);
        centralwidget = new QWidget(utilisateur);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        label_picture = new QLabel(centralwidget);
        label_picture->setObjectName(QStringLiteral("label_picture"));
        label_picture->setGeometry(QRect(10, 10, 901, 561));
        tabWidget = new QTabWidget(centralwidget);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
        tabWidget->setGeometry(QRect(50, 10, 721, 431));
        tabWidget->setStyleSheet(QStringLiteral("background-color:rgb(85, 170, 255)"));
        tabWidget->setTabShape(QTabWidget::Triangular);
        tab = new QWidget();
        tab->setObjectName(QStringLiteral("tab"));
        label_pic11 = new QLabel(tab);
        label_pic11->setObjectName(QStringLiteral("label_pic11"));
        label_pic11->setGeometry(QRect(50, 30, 621, 331));
        tabWidget->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QStringLiteral("tab_2"));
        label = new QLabel(tab_2);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(0, 0, 711, 411));
        textEdit_2 = new QTextEdit(tab_2);
        textEdit_2->setObjectName(QStringLiteral("textEdit_2"));
        textEdit_2->setGeometry(QRect(90, 50, 461, 191));
        textEdit_2->setStyleSheet(QStringLiteral("background-color:rgb(85, 170, 255)"));
        tabWidget->addTab(tab_2, QString());
        utilisateur->setCentralWidget(centralwidget);
        menubar = new QMenuBar(utilisateur);
        menubar->setObjectName(QStringLiteral("menubar"));
        menubar->setGeometry(QRect(0, 0, 920, 21));
        utilisateur->setMenuBar(menubar);
        statusbar = new QStatusBar(utilisateur);
        statusbar->setObjectName(QStringLiteral("statusbar"));
        utilisateur->setStatusBar(statusbar);

        retranslateUi(utilisateur);

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(utilisateur);
    } // setupUi

    void retranslateUi(QMainWindow *utilisateur)
    {
        utilisateur->setWindowTitle(QApplication::translate("utilisateur", "MainWindow", 0));
        label_picture->setText(QString());
        label_pic11->setText(QString());
        tabWidget->setTabText(tabWidget->indexOf(tab), QApplication::translate("utilisateur", "Welcome", 0));
        label->setText(QString());
        textEdit_2->setHtml(QApplication::translate("utilisateur", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:8.25pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:12pt;\">Ce projet consiste \303\240 cr\303\251er un gestionnaire d'approvisionnement d'une boutique de vente d'appareils \303\251lectriques et \303\251lectroniques; de faire une interface graphique simplifiant la connexion aux comptes et une base de donn\303\251es permettant la gestion des approvisionnements et des ventes. </span></p></body></html>", 0));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QApplication::translate("utilisateur", "About", 0));
    } // retranslateUi

};

namespace Ui {
    class utilisateur: public Ui_utilisateur {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_UTILISATEUR_H
