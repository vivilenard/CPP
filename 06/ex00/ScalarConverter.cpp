#include "ScalarConverter.hpp"

void ScalarConverter::convert(const std::string s)
{
	int	type = detect_type(s);
	// std::cout << type << std::endl;
	switch (type)
	{
		case (CHAR):
			convert_char(s);
			break ;
		case (INT):
			convert_int(s);
			break ;
		case (FLOAT):
			convert_float(s);
			break ;
		case (DOUBLE):
			convert_double(s);
			break ;
		case (INF):
			convert_inf(s);
			break ;
		default:
			std::cout << "String type unknown" << std::endl;
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
	if (is_inf(s))
		return (INF);
	return (UNKNOWN);
}

bool		ScalarConverter::is_char(const std::string s)
{
	if (s.length() != 1)
		return false;
	if (!isdigit(s[0]))
		return true;
	return false;
}
bool		ScalarConverter::is_int(const std::string s)
{
	unsigned int c = 0;
	while (s[c] == '-' || s[c] == '+')
		c++;
	for (unsigned int n = c; s[n]; n++)
		if (!isdigit(s[n])) return false;
	return true;
}
bool		ScalarConverter::is_float(const std::string s)
{
	unsigned int		c = 0;
	unsigned int		p = 0;

	while (s[c] == '-' || s[c] == '+')
		c++;
	if (!isdigit(s[c])) return false;
	for (unsigned int n = c; s[n]; n++)
	{
		if (!isdigit(s[n]) && s[n] != '.' && s[n] != 'f')
			return false;
		if (s[n] == '.')
			p++;
	}
	if (s.at(s.length() - 1) == 'f' && p <= 1)
		return true;
	return false;
}

bool		ScalarConverter::is_double(const std::string s)
{
	unsigned int		c = 0;
	unsigned int		p = 0;

	if (!isdigit(s[0])) return false;
	while (s[c] == '-' || s[c] == '+')
		c++;
	for (unsigned int n = c; s[n]; n++)
	{
		if (!isdigit(s[n]) && s[n] != '.')
			return false;
		if (s[n] == '.')
			p++;
	}
	if (p == 1)
		return true;
	return false;
}

bool		ScalarConverter::is_inf(std::string s)
{
	if (s == "nan" || s == "inff" || s == "-inff")
		return true;
	return false;
}

bool	ScalarConverter::convert_char(const std::string s)
{
	std::cout << "char: ";
	char c = s[0];
	std::cout << "'" << c << "'" << std::endl;
	if (!is_char(s))
		return true;
	std::cout << "int: " << static_cast<int>(c) << std::endl;
	std::cout << "float: " << static_cast<float>(c) << ".0f" << std::endl;
	std::cout << "double: " << static_cast<double>(c) << ".0" << std::endl;
	return true;
}

bool 	ScalarConverter::convert_int(const std::string s)
{
	std::stringstream ss(s);
	int i;

	ss >> i;
	if (!is_char(s))
	{
		std::cout << "char: ";
		if (isprint(i))
			std::cout << static_cast<char>(i) << std::endl;
		else
			std::cout << "Non displayable" << std::endl;
	}
	std::cout << "int: ";
	if (!ss.fail())
		std::cout << i << std::endl;
	else
		std::cout << "Non displayable" << std::endl;

	if (is_int(s))
	{
		std::cout << "float: " << static_cast<float>(i) << "f" << std::endl;
		std::cout << "double: " << static_cast<double>(i) << std::endl;
	}
	return true;
}

bool 	ScalarConverter::convert_float(std::string s)
{
	float	f;
	bool	erase = false;
	if (!is_int(s))
		convert_int(s);
	const unsigned long n = s.find('f');
	if (n != std::string::npos)
	{
		s.erase(n);
		erase = true;
	}
	std::stringstream ss(s);
	ss >> f;
	std::cout << "float: ";
	if (!ss.fail())
	{
		std::cout << std::fixed << std::setprecision(1) << f;
		std::cout << "f" << std::endl;
	}
	else
		std::cout << "Non displayable" << std::endl;
	if (erase == true)
		std::cout << "double: " << static_cast<double>(f) << std::endl;
	return true;
}

bool	ScalarConverter::convert_double(std::string s)
{
	double d;
	if (is_double(s))
		convert_float(s);
	const unsigned long n = s.find('f');
	if (n != std::string::npos)
		s.erase(n);

	std::stringstream ss(s);
	ss >> d;
	std::cout << "double: ";
	if (!ss.fail())
	{
		std::cout << std::fixed << std::setprecision(1) << d;
		std::cout << std::endl;
	}
	else
		std::cout << "Non displayable" << std::endl;
	return true;
}

bool		ScalarConverter::convert_inf(const std::string s)
{
	std::cout << "char: impossible" << std::endl;
	std::cout << "int: impossible" << std::endl;
	std::cout << "float: " << s << "f" << std::endl;
	std::cout << "double: " << s << std::endl;
	return true;
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