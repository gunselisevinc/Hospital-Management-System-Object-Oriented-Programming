#include "Hospital.h"

void displayMenu();
void handleCaseOne(Hospital &hospital);
void handleCaseTwo(Hospital& hospital);
void handleCaseThree(Hospital& hospital);
void handleCaseFour(Hospital& hospital);
void handleCaseFive(Hospital& hospital);
void handleCaseSix(Hospital& hospital);


int main() {
	Hospital hospital;
	std::cout << "\n====== Welcome to Hospital Management System ======" << std::endl;
	size_t choice{ 0 };
	while (choice != 7)
	{
		displayMenu();
		std::cout << "Enter your selection: ";
		std::cin >> choice;
		switch (choice)
		{
		case 1:
			handleCaseOne(hospital);
			break;

		case 2:
			handleCaseTwo(hospital);
			break;

		case 3:
			handleCaseThree(hospital);
			break;

		case 4:
			handleCaseFour(hospital);
			break;

		case 5:
			handleCaseFive(hospital);
			break;

		case 6:
			handleCaseSix(hospital);
			break;

		case 7:
			std::cout << "Goodbye" << std::endl;
			break;

		default:
			std::cout << "Wrong choice, enter again" << std::endl;
			break;
		}
	}

	std::cout << std::endl;
	system("Pause");
	return 0;
}

void displayMenu() {
	std::cout << "\n1. Create a team" << std::endl;
	std::cout << "2. Search a member by ID" << std::endl;
	std::cout << "3. List all members" << std::endl;
	std::cout << "4. List total annual salary" << std::endl;
	std::cout << "5. List all members of a given team" << std::endl;
	std::cout << "6. List total annual salary of a given team" << std::endl;
	std::cout << "7. Exit" << std::endl;
}

void handleCaseOne(Hospital& hospital) {
	std::cout << "Enter team id: ";
	int teamID{ 0 };
	std::cin >> teamID;
	Team team{ teamID };

	std::cout << "\nEnter the details of the team leader: " << std::endl;
	std::cout << "ID: ";
	int leaderID{ 0 };
	std::cin >> leaderID;

	std::cout << "First name: ";
	char leaderName[20];
	std::cin >> leaderName;

	std::cout << "Last name: ";
	char leaderSurname[20];
	std::cin >> leaderSurname;

	std::cout << "Telephone number: ";
	char leaderPhone[20];
	std::cin >> leaderPhone;

	std::cout << "Address: ";
	char leaderAddress[50];
	std::cin.ignore(256, '\n');
	std::cin.getline(leaderAddress, 50);

	std::cout << "Email: ";
	char leaderMail[30];
	std::cin >> leaderMail;

	std::cout << "Salary: ";
	double leaderSalary{ 0 };
	std::cin >> leaderSalary;

	std::cout << "Doctor type: (3) Specialist (4) Docent (5) Professor: ";
	int leaderType{ 0 };
	std::cin >> leaderType;

	Doctor doctor {leaderID, leaderName, leaderSurname, leaderPhone, leaderAddress, leaderMail, leaderSalary, static_cast<TitleDoctor>(leaderType) };
	team.setTeamLeader(doctor);

	std::cout << "The team leader has been added to the team succesfully" << std::endl;
	std::cout << "\nWould you like to add a new member to your team? (Y/N): ";
	char yesNo{ 'Y' };
	std::cin >> yesNo;
	while (yesNo == 'Y')
	{
		std::cout << "\n1. Doctor" << std::endl;
		std::cout << "2. Nurse" << std::endl;
		std::cout << "3. Admin" << std::endl;
		std::cout << "Select type: ";
		size_t selection{ 0 };
		std::cin >> selection;

		std::cout << "\nEnter the details of the team member: " << std::endl;
		std::cout << "ID: ";
		int leaderID{ 0 };
		std::cin >> leaderID;

		std::cout << "First name: ";
		char leaderName[20];
		std::cin >> leaderName;

		std::cout << "Last name: ";
		char leaderSurname[20];
		std::cin >> leaderSurname;

		std::cout << "Telephone number: ";
		char leaderPhone[20];
		std::cin >> leaderPhone;

		std::cout << "Address: ";
		char leaderAddress[50];
		std::cin.ignore(256, '\n');
		std::cin.getline(leaderAddress, 50);

		std::cout << "Email: ";
		char leaderMail[30];
		std::cin >> leaderMail;

		std::cout << "Salary: ";
		double leaderSalary{ 0 };
		std::cin >> leaderSalary;

		switch (selection)
		{
		case 1:
		{
			std::cout << "Doctor type: (0) Intern (1) Practitioner (2) Assistant: ";
			int leaderType{ 0 };
			std::cin >> leaderType;
			Doctor *doc = new Doctor{ leaderID, leaderName, leaderSurname, leaderPhone, leaderAddress, leaderMail, leaderSalary, static_cast<TitleDoctor>(leaderType) };
			team.newMember(*doc);

			std::cout << "The member has been added to the team succesfully" << std::endl;

			break;
		}
			
		case 2:
		{
			std::cout << "Nurse type: (0) General (1) Midwife: ";
			int leaderType{ 0 };
			std::cin >> leaderType;

			std::cout << "Hours overtime time per week: ";
			double overtime{ 0.0 };
			std::cin >> overtime;

			Nurse *nurse = new Nurse{ leaderID, leaderName, leaderSurname, leaderPhone, leaderAddress, leaderMail, leaderSalary, static_cast<NurseType>(leaderType), overtime };
			team.newMember(*nurse);

			std::cout << "The member has been added to the team succesfully" << std::endl;

			break;
		}

		case 3:
		{
			std::cout << "Admin type: (0) Manager (1) Secretary: ";
			int leaderType{ 0 };
			std::cin >> leaderType;

			std::cout << "Hours per week: ";
			int overtime{ 0 };
			std::cin >> overtime;

			Admin *admin = new Admin{ leaderID, leaderName, leaderSurname, leaderPhone, leaderAddress, leaderMail, leaderSalary, static_cast<AdminType>(leaderType), overtime };
			team.newMember(*admin);

			std::cout << "The member has been added to the team succesfully" << std::endl;

			break;
		}

		default: 
			std::cout << "Wrong input" << std::endl;
			break;
		}
		std::cout << "\nWould you like to add a new member to your team? (Y/N): ";
		std::cin >> yesNo;
		if (yesNo == 'N')
		{
			std::cout << "The team has been added to the hospital succesfully" << std::endl;
		}
	} 

	hospital.newTeam(team);
}

void handleCaseTwo(Hospital& hospital) {
	std::cout << "Enter member ID: ";
	int id{ 0 };
	std::cin >> id;
	hospital.searchEmployee(id);
}

void handleCaseThree(Hospital& hospital) {
	hospital.printAllTeams();
}

void handleCaseFour(Hospital& hospital) {
	hospital.totalAnnualCost();
}

void handleCaseFive(Hospital& hospital) {
	std::cout << "Enter team ID: ";
	int id{ 0 };
	std::cin >> id;

	std::cout << "\nTeam " << id << std::endl;
	hospital.specificTeam(id);
}

void handleCaseSix(Hospital& hospital) {
	std::cout << "Enter team ID: ";
	int id{ 0 };
	std::cin >> id;

	hospital.specificAnnualCost(id);
}
