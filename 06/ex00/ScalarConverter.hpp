# ifndef SCALARCONVERTER_HPP
# define SCALARCONVERTER_HPP

# define PRINT true

#include <iostream>
#include <string.h>

class ScalarConverter
{
	private:
		ScalarConverter();
		ScalarConverter(const ScalarConverter & cpy);
		~ScalarConverter();
	
		ScalarConverter operator=(const ScalarConverter & rhs);

	public:
		static void	convert(const std::string s);
};

# endif