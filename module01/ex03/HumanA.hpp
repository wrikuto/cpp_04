#ifndef HUMANA_HPP
# define HUMANA_HPP

#include "Weapon.hpp"

class HumanA
{
	private:
		std::string	name_;
		Weapon		&weapon_;
	
	public:
		HumanA(std::string name, Weapon &weapon);
		~HumanA();
		void	attack() const;
		
};

#endif