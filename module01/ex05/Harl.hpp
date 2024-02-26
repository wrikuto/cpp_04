/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wrikuto <wrikuto@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/24 21:29:50 by wrikuto           #+#    #+#             */
/*   Updated: 2024/02/26 15:05:32 by wrikuto          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARI_HPP
# define HARI_HPP

# include <iostream>

class Harl
{
	private:
		void	debug();
		void	info();
		void	warning();
		void	error();

		typedef void	(Harl::*func_Harl) ();


	public:
		Harl() {};
		~Harl() {};
		void	complain(std::string str);

};

#endif
