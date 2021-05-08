#pragma once
#include "Employee.h"

enum class AdminType {Manager, Secretary};

class Admin final:
	public Employee
{
protected:
	AdminType type;
	int hoursPerWeek;
	
public:
	Admin(); //Default constructor
	Admin(int id, const char* fName, const char* lName, const char* phone, const char* address, const char* email,
		double salary, AdminType typeInput, int hoursInput); //9-args constructor
	Admin(const Admin &source); //Copy constructor
	Admin& operator=(const Admin &rhs); //Assignment operator
	virtual ~Admin(); //Destructor

	//Additional Getters
	AdminType getType() const;
	int getHoursPerWeek() const;

	//Additional Setters
	void setType(AdminType typeInput);
	void setHoursPerWeek(int hoursInput);

	//Additional Methods
	virtual double calculateAnnualSalary() override;
};

