#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(): AForm("presidential pardon", 25, 5), _target("Unknown target") {
	std::cerr << "Default PresidentialPardonForm constructor called" << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(const std::string &target): AForm("presidential pardon", 25, 5), _target(target) {
	std::cerr << "Parametric PresidentialPardonForm constructor called" << std::endl;
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

void PresidentialPardonForm::execute(const Bureaucrat &executor) const {
	beExecuted(executor);
	std::cout << _target << " has been pardoned by Zaphod Beeblebrox" << std::endl;
}
