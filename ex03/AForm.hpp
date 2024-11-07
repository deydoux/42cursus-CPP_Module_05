#ifndef AFORM_HPP
#define AFORM_HPP

#include "Bureaucrat.hpp"

class Bureaucrat;

class AForm {
private:
	bool _signed;
	const int _minGradeToExecute;
	const int _minGradeToSign;
	const std::string _name;
public:
	AForm();
	AForm(const std::string &name, int minGradeToSign, int minGradeToExecute);
	AForm(const AForm &other);
	~AForm();
	AForm &operator=(const AForm &rhs);
	const bool &isSigned() const;
	const int &getMinGradeToExecute() const;
	const int &getMinGradeToSign() const;
	const std::string &getName() const;
	void beSigned(const Bureaucrat &bureaucrat) const;
	void sign(const Bureaucrat &bureaucrat);
	void beExecuted(const Bureaucrat &executor) const;
	virtual void execute(const Bureaucrat &executor) = 0;

	class GradeTooHighException: public std::exception {
	public:
		const char *what() const throw();
	};

	class GradeTooLowException: public std::exception {
	public:
		const char *what() const throw();
	};

	class NotSignedException: public std::exception {
	public:
		const char *what() const throw();
	};
};

std::ostream &operator<<(std::ostream &os, const AForm &form);

#endif
