#include <iostream>
#include "Accounting.hpp"

Accounting::Accounting(std::string name, long amnt)
{
	full_name = name;
	crnt_asset = amnt;
}

void Accounting::earn(long amnt)
{
	crnt_asset += amnt;
}

void Accounting::spend(long amnt)
{
	crnt_asset -= amnt;
}

int main()
{
	Accounting Man("jeb", 100);

	std::cout << "jeb's amount: " << Man.asset() << std::endl;

	Man.earn(50);

	std::cout << "jeb got 50$. Now he's amount is: " << Man.asset() << std::endl;

	return (0);
}