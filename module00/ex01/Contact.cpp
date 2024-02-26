/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wrikuto <wrikuto@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/20 18:12:34 by wrikuto           #+#    #+#             */
/*   Updated: 2024/02/26 15:24:20 by wrikuto          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

bool	Contact::is_enter() const
{
	if (this->_isEnter == 1)
		return (true);
	return (false);
}

void	Contact::entering_data(size_t index)
{
	size_t	i = 0;
	std::string input;

	this->_index = index;
	std::cin.clear();
	std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
	while (i <= 4)
	{
		if (i == 0)
			std::cout << "Enter first name: ";
		else if (i == 1)
			std::cout << "Enter last name: ";
		else if (i == 2)
			std::cout << "Enter nickname: ";
		else if (i == 3)
			std::cout << "Enter phone number: ";
		else if (i == 4)
			std::cout << "Enter darkest secret: ";
		
		std::getline(std::cin, input);

		if (!std::cin.good() || input.empty())
			std::cout << "Error input. tryagain." << std::endl;
		else
		{
			if (i == 0)
				this->_firstName = input;
			else if (i == 1)
				this->_lastName = input;
			else if (i == 2)
				this->_nickName = input;
			else if (i == 3)
				this->_phoneNumber = input;
			else if (i == 4)
				this->_darkest = input;
			i++;
		}
	}
	this->_isEnter = 1;
}

std::string	Contact::_format_len(std::string str) const
{
	if (10 < str.length())
		return (str.substr(0, 9) + ".");
	return (str);
}

void	Contact::show_all() const
{
	// if (this->_firstName.empty() || this->_lastName.empty() || this->_nickName.empty() || \
	// 	this->_phoneNumber.empty())
	if (this->_isEnter == 0)
		return ;
	std::cout \
		<< "|" << std::setw(10) << this->_index \
		<< "|" << std::setw(10) << this->_format_len(this->_firstName) \
		<< "|" << std::setw(10) << this->_format_len(this->_lastName) \
		<< "|" << std::setw(10) << this->_format_len(this->_nickName) \
		<< "|" \
		<< std::endl;
}

void	Contact::show_detail() const
{
	// if (this->_firstName.empty() || this->_lastName.empty() || this->_nickName.empty() || \
	// 	this->_phoneNumber.empty())
	if (this->_isEnter == 0)
		return ;
	std::cout \
		<< "\n" \
		<< "index number:  " << this->_index << "\n" \
		<< "First name:  " << this->_firstName << "\n" \
		<< "Last name:  " << this -> _lastName << "\n" \
		<< "Nick name:  " << this -> _nickName << "\n" \
		<< "Phone number:  " << this -> _phoneNumber << "\n" \
		<< "darkest secret:  " << this -> _darkest << "\n" \
		<< std::endl;
}
