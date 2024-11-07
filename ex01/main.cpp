#include "Form.hpp"

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
		Form test("Test", 0, 75);
	} catch (std::exception &e) {
		std::cout << "Exception: " << e.what() << std::endl;
	}

	try {
		Form test("Test", 75, 151);
	} catch (std::exception &e) {
		std::cout << "Exception: " << e.what() << std::endl;
	}

	Form motherboardRequest("Bender motherboard request", 36, 19);
	Form musicRequest("Music request", 1, 1);

	std::cout << motherboardRequest << std::endl;
	std::cout << musicRequest << std::endl;

	for (int i = -1; i <= 151; i++)
		try {
			Bureaucrat bureaucrat(getBureaucratName(i), i);
			motherboardRequest.signForm(bureaucrat);
			musicRequest.signForm(bureaucrat);
			std::cout << bureaucrat << std::endl;

		} catch (std::exception &e) {
			std::cout << "Exception: " << e.what() << std::endl;
		}

	std::cout << motherboardRequest << std::endl;
	std::cout << musicRequest << std::endl;
}
