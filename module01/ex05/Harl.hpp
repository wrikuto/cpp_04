#ifndef HARI_HPP
# define HARI_HPP

# include <iostream>

class Harl
{
	private:
		void	debug();
		void	info();
		void	warning();
		void	error();

	public:
		Harl() {};
		~Harl() {};
		void	complain(std::string str);
};

typedef void	(Harl::*func_Harl) ();

#endif
