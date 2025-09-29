#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(std::string name): ClapTrap(name + "_clap_name"), ScavTrap(name), FragTrap(name), name(name)
{
	this->hitPoints = FragTrap::hitPoints;
	this->energyPoints = ScavTrap::energyPoints;
	this->attackDamage = FragTrap::attackDamage;
	std::cout << "DiamondTrap " << this->name << " constructed." << std::endl;
}

DiamondTrap::DiamondTrap(const DiamondTrap &o): ClapTrap(o), ScavTrap(o), FragTrap(o), name(o.name)
{
	this->hitPoints = o.hitPoints;
	this->energyPoints = o.energyPoints;
	this->attackDamage = o.attackDamage;
	std::cout << "DiamondTrap " << this->name << " copy constructed." << std::endl;
}

DiamondTrap &DiamondTrap::operator=(const DiamondTrap &o)
{
	if (this != &o)
	{
		this->name = o.name;
		this->hitPoints = o.hitPoints;
		this->energyPoints = o.energyPoints;
		this->attackDamage = o.attackDamage;
	}
	std::cout << "DiamondTrap " << this->name << " assigned." << std::endl;
	return *this;
}

DiamondTrap::~DiamondTrap()
{
	std::cout << "DiamondTrap " << this->name << " destructed." << std::endl;
}

void DiamondTrap::attack(const std::string &target)
{
	ScavTrap::attack(target);
}

void DiamondTrap::whoAmI()
{
	std::cout << "DiamondTrap name: " << this->name << ", ClapTrap name: " << ClapTrap::name << std::endl;
}
