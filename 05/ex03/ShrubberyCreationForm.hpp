# ifndef ShrubberyCreationForm_HPP
# define ShrubberyCreationForm_HPP

#include "AForm.hpp"

class ShrubberyCreationForm : public AForm
{
	private:
		std::string _target;

	public:
		ShrubberyCreationForm();
		ShrubberyCreationForm( std::string target );
		ShrubberyCreationForm( const ShrubberyCreationForm & cpy );
		~ShrubberyCreationForm();

		void	execute( Bureaucrat const & executor ) const;

		std::string getTarget() const;

		ShrubberyCreationForm & operator= ( const ShrubberyCreationForm & rhs );
};

#endif