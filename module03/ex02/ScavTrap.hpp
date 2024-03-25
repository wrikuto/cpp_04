#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

# include "ClapTrap.hpp"

class ScavTrap: public ClapTrap
{
	private:
		const static unsigned int	scav_hp_ = 100;
		const static unsigned int	scav_ep_ = 50;
		const static unsigned int	scav_akt_ = 20;
		ScavTrap();

	public:
		ScavTrap(std::string name);
		ScavTrap(const ScavTrap& copy);
		~ScavTrap();
		ScavTrap	&operator=(const ScavTrap &src);
		void	attack(const std::string &target);
		void	guardGate();
};

#endif
