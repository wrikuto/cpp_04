#ifndef FIXED_HPP
# define FIXED_HPP

class Fixed
{
	private:
		int					value_;
		static const int	bits_ = 8;

	public:
		Fixed();
		Fixed(const Fixed &src);
		Fixed	&operator=(const Fixed &src);
		~Fixed();
		int		getRawBits(void) const;
		void	setRawBits(int const raw);
};

#endif
