#include "AForm.hpp"

AForm::AForm(): _signed(false), _minGradeToExecute(150), _minGradeToSign(150), _name("Unamed") {
	std::cerr << "Default AForm constructor called" << std::endl;
}

AForm::AForm(const std::string &name, int minGradeToSign, int minGradeToExecute): _signed(false), _minGradeToExecute(minGradeToExecute),
_minGradeToSign(minGradeToSign), _name(name) {
	std::cerr << "Parametric AForm constructor called" << std::endl;
	if (_minGradeToSign < 1 || _minGradeToExecute < 1)
		throw (GradeTooHighException());
	else if (_minGradeToSign > 150 || _minGradeToExecute > 150)
		throw (GradeTooLowException());
}

AForm::AForm(const AForm &other): _signed(other._signed), _minGradeToExecute(other._minGradeToExecute), _minGradeToSign(other._minGradeToSign),
_name(other._name) {
	std::cerr << "AForm copy constructor called" << std::endl;
}

AForm::~AForm() {
	std::cerr << "AForm destructor called" << std::endl;
}

AForm &AForm::operator=(const AForm &) {
	std::cerr << "AForm copy assignement operator called" << std::endl;
	return (*this);
}

const bool &AForm::isSigned() const {
	return (_signed);
}

const int &AForm::getMinGradeToExecute() const {
	return (_minGradeToExecute);
}

const int &AForm::getMinGradeToSign() const {
	return (_minGradeToSign);
}

const std::string &AForm::getName() const {
	return (_name);
}

void AForm::beSigned(const Bureaucrat &bureaucrat) const {
	if (bureaucrat.getGrade() > _minGradeToSign)
		throw (GradeTooLowException());
}

void AForm::sign(const Bureaucrat &bureaucrat) {
	beSigned(bureaucrat);
	_signed = true;
}

void AForm::beExecuted(const Bureaucrat &executor) const {
	if (!_signed)
		throw (NotSignedException());
	else if (executor.getGrade() > _minGradeToExecute)
		throw (GradeTooLowException());
}

const char *AForm::GradeTooHighException::what() const throw() {
	return ("Grade is too high");
}

const char *AForm::GradeTooLowException::what() const throw() {
	return ("Grade is too low");
}

std::ostream &operator<<(std::ostream &os, const AForm &form) {
	os << form.getName() << " form is " << (!form.isSigned() ? "not " : "") << "signed, requires grade " << form.getMinGradeToSign()
		<< " to be signed and grade " << form.getMinGradeToExecute() << " to be executed";
	return (os);
}

const char *AForm::NotSignedException::what() const throw() {
	return ("Form is not signed");
}
