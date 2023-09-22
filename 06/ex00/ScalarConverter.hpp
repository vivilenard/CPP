# ifndef SCALARCONVERTER_HPP
# define SCALARCONVERTER_HPP

# define PRINT true

#include <iostream>
#include <string>
#include <sstream>
#include <iomanip>

class ScalarConverter
{
	private:
		ScalarConverter operator=(const ScalarConverter & rhs);
		static int		detect_type(const std::string s);
		static bool		convert_char(const std::string s);
		static bool		convert_int(const std::string s);
		static bool		convert_float(const std::string s);
		static bool		convert_double(const std::string s);
		static bool		is_float_or_double(const std::string s);
		static bool		is_char(const std::string s);
		static bool		is_int(const std::string s);
		static bool		is_float(const std::string s);
		static bool		is_double(const std::string s);

	public:
		ScalarConverter();
		ScalarConverter(const ScalarConverter & cpy);
		~ScalarConverter();
	
		static void	convert(const std::string s);
};

enum TYPE{CHAR = 1, INT = 2, FLOAT = 3, DOUBLE = 4};

# endif