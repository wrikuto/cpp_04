/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wrikuto <wrikuto@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/07 21:13:52 by wrikuto           #+#    #+#             */
/*   Updated: 2024/02/28 21:37:24 by wrikuto          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

#include "Contact.hpp"

class PhoneBook
{
	private:
		size_t	_counter;		
		Contact	_contact[8];
		
	public:
		PhoneBook();
		~PhoneBook(); 
		void	increment();
		size_t	get_count();
		void	add_contact(size_t counter);
		void	search_contact() const;
};

#endif
