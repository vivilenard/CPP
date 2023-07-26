#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm() : AForm()
{
	if (PRINT)
		std::cout << "PresidentialPardonForm Constructor called" << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm( const std::string target )
	: AForm("PresidentialPardonForm", false, 25, 5), _target(target)
{
	if (PRINT)
		std::cout << "PresidentialPardonForm Constructor called" << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm( const PresidentialPardonForm &cpy ) : AForm( cpy )
{
	this->_target = cpy._target;
}

PresidentialPardonForm::~PresidentialPardonForm()
{
	if (PRINT)
		std::cout << "PresidentialPardonForm Deconstructor called" << std::endl;
}

void PresidentialPardonForm::execute( Bureaucrat const & executor ) const
{
	if (this->getSigned() == false)
	{
		std::cout << MAGENTA << "Executing of " << this->getName() << " not possible. It hasn't been signed" << RESET << std::endl;
		throw(FormNotSignedException());
		return ;
	}
	if (executor.getGrade() <= this->getExec())
		std::cout << GREEN << _target << " has been pardoned by Zaphod Beeblebrox" << RESET << std::endl;
	else
	{
		std::cout << MAGENTA << "Executing of " << this->getName()
			<< " not possible. The Grade of " << executor.getName() << " is too low" << RESET << std::endl;
		throw(GradeTooLowException());
	}
}

std::string PresidentialPardonForm::getTarget() const
{
	return (this->_target);
}

PresidentialPardonForm &PresidentialPardonForm::operator=(const PresidentialPardonForm &rhs)
{
	_target = rhs.getTarget();
	return (*this);
}
