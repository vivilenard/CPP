#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm() : AForm()
{
	if (PRINT)
		std::cout << "RobotomyRequestForm Constructor called" << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm( const std::string target )
	: AForm("RobotomyRequestForm", false, 25, 5), _target(target)
{
	if (PRINT)
		std::cout << "RobotomyRequestForm Constructor called" << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm( const RobotomyRequestForm &cpy ) : AForm( cpy )
{
	this->_target = cpy._target;
}

RobotomyRequestForm::~RobotomyRequestForm()
{
	if (PRINT)
		std::cout << "RobotomyRequestForm Deconstructor called" << std::endl;
}

void RobotomyRequestForm::execute( Bureaucrat const & executor ) const
{
	if (this->getSigned() == false)
	{
		std::cout << MAGENTA << "Executing of " << this->getName() << " not possible. It hasn't been signed" << RESET << std::endl;
		std::cout << MAGENTA << "The Robotomy has failed" << RESET << std::endl;
		throw(FormNotSignedException());
		//return ;
	}
	if (executor.getGrade() > this->getExec())
	{
		std::cout << MAGENTA << "Executing of " << this->getName()
			<< " not possible. The Grade of " << executor.getName() << " is too low" << RESET << std::endl;
		std::cout << MAGENTA << "The Robotomy has failed" << RESET << std::endl;
		throw(GradeTooLowException());
	}
	system("say brrrr");
	std::cout << YELLOW << "Target has been robotomized successfully 50% of the time." << RESET << std::endl;
}

std::string RobotomyRequestForm::getTarget() const
{
	return (this->_target);
}

RobotomyRequestForm &RobotomyRequestForm::operator=(const RobotomyRequestForm &rhs)
{
	_target = rhs.getTarget();
	return (*this);
}
