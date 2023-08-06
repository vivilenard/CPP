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
		//static int	detect_type(const std::string s);
		static bool		string_to_char(const std::string s);
		static bool		string_to_int(const std::string s);
		static bool		string_to_float(const std::string s);
		static bool		string_to_double(const std::string s);
		static bool		is_float_or_double(const std::string s);

	
	public:
		static void	convert(const std::string s);
};

# endif