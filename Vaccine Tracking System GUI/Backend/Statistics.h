#pragma once
#include <vector>
#include "Users.h"
#include "FileStream.h"
#include <map>

class Statistics
{
	public: 
		
		struct GovStatsDetails {
			int firstDose = 0;
			int secondDose = 0;
			int males = 0;
			int females = 0;
		};
	
	private:

		std::list<User> Users;
		std::map <std::string, GovStatsDetails>governorateStatistics;
		std::map <std::string, std::pair<int, int>>AgeDoses;


	public:

		// Setter and Getter for Users List. 
		void setUsersList(std::list<User>);
		std::list<User> getUsersList();

		// Getter for all statistics
		std::map <std::string, GovStatsDetails> getGovernorateStatistics();
		std::map <std::string, std::pair<int, int>> getAgeDoses();
		// Statistics Functions. 
		

		// Percentage of people in the whole system -> First Dose
		double getFirstDoseSystem();

		// Percentage of people in the whole system -> Second Dose
		double getSecondDoseSystem();

		// Percentage of people in the whole system -> Males
		double getFemalesSystem();

		// Percentage of people in the whole system -> Femalse
		double getMalesSystem();

		// Number of geneder per governorate. 
		void Statistics::getGenderGovernorate();

		Statistics(FileStream* fs) {
			
			this->Users = fs->getUsers();

			for (auto i : this->Users)
			{

				if (i.getFirstDose() && !i.getSecondDose())
				{
					governorateStatistics[i.getGovernorate()].firstDose++;
				}
				else if (i.getSecondDose()) {
					governorateStatistics[i.getGovernorate()].firstDose++;
					governorateStatistics[i.getGovernorate()].secondDose++;
				}


				if (stoi(i.getAge()) >= 15 && stoi(i.getAge()) <= 24 && i.getFirstDose() && !i.getSecondDose())
				{
					AgeDoses["15-24"].first++;
				}
				else if (stoi(i.getAge()) >= 25 && stoi(i.getAge()) <= 64 && i.getFirstDose() && !i.getSecondDose())
				{
					AgeDoses["25-64"].first++;
				}
				else if (stoi(i.getAge()) >= 65 && i.getFirstDose() && !i.getSecondDose())
				{
					AgeDoses["65"].first++;
				}


				if (stoi(i.getAge()) >= 15 && stoi(i.getAge()) <= 24 && i.getSecondDose())
				{
					AgeDoses["15-24"].first ++;
					AgeDoses["15-24"].second++;

				}
				else if (stoi(i.getAge()) >= 25 && stoi(i.getAge()) <= 64 && i.getSecondDose())
				{
					AgeDoses["25-64"].first++;
					AgeDoses["25-64"].second++;

				}
				else if (stoi(i.getAge()) >= 65 && i.getSecondDose())
				{
					AgeDoses["65"].first++;
					AgeDoses["65"].second++;

				}
			}

			this->getGenderGovernorate();
		}
};