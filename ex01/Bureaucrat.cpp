#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(): _name("Unamed"), _grade(150) {
	std::cerr << "Default Bureaucrat constructor called" << std::endl;
}

Bureaucrat::Bureaucrat(const std::string &name, const int &grade): _name(name), _grade(grade) {
	std::cerr << "Parametric Bureaucrat constructor called" << std::endl;
	if (_grade < 1)
		throw (GradeTooHighException());
	else if (_grade > 150)
		throw (GradeTooLowException());
}

Bureaucrat::Bureaucrat(const Bureaucrat &other): _name(other._name), _grade(other._grade) {
	std::cerr << "Bureaucrat copy constructor called" << std::endl;
}

Bureaucrat::~Bureaucrat() {
	std::cerr << "Bureaucrat destructor called" << std::endl;
}

Bureaucrat &Bureaucrat::operator=(const Bureaucrat &rhs) {
	std::cerr << "Bureaucrat copy assignement operator called" << std::endl;
	_grade = rhs._grade;
	return (*this);
}

const std::string &Bureaucrat::getName() const {
	return (_name);
}

const int &Bureaucrat::getGrade() const {
	return (_grade);
}

const char *Bureaucrat::GradeTooHighException::what() const throw() {
	return ("Bureaucrat grade is too high");
}

const char *Bureaucrat::GradeTooLowException::what() const throw() {
	return ("Bureaucrat grade is too low");
}

std::ostream &operator<<(std::ostream &os, const Bureaucrat &bureaucrat) {
	os << bureaucrat.getName() << ", bureaucrat grade " << bureaucrat.getGrade();
	return (os);
}
