#include "Nurse.h"

Nurse::Nurse()
	:Employee(), type{ NurseType::General }, overtime{0.0}
{
}

Nurse::Nurse(int id, const char* fName, const char* lName, const char* phone, const char* address, const char* email,
	double salary, NurseType typeInput, double overtimeInput)
	: Employee(id, fName, lName, phone, address, email, salary), type{ typeInput }, overtime{overtimeInput}
{
}

Nurse::Nurse(const Nurse& source)
	: Employee(source), type{source.type}, overtime{source.overtime}
{
}

Nurse& Nurse::operator=(const Nurse& rhs)
{
	if (this == &rhs)
	{
		return *this;
	}
	else
	{
		Employee::operator=(rhs);
		type = rhs.type;
		overtime = rhs.overtime;
		return *this;
	}
}

Nurse::~Nurse()
{
}

NurseType Nurse::getType() const
{
	return type;
}

double Nurse::getOvertime() const
{
	return overtime;
}

void Nurse::setType(NurseType typeInput)
{
	type = typeInput;
}

void Nurse::setOvertime(double overtimeInput)
{
	overtime = overtimeInput;
}

double Nurse::calculateAnnualSalary()
{
	if (type == NurseType::General)
	{
		return (annualSalary + overtime * 20.0 * 52);
	}
	else
	{
		return (annualSalary + overtime * 30.0 * 52);
	}
}
