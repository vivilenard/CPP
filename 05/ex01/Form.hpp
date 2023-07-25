# ifndef FORM_HPP
# define FORM_HPP

# define PRINT true

#include <iostream>
#include "Bureaucrat.hpp"

class Form
{
	private:
		const std::string	_name;
		bool				_signed;
		unsigned int		_signGrade;
		unsigned int		_execGrade;

	public:
		Form();
		Form(const std::string name, bool signed_bool, unsigned int signGrade, unsigned int execGrade);
		Form(const Form & cpy);
		~Form();

		bool	beSigned( const Bureaucrat & B );

		//exception overload
		class GradeTooHighException : public std::exception {
			public:
				const char *what() const throw();
		};

		class GradeTooLowException : public std::exception {
			public:
				const char *what() const throw();
		};

		//getters
		const std::string	getName() const;
		bool				getSigned() const;
		unsigned int		getSign() const;
		unsigned int		getExec() const;

		Form & operator= (const Form & rhs);
};

std::ostream & operator<< (std::ostream & o, const Form & rhs);

#endif