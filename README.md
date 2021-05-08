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

### Team

### Hospital
