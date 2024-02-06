/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wrikuto <wrikuto@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/05 18:06:47 by wrikuto           #+#    #+#             */
/*   Updated: 2024/02/05 20:09:50 by wrikuto          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie	*zombieHorde(int N, std::string name)
{
	int i = 0;
	Zombie *zombies = new Zombie[N];
	
	while (i < N)
	{
		zombies[i].set_name(name);
		i++;
	}
	return (zombies);
}