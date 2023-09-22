#include "ScalarConverter.hpp"

void ScalarConverter::convert(const std::string s)
{
	int	type = detect_type(s);
	std::cout << type << std::endl;
	switch (type)
	{
		case (CHAR):
			//printf("char\n");
			convert_char(s);
			break ;
		case (INT):
			//printf("int\n");
			convert_int(s);
			// break ;
		case (FLOAT):
			convert_float(s); //printf("float\n");
		case (DOUBLE):
			convert_double(s); //printf("double\n");
	}

}

int	ScalarConverter::detect_type(const std::string s)
{ //-inf, +inf, nan
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
	if (s.length() != 1)
		return false;
	if (!isdigit(s[0]))
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
	return true;
}

bool 	ScalarConverter::convert_float(std::string s)
{
	float	f;
	if (!is_int(s))
		convert_int(s);
	const unsigned long n = s.find('f');
	if (n != std::string::npos)
		s.erase(n);

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
	return true;
}

bool	ScalarConverter::convert_double(std::string s)
{
	double d;
	const unsigned long n = s.find('f');
	if (n != std::string::npos)
		s.erase(n);
	if (is_double(s))
		convert_float(s);

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