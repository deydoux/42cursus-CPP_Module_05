#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(): AForm("Shrubbery creation", 145, 137) {
	std::cerr << "Default ShrubberyCreationForm constructor called" << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &other): AForm(other) {
	std::cerr << "ShrubberyCreationForm copy constructor called" << std::endl;
}

ShrubberyCreationForm::~ShrubberyCreationForm() {
	std::cerr << "ShrubberyCreationForm destructor called" << std::endl;
}

ShrubberyCreationForm &ShrubberyCreationForm::operator=(const ShrubberyCreationForm &) {
	std::cerr << "ShrubberyCreationForm copy assignement operator called" << std::endl;
	return (*this);
}

void ShrubberyCreationForm::execute(const Bureaucrat &executor) {
	beExecuted(executor);
}
