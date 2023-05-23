#ifndef HARL_HPP
# define HARL_HPP

#include <iostream>
#include <string>
#include <cstdlib>

class Harl
{
	private:
		void		debug( void );
		void		info( void );
		void		warning( void );
		void		error( void );
		std::string	levels[4];
		void		(Harl::*messages[4])(void);
	public:
		Harl();
		~Harl(){};
		void	complain( std::string level );
};

# endif