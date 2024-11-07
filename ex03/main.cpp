#include "Intern.hpp"

int main() {
	// https://theinfosphere.org/Central_Bureaucracy#Known_Employees
	Bureaucrat number1("Number 1.0", 1);
	Bureaucrat beholder("Beholder", 11);
	Bureaucrat morgan("Morgan Proctor", 19);
	Bureaucrat hermes("Hermes Conrad", 36);
	Bureaucrat warden("Warden Vogel", 135);
	Bureaucrat employee("Unknown employee", 150);
	std::cout << std::endl;

	Intern someRandomIntern;
	AForm *presidentialPardon = someRandomIntern.makeForm("presidential pardon", "Zoidberg");
	AForm *robotomyRequest = someRandomIntern.makeForm("robotomy request", "Bender");
	AForm *shrubberyCreation = someRandomIntern.makeForm("shrubbery creation", "Planet Express");
	std::cout << std::endl;

	std::cout << *presidentialPardon << std::endl;
	std::cout << *robotomyRequest << std::endl;
	std::cout << *shrubberyCreation << std::endl;
	std::cout << std::endl;

	employee.executeForm(*presidentialPardon);
	employee.executeForm(*robotomyRequest);
	employee.executeForm(*shrubberyCreation);
	std::cout << std::endl;

	warden.executeForm(*presidentialPardon);
	warden.executeForm(*robotomyRequest);
	warden.executeForm(*shrubberyCreation);
	std::cout << std::endl;

	hermes.executeForm(*presidentialPardon);
	hermes.executeForm(*robotomyRequest);
	hermes.executeForm(*shrubberyCreation);
	std::cout << std::endl;

	morgan.executeForm(*presidentialPardon);
	morgan.executeForm(*robotomyRequest);
	morgan.executeForm(*shrubberyCreation);
	std::cout << std::endl;

	beholder.executeForm(*presidentialPardon);
	beholder.executeForm(*robotomyRequest);
	beholder.executeForm(*shrubberyCreation);
	std::cout << std::endl;

	number1.executeForm(*presidentialPardon);
	number1.executeForm(*robotomyRequest);
	number1.executeForm(*shrubberyCreation);
	std::cout << std::endl;

	employee.signForm(*presidentialPardon);
	employee.signForm(*robotomyRequest);
	employee.signForm(*shrubberyCreation);
	std::cout << std::endl;

	warden.signForm(*presidentialPardon);
	warden.signForm(*robotomyRequest);
	warden.signForm(*shrubberyCreation);
	std::cout << std::endl;

	hermes.signForm(*presidentialPardon);
	hermes.signForm(*robotomyRequest);
	hermes.signForm(*shrubberyCreation);
	std::cout << std::endl;

	morgan.signForm(*presidentialPardon);
	morgan.signForm(*robotomyRequest);
	morgan.signForm(*shrubberyCreation);
	std::cout << std::endl;

	beholder.signForm(*presidentialPardon);
	beholder.signForm(*robotomyRequest);
	beholder.signForm(*shrubberyCreation);
	std::cout << std::endl;

	number1.signForm(*presidentialPardon);
	number1.signForm(*robotomyRequest);
	number1.signForm(*shrubberyCreation);
	std::cout << std::endl;

	std::cout << *presidentialPardon << std::endl;
	std::cout << *robotomyRequest << std::endl;
	std::cout << *shrubberyCreation << std::endl;
	std::cout << std::endl;

	employee.executeForm(*presidentialPardon);
	employee.executeForm(*robotomyRequest);
	employee.executeForm(*shrubberyCreation);
	std::cout << std::endl;

	warden.executeForm(*presidentialPardon);
	warden.executeForm(*robotomyRequest);
	warden.executeForm(*shrubberyCreation);
	std::cout << std::endl;

	hermes.executeForm(*presidentialPardon);
	hermes.executeForm(*robotomyRequest);
	hermes.executeForm(*shrubberyCreation);
	std::cout << std::endl;

	morgan.executeForm(*presidentialPardon);
	morgan.executeForm(*robotomyRequest);
	morgan.executeForm(*shrubberyCreation);
	std::cout << std::endl;

	beholder.executeForm(*presidentialPardon);
	beholder.executeForm(*robotomyRequest);
	beholder.executeForm(*shrubberyCreation);
	std::cout << std::endl;

	number1.executeForm(*presidentialPardon);
	number1.executeForm(*robotomyRequest);
	number1.executeForm(*shrubberyCreation);
	std::cout << std::endl;

	try {
		someRandomIntern.makeForm("invalid", "Random traget");
	} catch (std::exception &e) {
		std::cout << e.what() << std::endl << std::endl;
	}

	delete presidentialPardon;
	delete robotomyRequest;
	delete shrubberyCreation;
}
