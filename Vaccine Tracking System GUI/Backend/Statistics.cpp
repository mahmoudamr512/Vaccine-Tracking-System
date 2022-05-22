#include "Statistics.h"

void Statistics::setUsersList(std::list<User> users)
{
	this->Users = users;
}

std::list<User> Statistics::getUsersList()
{
	return this->Users;
}

std::map <std::string, Statistics::GovStatsDetails> Statistics::getGovernorateStatistics() {
	return this->governorateStatistics;
}

std::map <std::string, std::pair<int, int>> Statistics::getAgeDoses() {
    return this->AgeDoses;
}

double Statistics::getMalesSystem() {
    double countM = 0;

    std::list<User>::iterator it;

    for (it = this->Users.begin(); it != this->Users.end(); it++) {
        if (it->getGender() == "Male" || it->getGender() == "male") {
            countM++;
        }
    }

    double percentage = (countM / Users.size()) * 100;
    return percentage;
}

double Statistics::getFemalesSystem() {
    double countF = 0;

    std::list<User>::iterator it;

    for (it = this->Users.begin(); it != this->Users.end(); it++) {
        if (it->getGender() == "Female" || it->getGender() == "female") {
            countF++;
        }
    }

    double percentage = (countF / Users.size()) * 100;
    return percentage;
}

double Statistics::getFirstDoseSystem() {
    double firstDose = 0;

    std::list<User>::iterator it;

    for (it = this->Users.begin(); it != this->Users.end(); it++) {
        if (it->getFirstDose() ==true || it->getSecondDose() == false) {
            firstDose++;
        }
    }

    double percentage = (firstDose / Users.size()) * 100;
    return percentage;
}

double Statistics::getSecondDoseSystem() {
    double secondDose = 0;

    std::list<User>::iterator it;

    for (it = this->Users.begin(); it != this->Users.end(); it++) {
        if (it->getFirstDose() == true || it->getSecondDose() == true) {
            secondDose++;
        }
    }

    double percentage = (secondDose / Users.size()) * 100;
    return percentage;
}

void Statistics::getGenderGovernorate() {

	for (auto it : Users) {

		if (it.getGender() == "Female" || it.getGender() == "female") {
			governorateStatistics[it.getGovernorate()].females++;
		}

		if (it.getGender() == "Male" || it.getGender() == "male") {
			governorateStatistics[it.getGovernorate()].males++;
		}
	}
	
}

