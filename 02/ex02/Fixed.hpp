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

		Fixed	& operator= ( Fixed const & rhs );

		//The 6 comparison operators: >, <, >=, <=, == and !=

		bool	operator> ( Fixed const & rhs);
		bool	operator< ( Fixed const & rhs);
		bool	operator>= ( Fixed const & rhs);
		bool	operator<= ( Fixed const & rhs);
		bool	operator== ( Fixed const & rhs);
		bool	operator!= ( Fixed const & rhs);

		//• The 4 arithmetic operators: +, -, *, and /

		Fixed	operator+ (Fixed const & rhs) const;
		Fixed	operator- (Fixed const & rhs) const;
		Fixed	operator* (Fixed const & rhs) const;
		Fixed	operator/ (Fixed const & rhs) const;

		/* The 4 increment/decrement (pre-increment and post-increment, pre-decrement and
		post-decrement) operators, that will increase or decrease the fixed-point value from
		the smallest representable ϵ such as 1 + ϵ > 1. */

		Fixed operator++( int );
		Fixed & operator++( void );
		Fixed operator--( int );
		Fixed & operator--( void );

		static Fixed & min(Fixed& left, Fixed& right);
		static Fixed const & min(Fixed const & left, Fixed const & right);
		static Fixed & max(Fixed& left, Fixed& right);
		static Fixed const & max(Fixed const & left, Fixed const & right);
};

std::ostream & operator<< ( std::ostream & o, Fixed const & rightside );
# endif