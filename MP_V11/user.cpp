#include "user.h"


user::user()
{
    username="";
    password="";
    role="";
}

user::~user()
{

}

QString user::get_username()
{
    return username;
}

QString user::get_password()
{
    return password;
}

QString user::get_role()
{
    return role;
}

void user::set_username(QString U)
{
    username=U;
}

void user::set_password(QString P)
{
    password=P;
}

void user::set_role(QString R)
{
    role=R;
}
