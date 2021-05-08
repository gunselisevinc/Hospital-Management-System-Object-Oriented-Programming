#pragma once
#include "Employee.h"

enum class NurseType {General, Midwife};

class Nurse final:
	public Employee
{
protected:
	NurseType type;
	double overtime;

public:
	//Constructors and destructor
	Nurse(); //Default constructor
	Nurse(int id, const char* fName, const char* lName, const char* phone, const char* address, const char* email, 
		double salary, NurseType typeInput, double overtimeInput); //9-args constructor
	Nurse(const Nurse &source); //Copy constructor
	Nurse& operator=(const Nurse& rhs); //Assignment operator
	virtual ~Nurse(); //Destructor

	//Additional Getters
	NurseType getType() const;
	double getOvertime() const;

	//Additional Setters
	void setType(NurseType typeInput);
	void setOvertime(double overtimeInput);

	//Additional Method
	virtual double calculateAnnualSalary() override;
};

