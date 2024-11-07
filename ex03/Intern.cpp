#include "Intern.hpp"

Intern::Intern() {
	std::cerr << "Intern constructor called" << std::endl;
}

Intern::Intern(const Intern &) {
	std::cerr << "Intern copy constructor called" << std::endl;
}

Intern::~Intern() {
	std::cerr << "Intern destructor called" << std::endl;
}

Intern &Intern::operator=(const Intern &) {
	std::cerr << "Intern copy assignement operator called" << std::endl;
	return (*this);
}

AForm *Intern::makePresidentialPardonForm(const std::string &target) const {
	return (new PresidentialPardonForm(target));
}

AForm *Intern::makeRobotomyRequestForm(const std::string &target) const {
	return (new RobotomyRequestForm(target));
}

AForm *Intern::makeShrubberyCreationForm(const std::string &target) const {
	return (new ShrubberyCreationForm(target));
}

AForm *Intern::makeForm(const std::string &name, const std::string &target) const {
	const std::string names[] = {"presidential pardon", "robotomy request", "shrubbery creation"};
	AForm *(Intern::*makers[])(const std::string &) const = {&Intern::makePresidentialPardonForm, &Intern::makeRobotomyRequestForm,
		&Intern::makeShrubberyCreationForm};

	for (size_t i = 0; i < 3; i++)
		if (names[i] == name) {
			std::cout << "Interns creates " << names[i] << std::endl;
			return ((this->*makers[i])(target));
		}

	throw (UnknownFormException());
}

const char *Intern::UnknownFormException::what() const throw() {
	return ("Unknown form");
}
