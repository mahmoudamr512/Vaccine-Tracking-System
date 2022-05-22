#include "Users.h"
#include <string>


std::string User::getNationalID() const
{
    return NationalID;
}

void User::setNationalID(std::string NationalID)
{
    this->NationalID = NationalID;
}

std::string User::getFirstName() const
{
    return FirstName;
}

void User::setFirstName(std::string Name)
{
    this->FirstName = Name;
}

std::string User::getLastName() const
{
    return LastName;
}

void User::setLastName(std::string Name)
{
    this->LastName = Name;
}

std::string User::getGender() const
{
    return Gender;
}

void User::setGender(std::string Gender)
{
    this->Gender = Gender;
}

std::string User::getAge() const
{
    return Age;
}

void User::setAge(std::string Age)
{
    this->Age = Age;
}

std::string User::getGovernorate() const
{
    return Governorate;
}

void User::setGovernorate(std::string Governorate)
{
    this->Governorate = Governorate;
}

bool User::getFirstDose() const
{
    return FirstDose;
}

void User::setFirstDose(bool FirstDose)
{
    this->FirstDose = FirstDose;
}

bool User::getSecondDose() const
{
    return SecondDose;
}

void User::setSecondDose(bool SecondDose)
{
    this->SecondDose = SecondDose;
}

std::string User::toString() const
{
    return (
        this->NationalID + " "
        + this->FirstName + " "
        + this->LastName + " "
        + this->Gender + " "
        + this->Age + " "
        + this->Governorate + " "
        + (this->FirstDose ? "true" : "false") + " "
        + (this->SecondDose ? "true" : "false")
        );
}

