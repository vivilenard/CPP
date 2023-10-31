#include "RPN.hpp"

int		parse(std::string & s)
{
	if (s.empty())
		return 0;
	if (s.find_first_not_of("0123456789+-*/ /t") != std::string::npos)
		return 0;
	return 1;
}

void	addToStack(std::stack<double> & s, int n)
{
	s.push(n);
}

int		isNumber(char c)
{
	if (isdigit(c))
		return 1;
	else return 0;
}

int		isOperator(char c)
{
	static const char * op = "+-/*";
	if (strchr(op, c))
		return 1;
	return 0;
}

int	operateStack(std::stack<double> & s, char c)
{
	if (s.size() <= 1)
		return 0;
	double val2 = s.top();
	s.pop();
	double val1 = s.top();
	s.pop();
	if (c == '*')
		s.push(val1 * val2);
	else if (c == '/')
		s.push(val1 / val2);
	else if (c == '+')
		s.push(val1 + val2);
	else if (c == '-')
		s.push(val1 - val2);
	return 1;
}

int	RPN(std::string & str)
{
	if (!parse(str))
		return std::cout << "Input Error" << std::endl, 0;
	std::stack<double> s;
	for (size_t i = 0; i < str.size(); i++)
	{
		if (isNumber(str.at(i)))
			addToStack(s, str.at(i) - '0');
		else if (isOperator(str.at(i)))
			if (!operateStack(s, str.at(i)))
				return std::cout << "Wrong Input" << std::endl, 0;
	}
	if (s.size() != 1)
		return std::cout << "You did not enter the right amount of numbers/signs" << std::endl, 0;
	std::cout << s.top() << std::endl;
	return 1;
}
