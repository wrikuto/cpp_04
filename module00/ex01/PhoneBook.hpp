/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wrikuto <wrikuto@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/07 21:13:52 by wrikuto           #+#    #+#             */
/*   Updated: 2024/02/20 18:24:31 by wrikuto          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

#include "Contact.hpp"

// class Contact
// {
// 	private:
// 		bool		_isEnter;
// 		std::string	_firstName;
// 		std::string	_lastName;
// 		std::string	_nickName;
// 		std::string	_phoneNumber;
// 		std::string	_darkest;
// 		size_t		_index;

// 		std::string	_format_len(std::string str) const;

// 	public:
// 		Contact();
// 		~Contact();
// 		bool		is_enter() const;
// 		void		entering_data(size_t index);
// 		void		show_outline() const;
// 		void		show_detail() const;
	
// };

class PhoneBook
{
	private:
		Contact			_contact[8];
		
	public:
		PhoneBook() {};
		~PhoneBook() {};
		void	add_contact(size_t counter);
		void	search_contact() const;
		// void	show_contact(size_t	counter);
};

#endif