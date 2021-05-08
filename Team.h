#pragma once
#include "Employee.h"
#include "Doctor.h"
#include "Nurse.h"
#include "Admin.h"

class Team
{
	int teamId; 
	Doctor teamLeader;
	Employee* teamMembers[25]; //Array consisting of pointers 
	size_t counter;

public:
	Team();
	Team(int idInput);
	~Team(); //Deallocates memory

	//Getters
	int getTeamId() const;
	Doctor getTeamLeader() const;
	size_t getCounter() const;

	//Setters
	void setTeamId(int idInput);
	void setTeamLeader(Doctor teamLeaderInput);

	//Other Methods
	void newMember(Employee &employeeInput);
	void listTeam();
	double calculateAnnualCost();
	bool searchEmployee(int idInput);
};

