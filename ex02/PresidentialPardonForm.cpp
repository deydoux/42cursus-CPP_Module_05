#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(): AForm("Presidential pardon", 25, 5) {
	std::cerr << "Default PresidentialPardonForm constructor called" << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &other): AForm(other) {
	std::cerr << "PresidentialPardonForm copy constructor called" << std::endl;
}

PresidentialPardonForm::~PresidentialPardonForm() {
	std::cerr << "PresidentialPardonForm destructor called" << std::endl;
}

PresidentialPardonForm &PresidentialPardonForm::operator=(const PresidentialPardonForm &) {
	std::cerr << "PresidentialPardonForm copy assignement operator called" << std::endl;
	return (*this);
}

void PresidentialPardonForm::execute(const Bureaucrat &executor) {
	beExecuted(executor);
}
