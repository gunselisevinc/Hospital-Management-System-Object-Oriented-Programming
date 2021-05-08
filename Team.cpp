#include "Team.h"

Team::Team()
	:teamId{ 0 }, teamLeader{}, counter{ 0 }
{
	teamLeader.setTitle(TitleDoctor::Professor);
	for (size_t i = 0; i < 25; i++)
	{
		teamMembers[i] = nullptr;
	}
}

Team::Team(int idInput)
	:teamId{ idInput }, teamLeader{}, counter{ 0 }
{
	teamLeader.setTitle(TitleDoctor::Professor);
	for (size_t i = 0; i < 25; i++)
	{
		teamMembers[i] = nullptr;
	}
}

Team::~Team()
{
	for (size_t i = 0; i < counter; i++)
	{
		delete[] teamMembers[i];
	}
}

int Team::getTeamId() const
{
	return teamId;
}

Doctor Team::getTeamLeader() const
{
	return teamLeader;
}

size_t Team::getCounter() const
{
	return counter;
}

void Team::setTeamId(int idInput)
{
	teamId = idInput;
}

void Team::setTeamLeader(Doctor teamLeaderInput)
{
	teamLeader = teamLeaderInput;
}

void Team::newMember(Employee& employeeInput)
{
	teamMembers[counter] = &employeeInput;
	counter++;
}

void Team::listTeam()
{
	std::cout << "Team Leader:" << std::endl;
	std::cout << teamLeader.getEmployeeID() << " " << teamLeader.getFirstName() << " " << teamLeader.getLastName() <<
		" " << teamLeader.getPhoneNumber() << " " << teamLeader.getEmailAddress() << std::endl;
	std::cout << "Team members:" << std::endl;
	for (size_t i = 0; i < counter; i++)
	{
		std::cout << teamMembers[i]->getEmployeeID() << " " << teamMembers[i]->getFirstName() << " " << teamMembers[i]->getLastName() <<
			" " << teamMembers[i]->getPhoneNumber() << " " << teamMembers[i]->getEmailAddress() << std::endl;
	}
}

double Team::calculateAnnualCost()
{
	double cost{ 0 };
	for (size_t i = 0; i < counter; i++)
	{
		cost += teamMembers[i]->calculateAnnualSalary();
	}
	cost += teamLeader.calculateAnnualSalary();
	return cost;
}

bool Team::searchEmployee(int idInput)
{
	bool ctr = false;
	if (teamLeader.getEmployeeID() == idInput)
	{
		std::cout << "\nIt is found in team " << teamId << ". The details are listed below:" << std::endl;
		teamLeader.info();
		ctr = true;
	}
	else
	{
		for (size_t i = 0; i < counter; i++)
		{
			if (teamMembers[i]->getEmployeeID() == idInput)
			{
				std::cout << "It is found in team " << teamId << ". The details are listed below:" << std::endl;
				teamMembers[i]->info();
				ctr = true;
			}
		}
	}
	return ctr;
}
