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
	if (s.length() == 1 && s[0] > 31 && s[0] < 128 && !isdigit(s[0]))
		return true;
	return false;
}

bool 	ScalarConverter::string_to_int(const std::string s)
{
	for (int n = 0; n++; s[n])
		if (!isdigit(s[n])) return false;
	int	i = 0;
	i = stoi(s);
	return i;
}

bool 	ScalarConverter::string_to_float(const std::string s)
{
	float	f;
	return f;
}

bool	ScalarConverter::string_to_double(const std::string s)
{
	double	d;
	return d;
}

// int		ScalarConverter::figure_out_type(const std::string s)
// {
// }


void	ScalarConverter::convert(std::string s)
{
	if (PRINT)
		std::cout << "ScalarConverter convert method called" << std::endl;
	//int i = figure_out_type(s);
	if (string_to_char(s)) return ;
	if (string_to_int(s)) return ;
	if (string_to_float(s)) return ;
	if (string_to_double(s)) return ;
} 