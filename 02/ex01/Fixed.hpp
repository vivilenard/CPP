#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>
#include <cmath>

class Fixed
{
	private:
		int					_number_value;
		static const int	_n_factional_bits = 8;

	public:
		Fixed	();
		Fixed	( const int );
		Fixed	( const float );
		Fixed	( const Fixed& copy );
		~Fixed	();
		int		getRawBits( void ) const;
		void	setRawBits( int const raw );

		float	toFloat( void ) const;
		int		toInt( void ) const;

		Fixed	& operator= ( Fixed const & rightside );
};

std::ostream & operator<< ( std::ostream & o, Fixed const & rightside );
# endif