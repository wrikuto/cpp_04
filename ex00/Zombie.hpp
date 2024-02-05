/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wrikuto <wrikuto@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/31 16:20:13 by wrikuto           #+#    #+#             */
/*   Updated: 2024/02/05 12:50:50 by wrikuto          ###   ########.fr       */
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
		Zombie(std::string name);
		~Zombie();
		void	announce(void);
		Zombie	*newZombie(std::string name);
		void	randomChump(std::string name);
		
};

Zombie	*newZombie(std::string name);
void	randomChump(std::string name);

#endif
