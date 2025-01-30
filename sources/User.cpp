#include "User.h"
int User::userCounter = 1;

User::User() : _id(0), _login(""), _username(""), _passwordHash()
{
}

User::User(string username, Hash passHash) :_login(username), _username(username), _passwordHash(passHash), _id(++userCounter)
{
}

User::User(string username, Hash passHash, bool admin) :_login(username), _username(username), _passwordHash(passHash), _admin(admin), _id(++userCounter)
{
}

int User::checklogin(const string& login, const Hash& passHash) const
{
	if ((_login == login) && (_passwordHash == passHash)) return _id;
	return -1;
}

string User::getUserName() const
{
	return _username;
}

int User::getUserID() const
{
	return _id;
}

void User::setAdmin()
{
    _admin = true;     // Setting user's rights into admin's
}

bool User::getAdmin() const
{
    return _admin;     // Getting user's rights (admin or not)
}

void User::setBanTime(int banTime)
{
    _banTime = QDateTime::currentDateTime().addSecs(banTime * 3600);
}

QDateTime User::getBanTime() const
{
    return _banTime;
}

