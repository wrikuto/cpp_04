/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wrikuto <wrikuto@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/17 16:47:34 by wrikuto           #+#    #+#             */
/*   Updated: 2024/02/26 19:02:15 by wrikuto          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

// PhoneBook::PhoneBook() {}
// PhoneBook::~PhoneBook() {}

void	PhoneBook::add_contact(size_t counter)
{
	this->_contact[counter % 8].entering_data(counter % 8);
}

void	PhoneBook::search_contact() const
{
	size_t	num_input;

	std::cout << "\n--ALL INDEX--" << std::endl;
	for (size_t i = 0; i <= 7; i++)
		_contact[i].show_all();
	std::cout << "\nEnter index number: ";

	std::cin >> num_input;
	if (!std::cin.good())
	{
        std::cin.clear();
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
		std::cout << "Wrong input. tryagain." << std::endl;
	}
	else if (8 <= num_input)
		std::cout << "Number out of range." << std::endl;
	else if (_contact[num_input].is_enter() == false)
		std::cout << "This index not have data." << std::endl;
	else
		_contact[num_input].show_detail();
}