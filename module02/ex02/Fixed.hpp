#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>

class Fixed
{
	private:
		int					value_;
		static const int	bits_ = 8;

	public:
		Fixed();
		Fixed(const int num);
		Fixed(const float fnum);
		Fixed(const Fixed &src);
		Fixed	&operator=(const Fixed &src);
		~Fixed();

		int		getRawBits(void) const;
		void	setRawBits(int const raw);
		float	toFloat(void) const;
		int		toInt(void) const;

		bool	operator>(const Fixed &num);
		bool	operator<(const Fixed &num);
		bool	operator>=(const Fixed &num);
		bool	operator<=(const Fixed &num);
		bool	operator==(const Fixed &num);
		bool	operator!=(const Fixed &num);
		Fixed	operator+(const Fixed &num);
		Fixed	operator-(const Fixed &num);
		Fixed	operator*(const Fixed &num);
		Fixed	operator/(const Fixed &num);
		Fixed	&operator++(void);
		Fixed	operator++(int);
		Fixed	&operator--(void);
		Fixed	operator--(int);

		static Fixed		&min(Fixed &a, Fixed &b);
		static const Fixed	&min(const Fixed &a, const Fixed &b);
		static Fixed		&max(Fixed &a, Fixed &b);
		static const Fixed	&max(const Fixed &a, const Fixed &b);	
};

#endif

std::ostream	&operator<<(std::ostream &stream, const Fixed &num);
