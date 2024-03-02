#include <iostream>
#include "sed.hpp"

int main(int argc, char **argv)
{	
	if (argc != 4)
	{
		std::cout << "Wrong arg." << std::endl;
		return (1);
	}
	Sed sed(argv[1]);
	sed.replace(argv[2], argv[3]);
	return (0);
}

// __attribute__((destructor))
// static void destructor() {
//     system("leaks -q sed");
// }
