#include "ScalarConverter.hpp"

void ScalarConverter::convert(const std::string s)
{
	//enum TYPE{CHAR = 1, INT = 2, FLOAT = 3, DOUBLE = 4};
	int type = detect_type(s);
	switch (type)
	{
		case CHAR:
			string_to_char(s);
			break;
		case INT:
			string_to_int(s);
			break;
		case FLOAT:
			string_to_float(s);
			break;
		case DOUBLE:
			string_to_double(s);
			break;
		default:
			break;
	}
}

int	ScalarConverter::detect_type(const std::string s)
{
	if (is_char(s))
		return (CHAR);
	if (is_int(s))
		return (INT);
	if (is_float(s))
		return (FLOAT);
	if (is_double(s))
		return (DOUBLE);
	return 0;
}

bool		ScalarConverter::is_char(const std::string s)
{
	if (s.length() == 1 && isalpha(s[0]))
		return true;
	return false;
}
bool		ScalarConverter::is_int(const std::string s)
{
	for (int n = 0; s[n]; n++)
		if (!isdigit(s[n])) return false;
	return true;
}
bool		ScalarConverter::is_float(const std::string s)
{
	if (s.length() > 6)
		return false;
	if (!is_float_or_double(s))
		return false;
	return true;
}
bool		ScalarConverter::is_double(const std::string s)
{
	if (s.length() < 6 || s.length() > 18)
		return false;
	if (!is_float_or_double(s)) return false;
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


bool	ScalarConverter::string_to_char(const std::string s)
{
	std::cout << "Convert to char: " << std::endl;
	char c = s[0];
	std::cout << c << std::endl;
	return true;
}

bool 	ScalarConverter::string_to_int(const std::string s)
{
	std::cout << "Convert to int: ";
	int i = std::stoi(s);
	std::cout << i << std::endl;
	return true;
}

bool 	ScalarConverter::string_to_float(const std::string s)
{
	std::cout << "Convert to float: ";
	float	f = std::stof(s);
	std::cout << f << std::endl;
	return true;
}

bool	ScalarConverter::string_to_double(const std::string s)
{
	double	d = std::stod(s);
	std::cout << "Convert to double: " << d << std::endl;
	return d;
}

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