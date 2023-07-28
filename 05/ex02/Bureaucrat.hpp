# ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# define PRINT true

# define BLUE "\033[4;34m"
# define MAGENTA "\033[1;35m"
# define CYAN "\033[1;36m"
# define GREEN "\033[1;32m"
# define RED "\033[1;31m"
# define YELLOW "\033[1;33m"
# define RESET "\033[1;0m"

#include <iostream>
#include <fstream>
#include <iomanip>
#include <cstdlib>

class AForm;

class Bureaucrat
{
	private:
		std::string	const	_name;
		unsigned int		_grade;

	public:
		Bureaucrat();
		Bureaucrat( std::string const name, unsigned int grade );
		Bureaucrat( Bureaucrat & cpy );
		~Bureaucrat();

		void	incrementGrade();
		void	decrementGrade();
		void	signForm( AForm & form );
		void	executeForm(AForm const & form);

		std::string const	getName() const;
		unsigned int		getGrade() const;

		class	GradeTooHighException : public std::exception {
			public:
				const char* what() const throw();
		};

		class	GradeTooLowException : public std::exception {
			public:
				const char* what() const throw();
		};

	Bureaucrat & operator= (Bureaucrat const & rhs);
};

std::ostream & operator<< (std::ostream & o, Bureaucrat const & rhs);

#endif