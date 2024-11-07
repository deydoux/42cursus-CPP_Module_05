#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(): AForm("Robotomy request", 72, 45) {
	std::cerr << "Default RobotomyRequestForm constructor called" << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &other): AForm(other) {
	std::cerr << "RobotomyRequestForm copy constructor called" << std::endl;
}

RobotomyRequestForm::~RobotomyRequestForm() {
	std::cerr << "RobotomyRequestForm destructor called" << std::endl;
}

RobotomyRequestForm &RobotomyRequestForm::operator=(const RobotomyRequestForm &) {
	std::cerr << "RobotomyRequestForm copy assignement operator called" << std::endl;
	return (*this);
}

void RobotomyRequestForm::execute(const Bureaucrat &executor) {
	beExecuted(executor);
}
