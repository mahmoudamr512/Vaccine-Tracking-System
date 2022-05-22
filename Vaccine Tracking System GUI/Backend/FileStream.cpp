#include "FileStream.h"
#include <fstream>
#include <stack>
#include <iostream>

// Getting the lists and maps of the filestream.
std::list<User> FileStream::getUsers() const
{
    return Users;
}
std::map<std::string,std::string> FileStream::getUsersLogin() const
{
    return UsersLogin;
}
std::map<std::string,std::string> FileStream::getAdminsLogin() const
{
    return AdminsLogin;
}

std::queue<User> FileStream::getFirstDoseWaitingList() const {
    return FirstDoseWaitingList;
}

std::queue<User> FileStream::getSecondDoseWaitingList() const {
    return SecondDoseWaitingList;
}


// Loading Files. 
int FileStream::loadUsersFile()
{
    std::fstream UsersFile;
    UsersFile.open("Users.txt", std::ios::in);

    std::string id, firstName, lastName, gender, age, gov, fDose, lDose;

    while (UsersFile >> id >> firstName >> lastName >> gender >> age >> gov >> fDose >> lDose) {
        bool firstDose = false , secondDose = false;
        if (fDose == "true")
            firstDose = true;
        if (lDose == "true")
            secondDose = true;

        

        User user(id, firstName, lastName, gender, age, gov, firstDose, secondDose);

        if (firstDose == false && secondDose == false)
            FirstDoseWaitingList.push(user);

        if (firstDose == true && secondDose == false)
            SecondDoseWaitingList.push(user);
        this->Users.push_back(user);
    }
    // To indicate that file successfully opened. 
    return this->Users.size();
}
int FileStream::loadUsersLoginFile() {

    std::fstream UsersLoginFile;
    UsersLoginFile.open("UserLogin.txt", std::ios::in);

    // Check if file successfully opened. 
    if (UsersLoginFile.is_open()) {

        std::string id, password;

        while (UsersLoginFile >> id >> password) {
            this->UsersLogin[id] = password;
        }

        // To indicate that file successfully opened. 
        return 1;
    }
    else {
        // To indicate to the GUI that the Open Function Failed. 
        return 0;
    }
}
int FileStream::loadAdminsLoginFile() {
    std::fstream AdminsLoginFile;
    AdminsLoginFile.open("Admins.txt", std::ios::in);

    // Check if file successfully opened. 
    if (AdminsLoginFile.is_open()) {

        std::string id, password;

        while (AdminsLoginFile >> id >> password) {
            this->AdminsLogin[id] = password;
        }

        // To indicate that file successfully opened. 
        return 1;
    }
    else {
        // To indicate to the GUI that the Open Function Failed. 
        return 0;
    }
}

// Add User Function (For Sign Up) 
bool FileStream::addUser(User user, std::string password) {
    if (searchUser(user) != -1) {
        return false;
    }
    else {
    this->Users.push_back(user);
    this->UsersLogin[user.getNationalID()] = password;

    if (user.getFirstDose() != true) {
        this->FirstDoseWaitingList.push(user);
    } else if (user.getSecondDose() != true)
        this->SecondDoseWaitingList.push(user);
    return true;
    }
}

// Searching Users Linked List. 
int FileStream::searchUser(User user) {
    std::list<User>::iterator it;
    int counter = 0; 
    for (it = this->Users.begin(); it != this->Users.end(); ++it) {
        if (it->getNationalID() == user.getNationalID())
            return counter;
        counter++;
    }

    return -1;
}
User FileStream::searchUser(std::string username) {
    for (auto it : this->Users) {
        if (it.getNationalID() == username)
            return it;
    }

    return NULL;
}
    
// Deleting User From Linked List. 
bool FileStream::deleteUser(User user) {
    int index = searchUser(user);

    if (index != -1) {
        std::list<User>::iterator beginIt = this->Users.begin();
        std::advance(beginIt, index);
        this->Users.erase(beginIt);
        this->UsersLogin.erase(this->UsersLogin.find(user.getNationalID()));
        return true;
    }
    return false; 
}

// Editing User in Linked List. It has to be handled this way to account for Changing the Natinoal ID 
// which is the primary search key in our file. 
bool FileStream::editUser(User oldUser, User newUser, std::string password = "") {
        
    std::list<User>::iterator it;
    for (it = this->Users.begin(); it != this->Users.end(); ++it) {
            if (it->getNationalID() == oldUser.getNationalID()) {
                *it = newUser;
            }
        }
        // Update Map to Match the edited user
        if (password != "") {
            this->UsersLogin[newUser.getNationalID()] = password;
        }

        return true;
}

// Verifying User & Admin Upon Login. 
bool FileStream::verifyAdmin(std::string username, std::string password) {
    if (this->AdminsLogin.count(username)== 1)
        if (this->AdminsLogin[username] == password) {
            return true;
        }
    return false;
}
bool FileStream::verifyUser(std::string username, std::string password) {
    if (this->UsersLogin.count(username) == 1)
        if (this->UsersLogin[username] == password) {

            return true;
        }
    return false;
}

// Rewriting Files to be done at the end of program (Before closure).
void FileStream::rewriteUsersFile() {
    std::ofstream UsersFile;
    UsersFile.open("Users.txt", std::ios::out);

    for (std::list<User>::iterator it = this->Users.begin(); it != this->Users.end(); it++)
        UsersFile << it->toString() << std::endl;

    UsersFile.close();
}

void FileStream::rewriteUsersLoginFile() {
    std::ofstream UsersLoginFile;
    UsersLoginFile.open("UserLogin.txt", std::ios::out);

    for (std::map<std::string, std::string>::iterator it = this->UsersLogin.begin(); it != this->UsersLogin.end(); it++) {
        UsersLoginFile << it->first << " " << it->second << std::endl;
    }

    UsersLoginFile.close();
}

void FileStream::rewriteAdminsLoginFile() {
    std::ofstream AdminsFile;
    AdminsFile.open("Admins.txt", std::ios::out);

    for (std::map<std::string, std::string>::iterator it = this->AdminsLogin.begin(); it != this->AdminsLogin.end(); it++)
        AdminsFile << it->first << " " << it->second << std::endl;

    AdminsFile.close();
}

void FileStream::PopFirstDose(std::string nationalID) {
    std::queue<User> Popped;
    while (!this->FirstDoseWaitingList.empty()) {
        User u = FirstDoseWaitingList.front();
        if (u.getNationalID() == nationalID) {
            FirstDoseWaitingList.pop();
            SecondDoseWaitingList.push(u);
        }
        else {
            FirstDoseWaitingList.pop();
            Popped.push(u);
        }
    }


    FirstDoseWaitingList = Popped;

}

void FileStream::PopSecondDose(std::string nationalID) {
    std::queue<User> Popped;
    while (!this->SecondDoseWaitingList.empty()) {
        User u = SecondDoseWaitingList.front();
        if (u.getNationalID() == nationalID) {
            SecondDoseWaitingList.pop();
        }
        else {
            SecondDoseWaitingList.pop();
            Popped.push(u);
        }
    }


    SecondDoseWaitingList = Popped;

}