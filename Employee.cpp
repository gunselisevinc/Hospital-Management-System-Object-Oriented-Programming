#include "Employee.h"

Employee::Employee()
	:employeeID{ 0 }, firstName{ nullptr }, lastName{ nullptr }, phoneNumber{ nullptr }, homeAddress{nullptr},
	emailAddress{ nullptr }, annualSalary{0.0}
{
	firstName = new char[1];
	*firstName = '\0';

	lastName = new char[1];
	*lastName = '\0';

	phoneNumber = new char[1];
	*phoneNumber = '\0';

	homeAddress = new char[1];
	*homeAddress = '\0';

	emailAddress = new char[1];
	*emailAddress = '\0';

}

Employee::Employee(int id, const char* fName, const char* lName, const char* phone, const char* address, const char* email, double salary)
	:employeeID{ id }, firstName{ nullptr }, lastName{ nullptr }, phoneNumber{ nullptr }, homeAddress{ nullptr },
	emailAddress{ nullptr }, annualSalary{ salary }
{
	firstName = new char[std::strlen(fName) + 1];
	strcpy(firstName, fName);

	lastName = new char[std::strlen(lName) + 1];
	strcpy(lastName, lName);

	phoneNumber = new char[std::strlen(phone) + 1];
	strcpy(phoneNumber, phone);

	homeAddress = new char[std::strlen(address) + 1];
	strcpy(homeAddress, address);

	emailAddress = new char[std::strlen(email) + 1];
	strcpy(emailAddress, email);
}

Employee::Employee(const Employee& source)
	:employeeID{ source.employeeID }, firstName{ nullptr }, lastName{ nullptr }, phoneNumber{ nullptr }, homeAddress{ nullptr },
	emailAddress{ nullptr }, annualSalary{ source.annualSalary }
{
	firstName = new char[std::strlen(source.firstName) + 1];
	strcpy(firstName, source.firstName);

	lastName = new char[std::strlen(source.lastName) + 1];
	strcpy(lastName, source.lastName);

	phoneNumber = new char[std::strlen(source.phoneNumber) + 1];
	strcpy(phoneNumber, source.phoneNumber);

	homeAddress = new char[std::strlen(source.homeAddress) + 1];
	strcpy(homeAddress, source.homeAddress);

	emailAddress = new char[std::strlen(source.emailAddress) + 1];
	strcpy(emailAddress, source.emailAddress);
}

Employee& Employee::operator=(const Employee& rhs)
{
	if (this == &rhs)
	{
		return *this;
	}
	else
	{
		delete[] firstName;
		delete[] lastName;
		delete[] phoneNumber;
		delete[] homeAddress;
		delete[] emailAddress;

		employeeID = rhs.employeeID;

		firstName = new char[std::strlen(rhs.firstName) + 1];
		strcpy(firstName, rhs.firstName);

		lastName = new char[std::strlen(rhs.lastName) + 1];
		strcpy(lastName, rhs.lastName);

		phoneNumber = new char[std::strlen(rhs.phoneNumber) + 1];
		strcpy(phoneNumber, rhs.phoneNumber);

		homeAddress = new char[std::strlen(rhs.homeAddress) + 1];
		strcpy(homeAddress, rhs.homeAddress);

		emailAddress = new char[std::strlen(rhs.emailAddress) + 1];
		strcpy(emailAddress, rhs.emailAddress);

		annualSalary = rhs.annualSalary;
		return *this;
	}
}

Employee::~Employee()
{
	delete[] firstName;
	delete[] lastName;
	delete[] phoneNumber;
	delete[] homeAddress;
	delete[] emailAddress;
}

int Employee::getEmployeeID() const
{
	return employeeID;
}

char* Employee::getFirstName() const
{
	return firstName;
}

char* Employee::getLastName() const
{
	return lastName;
}

char* Employee::getPhoneNumber() const
{
	return phoneNumber;
}

char* Employee::getHomeAddress() const
{
	return nullptr;
}


char* Employee::getEmailAddress() const
{
	return emailAddress;
}

double Employee::getAnnualSalary() const
{
	return annualSalary;
}

void Employee::setEmployeeID(int id)
{
	employeeID = id;
}

void Employee::setFirstName(const char* fName)
{
	delete[] firstName;
	firstName = new char[std::strlen(fName) + 1];
	strcpy(firstName, fName);
}

void Employee::setLastName(const char* lName)
{
	delete[] lastName;
	lastName = new char[std::strlen(lName) + 1];
	strcpy(lastName,lName);
}

void Employee::setPhoneNumber(const char* phone)
{
	delete[] phoneNumber;
	phoneNumber = new char[std::strlen(phone) + 1];
	strcpy(phoneNumber, phone);
}

void Employee::setHomeAddress(const char* address)
{
	delete[] homeAddress;
	homeAddress = new char[std::strlen(address) + 1];
	strcpy(homeAddress, address);
}

void Employee::setEmailAddress(const char* email)
{
	delete[] emailAddress;
	emailAddress = new char[std::strlen(email) + 1];
	strcpy(emailAddress, email);
}

void Employee::setAnnualSalary(double salary)
{
	annualSalary = salary;
}

void Employee::info()
{
	std::cout << "Employee ID: " << employeeID << std::endl;
	std::cout << "First name: " << firstName << std::endl;
	std::cout << "Last name: " << lastName << std::endl;
	std::cout << "Phone number: " << phoneNumber << std::endl;
	std::cout << "Email address: " << emailAddress << std::endl;
}

double Employee::calculateAnnualSalary()
{
	return annualSalary;
}


