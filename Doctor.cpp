#include "Doctor.h"

Doctor::Doctor()
	:Employee(), title{TitleDoctor::Intern}
{
}

Doctor::Doctor(int id, const char* fName, const char* lName, const char* phone, const char* address, const char* email,
	double salary, TitleDoctor titleinput)
	: Employee(id, fName, lName, phone, address, email, salary), title{titleinput}
{
}

Doctor::Doctor(const Doctor& source)
	: Employee(source), title{source.title}
{
}

Doctor& Doctor::operator=(const Doctor& rhs)
{
	if (this == &rhs)
	{
		return *this;
	}
	else
	{
		Employee::operator=(rhs);
		title = rhs.title;
		return *this;
	}
}

Doctor::~Doctor()
{
}

TitleDoctor Doctor::getTitle() const
{
	return title;
}

void Doctor::setTitle(TitleDoctor titleInput)
{
	title = titleInput;
}

double Doctor::calculateAnnualSalary()
{
	return annualSalary;
}
