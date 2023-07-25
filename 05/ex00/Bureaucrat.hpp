# ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# define PRINT true

#include <iostream>

class Bureaucrat
{
	private:
		std::string	const	_name;
		unsigned int		_grade;

	public:
		Bureaucrat();
		Bureaucrat( std::string const name, unsigned int grade );
		Bureaucrat( Bureaucrat & cpy);
		~Bureaucrat();

		void	incrementGrade();
		void	decrementGrade();

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