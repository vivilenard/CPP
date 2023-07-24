#include "FragTrap.hpp"

FragTrap::~FragTrap()
{
	std::cout << "FragTrap " << this->_name << " gets destructed" << std::endl;
}

FragTrap::FragTrap() : ClapTrap()
{
	_hitPoints = 100;
	_energyPoints = 100;
	_attackDamage = 30;
	std::cout << "FragTrap " << this->_name << " arises" << std::endl;
}

FragTrap::FragTrap(std::string name) : ClapTrap(name)
{
	_hitPoints = 100;
	_energyPoints = 100;
	_attackDamage = 30;
	std::cout << "FragTrap " << this->_name << " arises" << std::endl;
}

FragTrap::FragTrap(FragTrap const & copy) : ClapTrap(copy)
{
	*this = copy;
}

void FragTrap::attack(const std::string& target)
{
	if (!this->_energyPoints)
		std::cout << "FragTrap " << this->_name << " is too weak to attack.." << std::endl;
	if (!this->_hitPoints)
		std::cout << this->_name << " FragTrap " << " has no hit points left for an attack.." << std::endl;
	if (this->_energyPoints && this->_hitPoints)
	{
		std::cout << this->_name << " FragTrap" << " attacks " << target << " causing " << _attackDamage << " points of damage" << std::endl;
		this->_energyPoints--;
	}
}

void FragTrap::highFivesGuys()
{
	std::cout << "Heyy lets high five <3 " << std::endl;
}
