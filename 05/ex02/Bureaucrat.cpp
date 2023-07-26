#include "AForm.hpp"

Bureaucrat::Bureaucrat(): _name("unknown"), _grade(100)
{
	if (PRINT)
		std::cout << "Bureaucrat default constructor called" << std::endl;
}

Bureaucrat::Bureaucrat( std::string const name, unsigned int grade ): _name(name), _grade(grade)
{
	if (PRINT)
		std::cout << *this << ", constructor called" << std::endl;
	if (_grade < 1)
	{
		_grade = 100;
		throw (Bureaucrat::GradeTooHighException());
	}
	if (_grade > 150)
	{
		_grade = 100;
		throw (Bureaucrat::GradeTooLowException());
	}
}

Bureaucrat::Bureaucrat( Bureaucrat & cpy ) : _name(cpy._name), _grade(cpy._grade)
{
	if (PRINT)
		std::cout << *this << ", copy constructor called" << std::endl;
}

Bureaucrat::~Bureaucrat()
{
	if (PRINT)
		std::cout << "Bureaucrat " << this->_name << " deconstructor called" << std::endl;
}

void	Bureaucrat::incrementGrade()
{
	if (this->_grade <= 1)
		throw (Bureaucrat::GradeTooHighException()); 
	else
	{
		this->_grade--;
		std::cout << *this << ", incremented Grade" << std::endl;
	}
}

void	Bureaucrat::decrementGrade()
{
	if (this->_grade >= 150)
		throw (Bureaucrat::GradeTooLowException());
	else
	{
		this->_grade++;
		std::cout << *this << ", decremented Grade" << std::endl;
	}
}

void	Bureaucrat::signAForm ( AForm & F )
{
	try {
		F.beSigned(*this);
		std::cout << GREEN << this->_name << " signed Form " << F.getName() << RESET << std::endl;
	}
	catch ( std::exception & e )
	{
		std::cout << MAGENTA << this->_name << " couldn't sign Form " << F.getName() << " because the grade is too low" << RESET << std::endl;
	}
}

//getters

std::string	const Bureaucrat::getName() const
{
	return (this->_name);
}

unsigned int	Bureaucrat::getGrade() const
{
	return (this->_grade);
}

//exception overload

const char *Bureaucrat::GradeTooHighException::what() const throw()
{
	return ("Grade is too high!");
}


const char *Bureaucrat::GradeTooLowException::what() const throw()
{
	return ("Grade is too low!");
}

//operator overload

std::ostream & operator<< (std::ostream & o, Bureaucrat const & rhs)
{
	std::cout << "Bureaucrat " << rhs.getName() << ", grade " << rhs.getGrade();
	return (o);
}

Bureaucrat & Bureaucrat::operator= (Bureaucrat const & rhs)
{
	this->_grade = rhs.getGrade();
	return (*this);
}