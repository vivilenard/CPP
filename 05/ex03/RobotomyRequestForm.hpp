# ifndef RobotomyRequestForm_HPP
# define RobotomyRequestForm_HPP

#include "AForm.hpp"

class RobotomyRequestForm : public AForm
{
	private:
		std::string _target;

	public:
		RobotomyRequestForm();
		RobotomyRequestForm( std::string target );
		RobotomyRequestForm( const RobotomyRequestForm & cpy );
		~RobotomyRequestForm();

		void	execute( Bureaucrat const & executor ) const;

		std::string getTarget() const;

		RobotomyRequestForm & operator= ( const RobotomyRequestForm & rhs );
};

#endif