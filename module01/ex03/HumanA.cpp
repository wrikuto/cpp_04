/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wrikuto <wrikuto@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/05 21:44:44 by wrikuto           #+#    #+#             */
/*   Updated: 2024/02/21 18:39:37 by wrikuto          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon &weapon)
:_name(name), _weapon(weapon)
{}

void	HumanA::attack() const
{
	std::cout \
		<< this->_name << " attacks with their " << this->_weapon.getType() \
		<< std::endl;
}
