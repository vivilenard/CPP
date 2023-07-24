#include "MateriaSource.hpp"

MateriaSource::MateriaSource(){ for (int i = 0; i < 4; i++) _inventory[i] = NULL; }
MateriaSource::MateriaSource( MateriaSource const & copy ){ *this = copy; }
MateriaSource::~MateriaSource(){ for(int i = 0; i < 4; i++) delete _inventory[i]; }

void MateriaSource::learnMateria(AMateria *tmp)
{
    for (int i = 0; i < 4; i++)
    {
        if (!_inventory[i])
        {
            _inventory[i] = tmp;
            return ;
        }
    }
}

AMateria* MateriaSource::createMateria(std::string const & type)
{
    for (int i = 0; i < 4; i++)
    {
        if (_inventory[i] && _inventory[i]->getType() == type)
            return (this->_inventory[i]->clone());
    }
    return (NULL);
}

MateriaSource & MateriaSource::operator=(MateriaSource const & rhs)
{
    for (int i = 0; i < 4; i++)
    {
        if (_inventory[i]) 
        {
            delete _inventory[i];
            _inventory[i] = rhs._inventory[i]->clone();
        }
        else 
            _inventory[i] = NULL;
    }
    return *this;
}
