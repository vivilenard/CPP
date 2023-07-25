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
		unsigned int		_sign;
		unsigned int		_exec;

	public:
		Form();
		Form(const std::string name, bool _signed, unsigned int _sign, unsigned int _exec);
		Form(const Form & cpy);
		~Form();

		void	beSigned(const Bureaucrat & B);

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
};

std::ostream & operator<<(std::ostream & o, const Form & rhs);

#endif