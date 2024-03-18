#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

#include <string>

class ClapTrap
{
	protected:
		std::string		name_;
		int				hp_;
		int				ep_;
		int				atk_;

	public:
		ClapTrap();
		ClapTrap(std::string	name);
		ClapTrap(const ClapTrap	&src);
		virtual ~ClapTrap();

		ClapTrap	&operator=(const ClapTrap &src);

		void 		attack(const std::string& target);
		void 		takeDamage(int amount);
		void 		beRepaired(int amount);
};

#endif
