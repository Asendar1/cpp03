#include "FragTrap.hpp"


FragTrap::FragTrap(std::string name) : ClapTrap(name)
{
	this->setHP(100);
	this->setEP(100);
	this->setAD(30);
	std::cout << "FragTrap " << this->getName() << " constructed." << std::endl;
}

FragTrap::~FragTrap()
{
	std::cout << "FragTrap " << this->getName() << " destructed." << std::endl;
}

FragTrap::FragTrap(const FragTrap &o) : ClapTrap(o)
{
	*this = o;
}

FragTrap &FragTrap::operator=(const FragTrap &o)
{
	if (this != &o)
	{
		ClapTrap::operator=(o);
	}
	return *this;
}

void FragTrap::attack(const std::string &target)
{
	if (this->getEP() <= 0 || this->getHP() <= 0)
	{
		std::cout << "FragTrap " << this->getName() << " cannot attack (insufficient energy or hit points)." << std::endl;
		return;
	}
	this->setEP(this->getEP() - 1);
	std::cout << "FragTrap " << this->getName() << " attacks " << target
			  << ", causing " << this->getAD() << " points of damage! "
			  << "(EP left: " << this->getEP() << ")" << std::endl;
}

void FragTrap::highFivesGuys()
{
	std::cout << "FragTrap " << this->getName() << " is requesting a high five!" << std::endl;
}
