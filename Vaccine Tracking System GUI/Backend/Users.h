#pragma once
#include <string>

class User
{
	private: 
		std::string NationalID;
		std::string FirstName;
        std::string LastName;
		std::string Gender;
		std::string Age;
		std::string Governorate;
		bool FirstDose;
		bool SecondDose; 


    public:
        User() {};

        User(std::string id, std::string fName, std::string lName,
            std::string gen, std::string age, std::string gov,
            bool fDose, bool sDose) : NationalID(id), 
            FirstName(fName), LastName(lName), Gender(gen), Age(age), Governorate(gov),
            FirstDose(fDose), SecondDose (sDose) {};

        User(User* user) : NationalID(user->getNationalID()),
            FirstName(user->getFirstName()), LastName(user->getLastName()), Gender(user->getGender()), 
            Age(user->getAge()),
            Governorate(user->getGovernorate()),
            FirstDose(user->getFirstDose()), SecondDose(user->getSecondDose()) {};



        std::string getNationalID() const;
        void setNationalID(std::string NationalID);

        std::string getFirstName() const;
        void setFirstName(std::string Name);

        std::string getLastName() const;
        void setLastName(std::string Name);

        std::string getGender() const;
        void setGender(std::string Gender);

        std::string getAge() const;
        void setAge(std::string Age);

        std::string getGovernorate() const;
        void setGovernorate(std::string Governorate);

        bool getFirstDose() const;
        void setFirstDose(bool FirstDose);

        bool getSecondDose() const;
        void setSecondDose(bool SecondDose);

        std::string toString() const;
};