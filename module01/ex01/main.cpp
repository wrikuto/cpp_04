/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wrikuto <wrikuto@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/05 18:01:06 by wrikuto           #+#    #+#             */
/*   Updated: 2024/02/05 20:26:40 by wrikuto          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main()
{
	int		i = 0;
	int		N = 4;
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
//     system("leaks -q Zombies");
// }
