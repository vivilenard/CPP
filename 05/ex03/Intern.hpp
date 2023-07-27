# ifndef INTERN_HPP
# define INTERN_HPP

#include "PresidentialPardonForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"

class Intern
{
	public:
		Intern();
		Intern( const Intern & cpy );
		~Intern();

		AForm	*makeForm( const std::string form, const std::string target ) const;

		Intern & operator= ( const Intern & rhs );
};

#endif