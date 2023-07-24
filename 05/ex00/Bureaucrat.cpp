#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(): _name("unknown"), _grade(100)
{
	std::cout << "Bureaucrat default constructor called" << std::endl;
}

Bureaucrat::Bureaucrat( std::string const name, unsigned int grade ): _name(name), _grade(grade)
{
}

Bureaucrat::Bureaucrat( Bureaucrat & cpy ) : _name(cpy._name), _grade(cpy._grade)
{
}

Bureaucrat::~Bureaucrat()
{
	std::cout << "Bureaucrat deconstructor called" << std::endl;
}

void	Bureaucrat::incrementGrade()
{
	if (this->_grade <= 1)
		throw (Bureaucrat::GradeTooHighException()); 
	else
		this->_grade--;
}

void	Bureaucrat::decrementGrade()
{
	if (this->_grade >= 150)
		throw (Bureaucrat::GradeTooLowException());
	else
		this->_grade++;
}

//getters

std::string	const & Bureaucrat::getName()
{
	return (this->_name);
}

unsigned int	Bureaucrat::getGrade()
{
	return (this->_grade);
}

//exception overload

const char *Bureaucrat::GradeTooHighException::what() const throw()
{
	return ("Grade is too high\n");
}


const char *Bureaucrat::GradeTooLowException::what() const throw()
{
	return ("Grade is too low\n");
}