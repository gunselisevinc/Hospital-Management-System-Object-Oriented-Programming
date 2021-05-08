#pragma once
#include "Employee.h"

enum class TitleDoctor {Intern, Practitioner, Specialist, Assistant, Docent, Professor };

class Doctor final:
	public Employee 
{
protected: //Additional Members
	TitleDoctor title;

public:
	//Constructors and Destructor
	Doctor(); //Default constructor
	Doctor(int id, const char* fName, const char* lName, const char* phone, const char* address, const char* email, 
		double salary, TitleDoctor titleinput); //8-args constructor
	Doctor(const Doctor &source); //Copy constructor
	Doctor& operator=(const Doctor& rhs); //Assignment operator
	virtual ~Doctor(); //Destructor

	//Additional Getter
	TitleDoctor getTitle() const;

	//Additional Setter
	void setTitle(TitleDoctor titleInput);
	virtual double calculateAnnualSalary() override;
};

