#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

#include <string>

class ClapTrap
{
	private:
		const static unsigned int	clap_hp_ = 10;
		const static unsigned int	clap_ep_ = 10;
		const static unsigned int	clap_atk_ = 0;

	protected:
		std::string		name_;
		unsigned int	hp_;
		unsigned int	ep_;
		unsigned int	atk_;
		ClapTrap();

	public:
		ClapTrap(std::string	name);
		ClapTrap(const ClapTrap	&src);
		virtual ~ClapTrap();
		ClapTrap	&operator=(const ClapTrap &src);
		void 		attack(const std::string& target);
		void 		takeDamage(int amount);
		void 		beRepaired(int amount);
};

#endif
