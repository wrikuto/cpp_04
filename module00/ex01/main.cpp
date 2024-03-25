/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wrikuto <wrikuto@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/20 18:14:18 by wrikuto           #+#    #+#             */
/*   Updated: 2024/03/02 15:59:45 by wrikuto          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

int main()
{
	PhoneBook	PhoneBook;
	std::string	input;

	std::cout << "WELCOME." << std::endl;
	while (1)
	{
		if (input.compare("EXIT") == 0)
			break ;
		else if (input.compare("ADD") == 0)
		{
			PhoneBook.add_contact(PhoneBook.get_count());
			PhoneBook.increment();
		}
		else if (input.compare("SEARCH") == 0)
			PhoneBook.search_contact();
		std::cout << "> " << std::flush;
		std::cin >> input;
		if (!std::cin.good())
		{
			std::cout << "Input error." << std::endl;
			exit(1);
		}
	}
	return (0);
}
