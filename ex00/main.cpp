#include "Bureaucrat.hpp"

int main() {
	// https://theinfosphere.org/Central_Bureaucracy#Known_Employees
	Bureaucrat number1("Number 1.0", 1);
	Bureaucrat beholder("Beholder", 11);
	Bureaucrat morgan("Morgan Proctor", 19);
	Bureaucrat hermes("Hermes Conrad", 36);
	Bureaucrat warden("Warden Vogel", 135);
	Bureaucrat employee("Unknown employee", 150);

	std::cout << number1 << std::endl;
	std::cout << beholder << std::endl;
	std::cout << morgan << std::endl;
	std::cout << hermes << std::endl;
	std::cout << warden << std::endl;
	std::cout << employee << std::endl;

	try {
		Bureaucrat("Invalid", 0);
	} catch (std::exception &e) {
		std::cout << e.what() << std::endl;
	}

	try {
		Bureaucrat("Invalid", 151);
	} catch (std::exception &e) {
		std::cout << e.what() << std::endl;
	}
}
