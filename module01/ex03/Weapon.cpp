/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wrikuto <wrikuto@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/05 21:44:39 by wrikuto           #+#    #+#             */
/*   Updated: 2024/02/05 22:00:35 by wrikuto          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(std::string type)
{
	this->set_type(type)
}

Weapon::~Weapon(void)
{
	
}

void	Weapon::set_type(std::string type)
{
	this->type = type;
}