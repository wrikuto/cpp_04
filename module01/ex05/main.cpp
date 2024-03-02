#include "Harl.hpp"

int main()
{
	Harl harl;
	std::string input;

	std::cout << "Enter type:" << std::endl;
	std::cin >> input;
	harl.complain(input);

	return (0);
}