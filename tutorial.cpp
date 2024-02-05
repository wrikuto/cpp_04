#include "tutorial.hpp"



int main()
{
	Car supra(100);

	std::cout << "Current speed: " << supra.get_speed() << std::endl;
	supra.brake(10);
	std::cout << "Current speed: " << supra.get_speed() << std::endl;
	return (0);
}
