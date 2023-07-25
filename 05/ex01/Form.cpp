#include "Form.hpp"

Form::Form() : _name("unknown"), _signed(false), _signGrade(100), _execGrade(100)
{
	if (PRINT)
		std::cout << "Form Constructor called" << std::endl;
}

Form::Form(const std::string name, bool signed_bool, unsigned int signGrade, unsigned int execGrade)
: _name(name), _signed(signed_bool), _signGrade(signGrade), _execGrade(execGrade)
{
	if (PRINT)
		std::cout << "Form Constructor called" << std::endl;
	if (signGrade < 1 || execGrade < 1)
		throw(GradeTooHighException());
	if (signGrade > 150 || execGrade > 150)
		throw(GradeTooLowException());
}

Form::Form(const Form & cpy)
{
	*this = cpy;
	if (PRINT)
		std::cout << "Form Copy Constructor called" << std::endl;
}

Form::~Form()
{
	if (PRINT)
		std::cout << "Form Deconstructor called" << std::endl;
}

bool	Form::beSigned( const Bureaucrat & B )
{
	if (B.getGrade() <= this->_signGrade)
	{
		this->_signed = true;
		if (PRINT)
			std::cout << BLUE << "\t" <<this->getName() << " got signed" << RESET <<std::endl;
		return (true);
	}
	else
	{
		if (PRINT)
			std::cout << BLUE << "\t" <<this->getName() << " didn't get signed" << RESET <<std::endl;
		throw (GradeTooLowException());
	}
	return (false);
}

//exception overload
const char	*Form::GradeTooHighException::what() const throw()
{
	return ("Grade is too high");
}

const char	*Form::GradeTooLowException::what() const throw()
{
	return ("Grade is too low");
}

//getters
const std::string	Form::getName() const { return _name; }
bool				Form::getSigned() const { return _signed; }
unsigned int		Form::getSign() const { return _signGrade; }
unsigned int		Form::getExec() const { return _execGrade; }

//operators
std::ostream & operator<< (std::ostream & o, const Form & rhs)
{
	std::cout << CYAN << "\tForm " << rhs.getName() << std::endl;
	std::cout << "\tSigned: " << rhs.getSigned() << std::endl;
	std::cout << "\tSign Grade: " << rhs.getSign() << std::endl;
	std::cout << "\tExecute Grade: " << rhs.getExec() << RESET;
	return (o);
}
Form & Form::operator= (const Form & rhs)
{
	this->_signed = rhs.getSigned();
	this->_signGrade = rhs.getSign();
	this->_execGrade = rhs.getExec();

	if (PRINT)
		std::cout << "Form Copy Assignment Operator called" << std::endl;
	return (*this);
}
