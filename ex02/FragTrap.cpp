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

void FragTrap::highFivesGuys()
{
	std::cout << "FragTrap " << this->getName() << " is requesting a high five!" << std::endl;
}
