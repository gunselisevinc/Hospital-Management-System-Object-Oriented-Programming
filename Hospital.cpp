#include "Hospital.h"

Hospital::Hospital()
	:counter{0}
{
	
}

void Hospital::newTeam(Team& teamInput)
{
	team[counter] = teamInput;
	counter++; 
}

void Hospital::searchEmployee(int idInput)
{
	size_t ctr{ 0 };
	for (size_t i = 0; i < counter; i++)
	{
		if (team[i].searchEmployee(idInput) == false)
		{
			ctr++;
		}
	}
	if (ctr == counter)
	{
		std::cout << "No employee with the given ID" << std::endl;
	}
}

void Hospital::printAllTeams()
{
	for (size_t i = 0; i < counter; i++)
	{
		std::cout << "\nTeam " << team[i].getTeamId() << std::endl;
		team[i].listTeam();
	}
}

void Hospital::specificTeam(int idInput)
{
	size_t ctr{ 0 };
	for (size_t i = 0; i < counter; i++)
	{
		if (team[i].getTeamId() == idInput)
		{
			
			team[i].listTeam();
		}
		else
		{
			ctr++;
		}
	}
	if (ctr == counter)
	{
		std::cout << "No such team ID" << std::endl;
	}
}

void Hospital::totalAnnualCost()
{
	double cost{ 0 };
	for (size_t i = 0; i < counter; i++)
	{
		cost += team[i].calculateAnnualCost();
	}
	std::cout << "Total annual salary is " << cost << std::endl;
}

void Hospital::specificAnnualCost(int idInput)
{
	double cost{ 0 };
	size_t ctr{ 0 };
	for (size_t i = 0; i < counter; i++)
	{
		if (team[i].getTeamId() == idInput)
		{
			std::cout << "Total annual salary for team " << team[i].getTeamId() << " is " << team[i].calculateAnnualCost() << std::endl;
		}
	}
}
