#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm() : AForm()
{
	if (PRINT)
		std::cout << "ShrubberyCreationForm Constructor called" << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm( const std::string target )
	: AForm("ShrubberyCreationForm", false, 145, 137), _target(target)
{
	if (PRINT)
		std::cout << "ShrubberyCreationForm Constructor called" << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm( const ShrubberyCreationForm &cpy ) : AForm( cpy )
{
	this->_target = cpy._target;
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
	if (PRINT)
		std::cout << "ShrubberyCreationForm Deconstructor called" << std::endl;
}

void ShrubberyCreationForm::execute( Bureaucrat const & executor ) const
{
	if (this->getSigned() == false)
	{
		std::cout << MAGENTA << "Executing of " << this->getName() << " not possible. It hasn't been signed" << RESET << std::endl;
		throw(FormNotSignedException());
	}
	if (executor.getGrade() > this->getExec())
	{
		std::cout << MAGENTA << "Executing of " << this->getName()
			<< " not possible. The Grade of " << executor.getName() << " is too low" << RESET << std::endl;
		throw(GradeTooLowException());
	}
	std::string filename = _target + "_shrubbery";
	std::ofstream outfile(filename.c_str());
	outfile << "		/ \\"		<< std::endl;
	outfile << "	   /   \\"		<< std::endl;
	outfile << "	  /     \\"		<< std::endl;
	outfile << "	 /		 \\"	<< std::endl;
	outfile << "	 \\		 /"		<< std::endl;
	outfile << "	  \\     /"		<< std::endl;
	outfile << "		| |"		<< std::endl;
	outfile << "		| |"		<< std::endl;
	outfile << "		| |					 ?????		  <o> "<< std::endl;
	outfile << "		| |	   < ____	    ????????	   |"		<< std::endl;
	outfile << ",,,,,,,,| |,,,,,|    |,,,,,??????????,,,,,,|,,,,,,,," << std::endl;

	if (outfile.good())
		std::cout << YELLOW << "Ascii Tree successfully created in file ./"
			<< (_target + "_shrubbery") << RESET << std::endl;
	outfile.close();
}

std::string ShrubberyCreationForm::getTarget() const
{
	return (this->_target);
}

ShrubberyCreationForm &ShrubberyCreationForm::operator=(const ShrubberyCreationForm &rhs)
{
	_target = rhs.getTarget();
	return (*this);
}
