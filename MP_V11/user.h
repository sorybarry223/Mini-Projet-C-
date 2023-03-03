#ifndef USER_H
#define USER_H

#include <QObject>
#include <QString>
class user
{
private:
    QString username;
    QString password;
    QString role;

public:
     user();
    ~user();
     QString get_username();
     QString get_password();
     QString get_role();
     void set_username(QString U);
     void set_password(QString P);
     void set_role(QString R);

};

#endif // USER_H
