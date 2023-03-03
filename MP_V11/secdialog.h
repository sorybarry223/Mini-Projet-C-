#ifndef SECDIALOG_H
#define SECDIALOG_H

#include <QDialog>
#include <QTimer>
//#include <QMainWindow>
//#include "mainwindow.h"
namespace Ui {
class SecDialog;
}

class SecDialog : public QDialog
{
    Q_OBJECT

public:


    explicit SecDialog(QWidget *parent = 0);
    ~SecDialog();
    void addpoint(double x,double y);
    void clearData();
    void Plot();
public slots:
    void myfonction();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_Enregistrer_clicked();

    void on_pushButton_Enregistrer_2_clicked();

    void on_pushButton_Modifier_clicked();

    void on_pushButton_Modifier_2_clicked();

    void on_pushButton_Delete_clicked();

    void on_pushButton_Delete_2_clicked();

    void on_pushButton_load_table_a_clicked();

    void on_pushButton_load_table_p_clicked();

    void on_tableView_achat_activated(const QModelIndex &index);

    void on_tableView_produit_activated(const QModelIndex &index);

    void on_comboBox_activated(const QString &arg1);

    void on_comboBox_2_currentIndexChanged(const QString &arg1);

    void on_comboBox_currentIndexChanged(const QString &arg1);

    void on_pushButton_add_clicked();

    void on_pushButton_clear_clicked();

private:
    Ui::SecDialog *ui;
    QTimer *timer;
    QVector<double>qvx,qvy;
};

#endif // SECDIALOG_H
