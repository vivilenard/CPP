#include "ScalarConverter.hpp"

ScalarConverter::ScalarConverter()
{
	if (PRINT)
		std::cout << "ScalarConverter constructor called" << std::endl;
}

ScalarConverter::ScalarConverter(const ScalarConverter & cpy)
{
	if (PRINT)
		std::cout << "ScalarConverter Copy Constructor called" << std::endl;
	*this = cpy;
}

ScalarConverter::~ScalarConverter()
{
	if (PRINT)
		std::cout << "ScalarConverter Destructor called" << std::endl;
}

ScalarConverter ScalarConverter::operator=(const ScalarConverter & rhs)
{
	if (PRINT)
		std::cout << "ScalarConverter Assignment Operator called" << std::endl;
	if (this != &rhs)
		*this = rhs;
	return (*this);
}

bool	ScalarConverter::string_to_char(const std::string s)
{
	if (!(s.length() == 1 && s[0] > 31 && !isdigit(s[0])))
		return false;

	std::cout << "Convert to char: " << std::endl;
	char c = s[0];
	std::cout << c << std::endl;
	return true;
}

bool 	ScalarConverter::string_to_int(const std::string s)
{
	for (int n = 0; s[n]; n++)
		if (!isdigit(s[n])) return false;

	std::cout << "Convert to int: ";
	int i = std::stoi(s);
	std::cout << i << std::endl;
	return true;
}

bool	ScalarConverter::is_float_or_double(const std::string s)
{
	int		n = 0;
	int		p = 0;

	if (!isdigit(s[0])) return false;
	while (s[n] == '-' || s[n] == '+')
		n++;
	for (n = 0; n++; s[n])
	{
		if (!isdigit(s[n]) && s[n] != '.')
			return false;
		if (s[n] == '.')
			p++;
	}
	if (!isdigit(s[n - 1]) && s[n] != 'f') return false;
	return true;
}

bool 	ScalarConverter::string_to_float(const std::string s)
{
	if (s.length() > 6)
		return false;
	if (!is_float_or_double(s)) return false;

	std::cout << "Convert to float: ";
	float	f = std::stof(s);
	std::cout << f << std::endl;
	return true;
}

bool	ScalarConverter::string_to_double(const std::string s)
{
	if (s.length() < 6 || s.length() > 18)
		return false;
	if (!is_float_or_double(s)) return false;

	double	d = std::stod(s);
	std::cout << "Convert to double: " << d << std::endl;
	return d;
}

void	ScalarConverter::convert(std::string s)
{
	if (PRINT)
		std::cout << "ScalarConverter convert method called" << std::endl;
	if (string_to_char(s)) return ;
	if (string_to_int(s)) return ;
	if (string_to_float(s)) return ;
	if (string_to_double(s)) return ;
} 