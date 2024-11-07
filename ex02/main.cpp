#include "AForm.hpp"

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
	try {
		AForm invalid("Invalid", 0, 75);
	} catch (std::exception &e) {
		std::cout << "Exception: " << e.what() << std::endl;
	}

	try {
		AForm invalid("Invalid", 75, 151);
	} catch (std::exception &e) {
		std::cout << "Exception: " << e.what() << std::endl;
	}

	AForm motherboardRequest("Bender motherboard request", 36, 19);
	AForm musicRequest("Music request", 1, 1);

	std::cout << motherboardRequest << std::endl;
	std::cout << musicRequest << std::endl;

	for (int i = -1; i <= 151; i++)
	{
		try {
			Bureaucrat bureaucrat(getBureaucratName(i), i);
			std::cout << bureaucrat << std::endl;
			bureaucrat.signAForm(motherboardRequest);
			bureaucrat.signAForm(musicRequest);

		} catch (std::exception &e) {
			std::cout << "Exception: " << e.what() << std::endl;
		}
		std::cout << std::endl;
	}

	std::cout << motherboardRequest << std::endl;
	std::cout << musicRequest << std::endl;
}
