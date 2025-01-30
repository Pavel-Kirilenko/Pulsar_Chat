#pragma once
#include <vector>
#include "User.h"
#include "Message.h"
#include <string>
#include <unordered_map>
#include <optional>

class Database
{
	vector<User> _users;
	vector<Message> _messages;
	unordered_map<string, int> _usersMapByName;
    int searchUserByName(string);
public:
  vector<string> getUserList() const;
  string getUserName(int userId) const;
	Database();
    int addUser(string username, string password);
    int addUser(string username, string password, bool admin);  // Overloaded funсtion for admin
	int checkPassword(string username, string password);

    QDateTime getBanTime(int userID);                           // Function for gettin ban time
    bool getAdmin(int userID) const;                            // Function for checking whether the user is admin or not
    int getUserId(string userName) const;                       // Getting user's Id by name
    void setBanTime(int userID, int banTime);                   // Setting ban for users
	void addChatMessage(string sender, string);
	bool addPrivateMessage(string sender, string target, string message);
	vector<string> getChatMessages();//показать все сообщения
  vector<Message> getPrivateMessage(int userID = -1);//показать личные сообщения пользователю username
};
