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
}

bool	ScalarConverter::string_to_char(const std::string s)
{
	if (!(s.length() == 1 && s[0] > 31 && s[0] < 128 && !isdigit(s[0])))
		return false;

	char c = s[0];
	std::cout << "Convert to char: " << c << std::endl;
	return true;
}

bool 	ScalarConverter::string_to_int(const std::string s)
{
	for (int n = 0; n++; s[n])
		if (!isdigit(s[n])) return false;

	int i = std::stoi(s);
	std::cout << "Convert to int: " << i << std::endl;
	return true;
}

bool	ScalarConverter::is_float_or_double(const std::string s)
{
	int		n = 0;
	int		p = 0;

	if (!isdigit(s[0])) return false;
	while (s[n] == '-' || s[n] == '+')
		n++;
	for (n; n++; s[n])
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

	float	f = std::stof(s);
	std::cout << "Convert to float: " << f << std::endl;
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