# Hospital-Management-System-Object-Oriented-Programming
Record book for employee teams and  searching for details of salaries as well as employee.

Following classes are implemented in the system. Also copy constructors, assignment operators and destructors were implemented where necessary.

## Classes
### Employee
For each employee, following are stored:
* Employee ID
* First name (data type: char pointer)
* Last name (data type: char pointer)
* Telephone number
* Address (data type: char pointer)
* Email address (data type: char pointer)
* Annual salary <br />

For each employee following member functions are implemented :
* A default constructor
* A constructor to initialise Employee ID, First name, Last name, Telephone number, Address, Email address and Annual Salary
* Getter and setter functions for each of the member variables
* A function to print Employee ID, First name, Last name, Telephone number and Email
address

### Doctor
Each doctor is an employee with the following additional properties:
* Title (Intern, Practitioner, Assistant, Specialist, Docent, Professor) -> enumeration used <br />

For each doctor following member functions are implemented :
* A default constructor
* A constructor to initialise all of the member variables
* Getter and setter functions for each of the member variables

### Nurse
Each nurse is an employee with the following additional properties:
* Nurse type (general or midwife) -> enumeration used
* Hours of overtime per week (agreed in the contract) (as a double value) <br />

For each nurse following member functions are implemented :
* A default constructor
* A constructor to initialise all of the member variables
* Getter and setter functions for each of the member variables
* A function to calculate annual salary. On top of employee salary, overtime will be paid as $20 per hours for general $30 for midwifes. Assume that each year has 52 weeks.

### Admin
Each admin personnel is an employee who are paid hourly. Admin class has following details:
* Admin type (manager/secretary) -> enumeration used
* Hours worked per week (agreed in the contract)

For each admin following member functions are implemented:
* A default constructor
* A constructor to initialise all of the member variables
* Getter and setter functions for each of the private member variables.
* A function to calculate annual salary. Manager is paid $50 per hour and secretary $20. Assume that each year has 52 weeks.

### Team
Each team is established from number of doctors, nurses, or admins. Team class holds the following details:
* Team ID
* Team Leader: Specialists, Docents, and Professors have their own teams. In other words, each team can have at most one Specialist, Docent, or Professor.
* Team Members: Team members consist of practitioners, assistants, interns, nurses and admins. Assume that each team has maximum 25 members.

For each team following member functions are implemented: 
* A default constructor
* A constructor to initialise the team id.
* Getter and setter functions for the team id and team leader.
* A function to add a new team member
* A function to list the team leader and the members
* A function to calculate annual cost
* A function to search if a given employee (with Employee ID) is in the team. If the employee in the team, you need to print his/her details.

### Hospital
Using the classes mentioned above create a Hospital class that maintains various teams. This class is able to:
* Add a new team
* Search for the details of a given employee (with Employee ID).
* Print the team leader and members of each team in the hospital.
* Print the team leader and members of a given team (with Team ID)
* Print the annual cost to run the hospital
* Print the annual cost of a given team (with Team ID)

## Command Line Interface
Command line interface for the hospital management system provides the following menu:
1. Create a team
2. Search a member by ID
3. List all members
4. List total annual salary
5. List all members of a given team
6. List total annual salary of a given team
7. Exit
