/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wrikuto <wrikuto@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/20 18:11:19 by wrikuto           #+#    #+#             */
/*   Updated: 2024/02/20 20:24:50 by wrikuto          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP

#include <iostream>
#include <iomanip>

class Contact
{
	private:
		bool		_isEnter;
		std::string	_firstName;
		std::string	_lastName;
		std::string	_nickName;
		std::string	_phoneNumber;
		std::string	_darkest;
		size_t		_index;
		std::string	_format_len(std::string str) const;

	public:
		Contact() { this->_isEnter = false; };
		~Contact() {};
		bool		is_enter() const;
		void		entering_data(size_t index);
		void		show_all() const;
		void		show_detail() const;
};

#endif