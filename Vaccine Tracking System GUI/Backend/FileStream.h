#pragma once
#include <string>
#include "Users.h"
#include <list>
#include <map>
#include <istream>
#include <queue>

class FileStream
{
	private:
        std::list<User> Users;
        std::map<std::string, std::string> UsersLogin;
        std::map<std::string, std::string> AdminsLogin;
        std::queue<User> FirstDoseWaitingList;
        std::queue<User> SecondDoseWaitingList;

		
    public:

        FileStream::FileStream() {
            this->loadAdminsLoginFile();
            this->loadUsersFile();
            this->loadUsersLoginFile();
        };

        // Getters for the main 
        std::list<User> getUsers() const;
        std::map<std::string, std::string> getUsersLogin() const;
        std::map<std::string, std::string> getAdminsLogin() const;
        std::queue<User>getFirstDoseWaitingList() const;
        std::queue<User>getSecondDoseWaitingList() const;

        // Rewrite File with new values. 
        void rewriteUsersFile();
        void rewriteUsersLoginFile();
        void rewriteAdminsLoginFile();

        // Load File Contents. 
        int loadUsersFile();
        int loadUsersLoginFile();
        int loadAdminsLoginFile();

        // Login & Signup.
        bool verifyUser(std::string, std::string);
        bool verifyAdmin(std::string, std::string);

        // Signup, Edit & Delete.
        bool editUser(User, User, std::string);
        bool deleteUser(User);
        bool addUser(User, std::string);

        // Search User in linkedList. 
        int searchUser(User);
        User searchUser(std::string);

        // Pop From Waiting List
        void PopFirstDose(std::string);
        void PopSecondDose(std::string);

};