#pragma once
#include "Team.h"

class Hospital
{
	Team team[15];
	size_t counter;
public:
	//Constructors
	Hospital();

	//Other Methods
	void newTeam(Team &teamInput);
	void searchEmployee(int idInput);
	void printAllTeams();
	void specificTeam(int idInput);
	void totalAnnualCost();
	void specificAnnualCost(int idInput);
};

