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
		static int		detect_type(const std::string s);
		static bool		convert_char(const std::string s);
		static bool		convert_int(const std::string s);
		static bool		convert_float(const std::string s);
		static bool		convert_double(const std::string s);
		static bool		convert_inf(const std::string s);
		static bool		is_char(const std::string s);
		static bool		is_int(const std::string s);
		static bool		is_float(const std::string s);
		static bool		is_double(const std::string s);
		static bool		is_inf(std::string s);
		ScalarConverter	operator=(const ScalarConverter & rhs);
		ScalarConverter	();
		ScalarConverter	(const ScalarConverter & cpy);
		~ScalarConverter();

	public:
		static void		convert(const std::string s);
};

enum TYPE{CHAR, INT, FLOAT, DOUBLE, INF, UNKNOWN};

# endif