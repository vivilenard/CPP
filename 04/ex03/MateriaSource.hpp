#include "IMateriaSource.hpp"

#ifndef MATERIASOURCE_HPP

# define MATERIASOURCE_HPP

class MateriaSource : public IMateriaSource
{
	private:
		AMateria* _inventory[4];

	public:
		MateriaSource();
		MateriaSource(MateriaSource const & copy);
		virtual ~MateriaSource();
		virtual void learnMateria(AMateria* tmp);
		virtual AMateria* createMateria(std::string const & type);

		MateriaSource & operator=(MateriaSource const & rhs);
};


# endif