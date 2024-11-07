#ifndef INTERN_HPP
#define INTERN_HPP

#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

class Intern {
public:
	Intern();
	Intern(const Intern &other);
	~Intern();
	Intern &operator=(const Intern &rhs);
	AForm *makePresidentialPardonForm(const std::string &target) const;
	AForm *makeRobotomyRequestForm(const std::string &target) const;
	AForm *makeShrubberyCreationForm(const std::string &target) const;
	AForm *makeForm(const std::string &name, const std::string &target) const;

	class UnknownFormException: public std::exception {
	public:
		const char *what() const throw();
	};
};

#endif
