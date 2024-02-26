/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wrikuto <wrikuto@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/05 21:44:48 by wrikuto           #+#    #+#             */
/*   Updated: 2024/02/21 18:39:32 by wrikuto          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string name)
{
	this->_name = name;
	this->_weapon = nullptr;
}

void	HumanB::setWeapon(Weapon &weapon)
{
	this->_weapon = &weapon;
}

void	HumanB::attack() const
{
	if (this->_weapon != nullptr && this->_weapon->getType() != "")
	{
		std::cout \
			<< this->_name << " attacks with their " << this->_weapon->getType() \
			<< std::endl;
	}
	else
		std::cout << "HumanB not have weapon." << std::endl;
}
