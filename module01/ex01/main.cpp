#include "Zombie.hpp"

int main()
{
	int		i = 0;
	int		N = 10;
	Zombie	*zombies;

	zombies = zombieHorde(N, "jeb");
	while (i < N)
	{
		zombies[i].announce();
		i++;
	}
	delete [] zombies;
	return (0);
}

// __attribute__((destructor))
// static void destructor() {
//     system("leaks -q zombies");
// }
