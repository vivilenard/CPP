#include "ClapTrap.hpp"

ClapTrap::~ClapTrap()
{
	std::cout << this->_name << " gets destructed" << std::endl;
}

ClapTrap::ClapTrap():_name("X"), _hitPoints(10), _energyPoints(10), _attackDamage(0)
{
	std::cout << "A ClapTrap arises" << std::endl;
}

ClapTrap::ClapTrap(std::string name): _name(name), _hitPoints(10), _energyPoints(10), _attackDamage(0)
{
	std::cout << this->_name << " arises" << std::endl;
}

ClapTrap::ClapTrap(ClapTrap const & copy)
{
	std::cout << "A copy of " << copy._name << " gets created" << std::endl;
	*this = copy;
}

void ClapTrap::attack(const std::string& target)
{
	if (!this->_energyPoints)
		std::cout << this->_name << " is too weak to attack.." << std::endl;
	if (!this->_hitPoints)
		std::cout << this->_name << " has no hit points left for an attack.." << std::endl;
	if (this->_energyPoints && this->_hitPoints)
	{
		std::cout << this->_name << " attacks " << target << " causing " << _attackDamage << " points of damage" << std::endl;
		this->_energyPoints--;
	}
}

void ClapTrap::takeDamage(unsigned int amount)
{
	if (this->_hitPoints > amount)
		this->_hitPoints = this->_hitPoints - amount;
	else
		this->_hitPoints = 0;

	std::cout << this->_name << " loses " << amount << " hit points. ";
	std::cout << this->_hitPoints << " are left" << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount)
{
	if (!this->_energyPoints)
	{
		std::cout << this->_name << " has not enough energy to heal." << std::endl;
		return ;
	}
	this->_hitPoints += amount;
	this->_energyPoints--;

	std::cout << this->_name << " gains " << amount << " hit points. " << std::endl;
}

ClapTrap&	ClapTrap::operator=(ClapTrap const & rhs)
{
	std::cout << rhs._name << " gets cloned " << std::endl;

	this->_name = rhs._name;
	this->_hitPoints = rhs._hitPoints;
	this->_energyPoints = rhs._energyPoints;
	this->_attackDamage = rhs._attackDamage;

	return *this;
}

std::ostream & operator<<(std::ostream & o, ClapTrap const & rhs)
{
	o << rhs.getName() << " has " << rhs.getHitPoints() << " hit points and ";
	o << rhs.getEnergyPoints() << " energy points";
	return o;
}

std::string		ClapTrap::getName() const{return _name;}
unsigned int	ClapTrap::getHitPoints() const{return _hitPoints;}
unsigned int	ClapTrap::getEnergyPoints() const{return _energyPoints;}
unsigned int	ClapTrap::getAttackDamage() const{return _attackDamage;}