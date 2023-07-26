# ifndef AFORM_HPP
# define AFORM_HPP

# define PRINT true

#include <iostream>
#include "Bureaucrat.hpp"

class AForm
{
	private:
		const std::string		_name;
		bool					_signed;
		const unsigned int		_signGrade;
		const unsigned int		_execGrade;

	public:
		AForm();
		AForm( const std::string name, bool signed_bool, unsigned int signGrade, unsigned int execGrade );
		AForm( const AForm & cpy );
		~AForm();

		virtual bool	beSigned( const Bureaucrat & B ) = 0;

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

		AForm & operator= (const AForm & rhs);
};

std::ostream & operator<< (std::ostream & o, const AForm & rhs);

#endif