#pragma once
#include <string>
#include <QDateTime>
#include "sha1.h"

using namespace std;

class User
{
	static int userCounter;
	int _id;
	string _login;
	string _username;
	Hash _passwordHash;
    QDateTime _banTime = QDateTime::currentDateTime();        // A variable that indicates when the user will be removed from the ban
    bool _admin = false;           // The mark of admin
public:
	User();
	User(string username, Hash passHash);
    User(string username, Hash passHash, bool admin);  // Constructor for admins
	int checklogin(const string& login, const Hash& passHash) const;
    string getUserName() const;
	int getUserID() const;
    void setAdmin();               // Setting admin mark
    bool getAdmin() const;         // Getting admin mark
    void setBanTime(int banTime);  // Settinq user ban's time in hours
    QDateTime getBanTime() const;      // Getting the time when the user will be removed from the ban
};
