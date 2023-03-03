#ifndef UTILISATEUR_H
#define UTILISATEUR_H

#include <QDialog>
#include <QTimer>
#include <QMainWindow>

namespace Ui {
class utilisateur;
}

class utilisateur : public QMainWindow
{
    Q_OBJECT

public:
    explicit utilisateur(QWidget *parent = 0);
    ~utilisateur();

private:
    Ui::utilisateur *ui;
};

#endif // UTILISATEUR_H
