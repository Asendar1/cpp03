#include "ScavTrap.hpp"

ScavTrap::ScavTrap() : ClapTrap()  // Call base constructor first
{
	std::cout << "ScavTrap default constructor called" << std::endl;
	this->setHP(100);
	this->setEP(50);
	this->setAD(20);
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
	std::cout << "ScavTrap parameterized constructor called for " << name << std::endl;
	this->setHP(100);
	this->setEP(50);
	this->setAD(20);
}

ScavTrap::ScavTrap(const ScavTrap &other) : ClapTrap(other)
{
	std::cout << "ScavTrap copy constructor called for " << this->getName() << std::endl;
	// No need to copy members again, base class copy constructor does it
}

ScavTrap &ScavTrap::operator=(const ScavTrap &other)
{
	if (this != &other)
	{
		setHP(other.getHP());
		setEP(other.getEP());
		setAD(other.getAD());
		setName(other.getName());
		std::cout << "ScavTrap assignment operator called for " << this->getName() << std::endl;
	}
	return *this;
}

ScavTrap::~ScavTrap()
{
	std::cout << "ScavTrap destructor called for " << this->getName() << std::endl;
}

void ScavTrap::attack(const std::string &target)
{
	if (this->getEP() > 0 && this->getHP() > 0)
	{
		this->setEP(this->getEP() - 1);
		std::cout << "ScavTrap " << this->getName() << " attacks " << target
				  << ", causing " << this->getAD() << " points of damage! "
				  << "(EP left: " << this->getEP() << ")" << std::endl;
	}
	else
	{
		std::cout << "ScavTrap " << this->getName()
				  << " cannot attack due to insufficient energy or hit points." << std::endl;
	}
}

void ScavTrap::guardGate()
{
	std::cout << "ScavTrap " << this->getName() << " is now in Gate Keeper mode." << std::endl;
}
