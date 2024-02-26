/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wrikuto <wrikuto@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/05 18:00:35 by wrikuto           #+#    #+#             */
/*   Updated: 2024/02/21 14:56:29 by wrikuto          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <iostream>

class Zombie
{
	private:
		std::string	_name;
		
	public:
		Zombie() {};
		~Zombie();
		void	announce(void);
		Zombie	*newZombie(std::string name);
		void	set_name(std::string name);
		
};

Zombie	*zombieHorde(int N, std::string name);

#endif
