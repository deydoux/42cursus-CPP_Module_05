#include "Form.hpp"

Form::Form(): _signed(false), _minGradeToExecute(150), _minGradeToSign(150), _name("Unamed") {
	std::cerr << "Default Form constructor called" << std::endl;
}

Form::Form(const std::string &name, int minGradeToSign, int minGradeToExecute): _signed(false), _minGradeToExecute(minGradeToExecute),
_minGradeToSign(minGradeToSign), _name(name) {
	std::cerr << "Parametric Form constructor called" << std::endl;
	if (_minGradeToSign < 1 || _minGradeToExecute < 1)
		throw (GradeTooHighException());
	else if (_minGradeToSign > 150 || _minGradeToExecute > 150)
		throw (GradeTooLowException());
}

Form::Form(const Form &other): _signed(other._signed), _minGradeToExecute(other._minGradeToExecute), _minGradeToSign(other._minGradeToSign),
_name(other._name) {
	std::cerr << "Form copy constructor called" << std::endl;
}

Form::~Form() {
	std::cerr << "Form destructor called" << std::endl;
}

Form &Form::operator=(const Form &) {
	std::cerr << "Form copy assignement operator called" << std::endl;
	return (*this);
}

const bool &Form::isSigned() const {
	return (_signed);
}

const int &Form::getMinGradeToExecute() const {
	return (_minGradeToExecute);
}

const int &Form::getMinGradeToSign() const {
	return (_minGradeToSign);
}

const std::string &Form::getName() const {
	return (_name);
}

void Form::sign() {
	_signed = true;
}

void Form::beSigned(const Bureaucrat &bureaucrat) const {
	if (bureaucrat.getGrade() > _minGradeToSign)
		throw (GradeTooLowException());
}

const char *Form::GradeTooHighException::what() const throw() {
	return ("Grade is too high");
}

const char *Form::GradeTooLowException::what() const throw() {
	return ("Grade is too low");
}

std::ostream &operator<<(std::ostream &os, const Form &form) {
	os << form.getName() << " form is " << (!form.isSigned() ? "not " : "") << "signed, requires grade " << form.getMinGradeToSign()
		<< " to be signed and grade " << form.getMinGradeToExecute() << " to be executed";
	return (os);
}
