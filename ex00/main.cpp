#include "Bureaucrat.hpp"

// https://theinfosphere.org/Central_Bureaucracy#Known_Employees
static std::string getBureaucratName(int i) {
	switch (i) {
	case 1:
		return ("Number 1.0");
	case 11:
		return ("Beholder");
	case 19:
		return ("Morgan Proctor");
	case 36:
		return ("Hermes Conrad");
	case 135:
		return ("Warden Vogel");
	default:
		return ("Unknown employee");
	}
}

int main() {
	for (int i = -1; i <= 151; i++)
		try {
			Bureaucrat bureaucrat(getBureaucratName(i), i);
			std::cout << bureaucrat << std::endl;
		} catch (std::exception &e) {
			std::cout << "Exception: " << e.what() << std::endl;
		}
}
