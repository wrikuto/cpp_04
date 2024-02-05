/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wrikuto <wrikuto@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/05 12:46:27 by wrikuto           #+#    #+#             */
/*   Updated: 2024/02/05 14:55:29 by wrikuto          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main()
{
	std::string	name1;
	std::string name2;
	Zombie *zombie1;

	std::cout << "Enter zombie name..." << std::endl;
	std::cin >> name1;
	std::cout << "Ganarate heap zombie" << std::endl;
	zombie1 = newZombie(name1);
	zombie1->announce();
	delete zombie1;

	std::cout << "\nEnter zombie name..." << std::endl;
	std::cin >> name2;
	std::cout << "Ganarate stack zombie" << std::endl;
	randomChump(name2);
	return (0);
}

// __attribute__((destructor))
// static void destructor() {
//     system("leaks -q Zombie");
// }
