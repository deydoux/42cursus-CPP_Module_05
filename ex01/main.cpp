#include "Form.hpp"

int main() {
	// https://theinfosphere.org/Central_Bureaucracy#Known_Employees
	Bureaucrat number1("Number 1.0", 1);
	Bureaucrat beholder("Beholder", 11);
	Bureaucrat morgan("Morgan Proctor", 19);
	Bureaucrat hermes("Hermes Conrad", 36);
	Bureaucrat warden("Warden Vogel", 135);
	Bureaucrat employee("Unknown employee", 150);
	std::cout << std::endl;

	Form presidentialPardon("Presidential pardon", 25, 5);
	Form robotomyRequest("Robotomy request", 72, 45);
	Form shrubberyCreation("Shrubbery creation", 145, 137);
	std::cout << std::endl;

	std::cout << presidentialPardon << std::endl;
	std::cout << robotomyRequest << std::endl;
	std::cout << shrubberyCreation << std::endl;
	std::cout << std::endl;

	employee.signForm(presidentialPardon);
	employee.signForm(robotomyRequest);
	employee.signForm(shrubberyCreation);
	std::cout << std::endl;

	warden.signForm(presidentialPardon);
	warden.signForm(robotomyRequest);
	warden.signForm(shrubberyCreation);
	std::cout << std::endl;

	hermes.signForm(presidentialPardon);
	hermes.signForm(robotomyRequest);
	hermes.signForm(shrubberyCreation);
	std::cout << std::endl;

	morgan.signForm(presidentialPardon);
	morgan.signForm(robotomyRequest);
	morgan.signForm(shrubberyCreation);
	std::cout << std::endl;

	beholder.signForm(presidentialPardon);
	beholder.signForm(robotomyRequest);
	beholder.signForm(shrubberyCreation);
	std::cout << std::endl;

	number1.signForm(presidentialPardon);
	number1.signForm(robotomyRequest);
	number1.signForm(shrubberyCreation);
	std::cout << std::endl;

	std::cout << presidentialPardon << std::endl;
	std::cout << robotomyRequest << std::endl;
	std::cout << shrubberyCreation << std::endl;
	std::cout << std::endl;

	try {
		Form("Invalid", 0, 75);
	} catch (std::exception &e) {
		std::cout << e.what() << std::endl;
	}

	try {
		Form("Invalid", 75, 0);
	} catch (std::exception &e) {
		std::cout << e.what() << std::endl;
	}

	try {
		Form("Invalid", 151, 75);
	} catch (std::exception &e) {
		std::cout << e.what() << std::endl;
	}

	try {
		Form("Invalid", 75, 151);
	} catch (std::exception &e) {
		std::cout << e.what() << std::endl;
	}
	std::cout << std::endl;
}
