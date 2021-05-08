#pragma once
#pragma warning(disable : 4996)

#include <iostream>

class Employee
{
protected:
	int employeeID;
	char* firstName;
	char* lastName;
	char* phoneNumber;
	char* homeAddress;
	char* emailAddress;
	double annualSalary;

public:
	//Constructors and Destructor
	Employee(); //Default constructor
	Employee(int id, const char* fName, const char* lName, const char* phone, const char* address, const char* email, double salary); //7-args constructor
	Employee(const Employee &source); //Copy constructor
	Employee& operator=(const Employee &rhs); //Assignment operator
	virtual ~Employee(); //Destructor

	//Getters
	int getEmployeeID() const;
	char* getFirstName() const;
	char* getLastName() const;
	char* getPhoneNumber() const;
	char* getHomeAddress() const;
	char* getEmailAddress() const;
	double getAnnualSalary() const;

	//Setters
	void setEmployeeID(int id);
	void setFirstName(const char* fName);
	void setLastName(const char* lName);
	void setPhoneNumber(const char* phone);
	void setHomeAddress(const char* address);
	void setEmailAddress(const char* email);
	void setAnnualSalary(double salary);

	//Other Methods
	void info(); //Prints relevant information
	virtual double calculateAnnualSalary();
};

