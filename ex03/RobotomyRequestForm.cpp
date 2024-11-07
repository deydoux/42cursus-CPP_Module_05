#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(): AForm("Robotomy request", 72, 45), _target("Unknown target") {
	std::cerr << "Default RobotomyRequestForm constructor called" << std::endl;
	std::srand(std::time(NULL));
}

RobotomyRequestForm::RobotomyRequestForm(const std::string &target): AForm("Robotomy request", 72, 45), _target(target) {
	std::cerr << "Parametric RobotomyRequestForm constructor called" << std::endl;
	std::srand(std::time(NULL));
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &other): AForm(other) {
	std::cerr << "RobotomyRequestForm copy constructor called" << std::endl;
	std::srand(std::time(NULL));
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
	if (std::rand() % 2)
		std::cout << _target << " has been robotomized" << std::endl;
	else
		std::cout << _target << " robotomy failed" << std::endl;
}
