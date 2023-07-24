#include "Fixed.hpp"

Fixed::Fixed()	{
	this->setRawBits(0);
}
Fixed::~Fixed()	{}

Fixed::Fixed(const int	int_number){
	this->setRawBits(int_number * (1 << _n_factional_bits));
}

Fixed::Fixed(const float f){
	this->setRawBits(roundf(f * (1 << _n_factional_bits)));
}

Fixed::Fixed(const Fixed & copy){
	*this = copy;
}

int		Fixed::getRawBits( void ) const 	{
	return this->_number_value;
}

void	Fixed::setRawBits( int const raw )	{
	this->_number_value = raw;
}

float	Fixed::toFloat( void ) const	{
	return ((float)getRawBits() / (1 << this->_n_factional_bits));
}

int		Fixed::toInt( void ) const	{
	return ((int)roundf(toFloat()));
}

Fixed &	Fixed::operator=(Fixed const & rhs){
	this->_number_value = rhs.getRawBits();
	return *this;
}

std::ostream & operator<< ( std::ostream & o, Fixed const & rhs ){
	return (o << rhs.toFloat());
}

//////////////////////////////////////////////////////////////////////
//							OPERATORS								//
//////////////////////////////////////////////////////////////////////

//comparison operators

bool Fixed::operator> (Fixed const & rhs){
	return (this->getRawBits() > rhs.getRawBits());
}

bool Fixed::operator< (Fixed const & rhs){
	return (this->getRawBits() < rhs.getRawBits());
}

bool Fixed::operator>= (Fixed const & rhs){
	return (this->getRawBits() >= rhs.getRawBits());
}

bool Fixed::operator<= (Fixed const & rhs){
	return (this->getRawBits() <= rhs.getRawBits());
}

bool Fixed::operator!= (Fixed const & rhs){
	return (this->getRawBits() != rhs.getRawBits());
}

bool Fixed::operator== (Fixed const & rhs){
	return (this->getRawBits() == rhs.getRawBits());
}

//arithmetric operators

Fixed	Fixed::operator+ (Fixed const & rhs) const{
	return (Fixed(this->toFloat() + rhs.toFloat()));
}

Fixed	Fixed::operator- (Fixed const & rhs) const{
	return (Fixed(this->toFloat() - rhs.toFloat()));
}

Fixed	Fixed::operator* (Fixed const & rhs) const{
	return (this->toFloat() * rhs.toFloat());
}

Fixed	Fixed::operator/ (Fixed const & rhs) const{
	return(this->toFloat() / rhs.toFloat());
}

//increment/decrement

Fixed Fixed::operator++( int )	//pre-increment
{
	Fixed before(*this);

	_number_value++;
	return (before);
}

Fixed& Fixed::operator++( void )
{
	this->_number_value++;
	return (*this);
}

Fixed	Fixed::operator--( int )	//pre-decrement
{
	Fixed before(*this);

	this->_number_value++;
	return (before);
}

Fixed&	Fixed::operator--( void )
{
	this->_number_value--;
	return (*this);
}

//static min/max functions

Fixed& Fixed::min(Fixed& left, Fixed& right)
{
	if (left.getRawBits() <= right.getRawBits())
		return (left);
	return (right);
}

Fixed const & Fixed::min(Fixed const & left, Fixed const & right)
{
	if (left.getRawBits() <= right.getRawBits())
		return (left);
	return (right);
}

Fixed& Fixed::max(Fixed& left, Fixed& right)
{
	if (left.getRawBits() >= right.getRawBits())
		return (left);
	return (right);
}

Fixed const & Fixed::max(Fixed const & left, Fixed const & right)
{
	if (left.getRawBits() >= right.getRawBits())
		return (left);
	return (right);
}
