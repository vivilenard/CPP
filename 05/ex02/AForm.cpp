#include "AForm.hpp"

AForm::AForm() : _name("unknown"), _signed(false), _signGrade(100), _execGrade(100)
{
	if (PRINT)
		std::cout << "AForm Constructor called" << std::endl;
}

AForm::AForm(const std::string name, bool signed_bool, unsigned int signGrade, unsigned int execGrade)
: _name(name), _signed(signed_bool), _signGrade(signGrade), _execGrade(execGrade)
{
	if (PRINT)
		std::cout << "AForm Constructor called" << std::endl;
	if (signGrade < 1 || execGrade < 1)
		throw(GradeTooHighException());
	if (signGrade > 150 || execGrade > 150)
		throw(GradeTooLowException());
}

AForm::AForm(const AForm & cpy) : _name(cpy.getName()), _signed(cpy.getSigned()),
	_signGrade(cpy.getSign()), _execGrade(cpy.getExec())
{
	if (PRINT)
		std::cout << "AForm Copy Constructor called" << std::endl;
}

AForm::~AForm()
{
	if (PRINT)
		std::cout << "AForm Deconstructor called" << std::endl;
}

bool	AForm::beSigned( const Bureaucrat & B )
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
const char	*AForm::GradeTooHighException::what() const throw()
{
	return ("Grade is too high");
}

const char	*AForm::GradeTooLowException::what() const throw()
{
	return ("Grade is too low");
}

//getters
const std::string	AForm::getName() const { return _name; }
bool				AForm::getSigned() const { return _signed; }
unsigned int		AForm::getSign() const { return _signGrade; }
unsigned int		AForm::getExec() const { return _execGrade; }

//operators
std::ostream & operator<< (std::ostream & o, const AForm & rhs)
{
	std::cout << CYAN << "\tAForm " << rhs.getName() << std::endl;
	std::cout << "\tSigned: " << rhs.getSigned() << std::endl;
	std::cout << "\tSign Grade: " << rhs.getSign() << std::endl;
	std::cout << "\tExecute Grade: " << rhs.getExec() << RESET;
	return (o);
}
AForm & AForm::operator= (const AForm & rhs)
{
	this->_signed = rhs.getSigned();

	if (PRINT)
		std::cout << "AForm Copy Assignment Operator called" << std::endl;
	return (*this);
}
