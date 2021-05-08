#include "Admin.h"

Admin::Admin()
	:Employee(), type{ AdminType::Secretary }, hoursPerWeek{0}
{
}

Admin::Admin(int id, const char* fName, const char* lName, const char* phone, const char* address, const char* email, 
	double salary, AdminType typeInput, int hoursInput)
	: Employee(id, fName, lName, phone, address, email, salary), type{ typeInput }, hoursPerWeek{hoursInput}
{
}

Admin::Admin(const Admin& source)
	: Employee(source), type{ source.type }, hoursPerWeek{source.hoursPerWeek}
{
}

Admin& Admin::operator=(const Admin& rhs)
{
	if (this == &rhs)
	{
		return *this;
	}
	else
	{
		Employee::operator=(rhs);
		type = rhs.type;
		hoursPerWeek = rhs.hoursPerWeek;
		return *this;
	}
}

Admin::~Admin()
{
}

AdminType Admin::getType() const
{
	return type;
}

int Admin::getHoursPerWeek() const
{
	return hoursPerWeek;
}

void Admin::setType(AdminType typeInput)
{
	type = typeInput;
}

void Admin::setHoursPerWeek(int hoursInput)
{
	hoursPerWeek = hoursInput;
}

double Admin::calculateAnnualSalary()
{
	if (type == AdminType::Manager)
	{
		return (hoursPerWeek * 50.0 * 52);
	}
	else
	{
		return (hoursPerWeek * 20.0* 52);
	}
}
