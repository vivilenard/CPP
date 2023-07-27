#include "Intern.hpp"


Intern::Intern()
{
	if (PRINT)
		std::cout << "Intern Constructor called" << std::endl;
}

Intern::Intern(const Intern &cpy)
{
	if (PRINT)
		std::cout << "Intern Copy Constructor called" << std::endl;
	*this = cpy;
}

Intern::~Intern()
{
	if (PRINT)
		std::cout << "Intern Deconstructor called" << std::endl;
}

AForm *Intern::makeForm(const std::string form, const std::string target) const
{
	int	i = 0;
	AForm *AF = NULL;
	std::string Forms[3] = {"presidential pardon", "robotomy request", "shrubbery creation"};

	while (Forms[i].compare(form) != 0 && i < 3)
		i++;

	switch (i)
	{
		case 0:
			AF = new PresidentialPardonForm(target);
			break;
		case 1:
			AF = new RobotomyRequestForm(target);
			break;
		case 2:
			AF = new ShrubberyCreationForm(target);
			break;
		default:
			std::cout << MAGENTA << target << " does not exist as a form !" << RESET << std::endl;
			delete AF;
			return NULL;
	}
	std::cout << GREEN << "Intern created the " << form << " form successfully !" << RESET << std::endl;
	return (AF);
}

Intern &Intern::operator=(const Intern &rhs)
{
	if (PRINT)
		std::cout << "Intern Copy Assignment Operator called" << std::endl;
	if (this != &rhs)
		*this = rhs;
	return (*this);
}
