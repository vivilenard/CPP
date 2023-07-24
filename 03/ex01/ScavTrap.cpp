#include "ScavTrap.hpp"

ScavTrap::~ScavTrap()
{
	std::cout << "ScavTrap " << this->_name << " gets destructed" << std::endl;
}

ScavTrap::ScavTrap() : ClapTrap()
{
	_hitPoints = 100;
	_energyPoints = 50;
	_attackDamage = 20;
	std::cout << "ScavTrap arises" << std::endl;
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
	_hitPoints = 100;
	_energyPoints = 50;
	_attackDamage = 20;
	std::cout << "ScavTrap " << this->_name << " arises" << std::endl;
}

ScavTrap::ScavTrap(ScavTrap const & copy) : ClapTrap(copy)
{
	*this = copy;
}

void ScavTrap::attack(const std::string& target)
{
	if (!this->_energyPoints)
		std::cout << "ScavTrap " << this->_name << " is too weak to attack.." << std::endl;
	if (!this->_hitPoints)
		std::cout << this->_name << " ScavTrap " << " has no hit points left for an attack.." << std::endl;
	if (this->_energyPoints && this->_hitPoints)
	{
		std::cout << this->_name << " ScavTrap" << " attacks " << target << " causing " << _attackDamage << " points of damage" << std::endl;
		this->_energyPoints--;
	}
}

void ScavTrap::guardGate()
{
	std::cout << "Team ScavTrap is now in gate keeper mode! " << std::endl;
}
