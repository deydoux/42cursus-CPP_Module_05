#ifndef FORM_HPP
#define FORM_HPP

#include "Bureaucrat.hpp"

class Bureaucrat;

class Form {
private:
	bool _signed;
	const int _minGradeToExecute;
	const int _minGradeToSign;
	const std::string _name;
public:
	Form();
	Form(const std::string &name, int minGradeToSign, int minGradeToExecute);
	Form(const Form &other);
	~Form();
	Form &operator=(const Form &rhs);
	const bool &isSigned() const;
	const int &getMinGradeToExecute() const;
	const int &getMinGradeToSign() const;
	const std::string &getName() const;
	void sign();
	void beSigned(const Bureaucrat &bureaucrat) const;

	class GradeTooHighException: public std::exception {
	public:
		const char *what() const throw();
	};

	class GradeTooLowException: public std::exception {
	public:
		const char *what() const throw();
	};
};

std::ostream &operator<<(std::ostream &os, const Form &form);

#endif
