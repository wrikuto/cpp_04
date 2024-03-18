#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

# include "ClapTrap.hpp"

class FragTrap: public ClapTrap
{
	private:
		const static int	frag_hp_ = 100;
		const static int	frag_ep_ = 100;
		const static int	frag_atk_ = 30;
		FragTrap();

	public:
		FragTrap(std::string name);
		FragTrap(const FragTrap& copy);
		~FragTrap();
		FragTrap	&operator=(const FragTrap &src);
		void	attack(const std::string& target);
		void 	highFivesGuys(void);
};

#endif