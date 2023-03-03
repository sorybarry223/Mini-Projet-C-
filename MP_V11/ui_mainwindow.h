/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.2.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QLabel *label_wp;
    QGroupBox *groupBox;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLineEdit *lineEdit_user_name;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_2;
    QLineEdit *lineEdit_Passeword;
    QRadioButton *radioButton;
    QRadioButton *radioButton_2;
    QPushButton *pushButton_Login;
    QLabel *label_db;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(556, 372);
        MainWindow->setStyleSheet(QStringLiteral(""));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        label_wp = new QLabel(centralWidget);
        label_wp->setObjectName(QStringLiteral("label_wp"));
        label_wp->setGeometry(QRect(10, 0, 541, 331));
        label_wp->setTextFormat(Qt::RichText);
        groupBox = new QGroupBox(centralWidget);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setGeometry(QRect(210, 30, 301, 271));
        groupBox->setStyleSheet(QStringLiteral(""));
        verticalLayout = new QVBoxLayout(groupBox);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        label = new QLabel(groupBox);
        label->setObjectName(QStringLiteral("label"));
        label->setStyleSheet(QStringLiteral(""));

        horizontalLayout->addWidget(label);

        lineEdit_user_name = new QLineEdit(groupBox);
        lineEdit_user_name->setObjectName(QStringLiteral("lineEdit_user_name"));
        lineEdit_user_name->setStyleSheet(QStringLiteral(""));

        horizontalLayout->addWidget(lineEdit_user_name);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        label_2 = new QLabel(groupBox);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setStyleSheet(QStringLiteral(""));

        horizontalLayout_2->addWidget(label_2);

        lineEdit_Passeword = new QLineEdit(groupBox);
        lineEdit_Passeword->setObjectName(QStringLiteral("lineEdit_Passeword"));
        lineEdit_Passeword->setStyleSheet(QStringLiteral(""));
        lineEdit_Passeword->setEchoMode(QLineEdit::Password);

        horizontalLayout_2->addWidget(lineEdit_Passeword);


        verticalLayout->addLayout(horizontalLayout_2);

        radioButton = new QRadioButton(groupBox);
        radioButton->setObjectName(QStringLiteral("radioButton"));
        QFont font;
        font.setPointSize(12);
        font.setBold(true);
        font.setWeight(75);
        radioButton->setFont(font);
        radioButton->setAutoFillBackground(false);
        radioButton->setStyleSheet(QStringLiteral("color:rgb(255, 255, 255)"));

        verticalLayout->addWidget(radioButton);

        radioButton_2 = new QRadioButton(groupBox);
        radioButton_2->setObjectName(QStringLiteral("radioButton_2"));
        radioButton_2->setFont(font);
        radioButton_2->setAutoFillBackground(false);
        radioButton_2->setStyleSheet(QStringLiteral("color:rgb(255, 255, 255)"));

        verticalLayout->addWidget(radioButton_2);

        pushButton_Login = new QPushButton(groupBox);
        pushButton_Login->setObjectName(QStringLiteral("pushButton_Login"));
        pushButton_Login->setStyleSheet(QStringLiteral(""));

        verticalLayout->addWidget(pushButton_Login);

        label_db = new QLabel(centralWidget);
        label_db->setObjectName(QStringLiteral("label_db"));
        label_db->setGeometry(QRect(80, 280, 181, 21));
        label_db->setStyleSheet(QStringLiteral("color:rgb(255, 255, 255)"));
        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 556, 21));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", 0));
        label_wp->setText(QString());
        groupBox->setTitle(QApplication::translate("MainWindow", "SignIn", 0));
        label->setText(QApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-size:14pt; font-weight:600; color:#ffffff;\">UserName</span></p></body></html>", 0));
        label_2->setText(QApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-size:14pt; font-weight:600; color:#ffffff;\">Password</span></p></body></html>", 0));
        lineEdit_Passeword->setText(QString());
        radioButton->setText(QApplication::translate("MainWindow", "Admin", 0));
        radioButton_2->setText(QApplication::translate("MainWindow", "User", 0));
        pushButton_Login->setText(QApplication::translate("MainWindow", "Login", 0));
        label_db->setText(QApplication::translate("MainWindow", "[+] Status", 0));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
