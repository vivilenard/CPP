# ifndef PRESIDENTIALPARDONFORM_HPP
# define PRESIDENTIALPARDONFORM_HPP

#include "AForm.hpp"

class PresidentialPardonForm : public AForm
{
	private:
		std::string _target;

	public:
		PresidentialPardonForm();
		PresidentialPardonForm( std::string target );
		PresidentialPardonForm( const PresidentialPardonForm & cpy );
		~PresidentialPardonForm();

		void	execute( Bureaucrat const & executor ) const;

		std::string getTarget() const;

		PresidentialPardonForm & operator= ( const PresidentialPardonForm & rhs );
};

#endif