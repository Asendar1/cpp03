#include "ClapTrap.hpp"

ClapTrap::ClapTrap() : name("Default"), hitPoints(10), energyPoints(10), attackDamage(0)
{
	std::cout << "ClapTrap " << name << " has been created with default values." << std::endl;
}

ClapTrap::ClapTrap(std::string name) : name(name), hitPoints(10), energyPoints(10), attackDamage(0)
{
	std::cout << "ClapTrap " << name << " has been created." << std::endl;
}

ClapTrap::~ClapTrap()
{
	std::cout << "ClapTrap " << name << " has been destroyed." << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &other)
{
	this->name = other.name;
	this->hitPoints = other.hitPoints;
	this->energyPoints = other.energyPoints;
	this->attackDamage = other.attackDamage;
	std::cout << "ClapTrap " << name << " has been copied." << std::endl;
}

ClapTrap &ClapTrap::operator=(const ClapTrap &other)
{
	if (this != &other)
	{
		this->name = other.name;
		this->hitPoints = other.hitPoints;
		this->energyPoints = other.energyPoints;
		this->attackDamage = other.attackDamage;
	}
	return *this;
}

void ClapTrap::attack(const std::string &target)
{
	if (energyPoints > 0 && hitPoints > 0)
	{
		energyPoints--;
		std::cout << "ClapTrap " << name << " attacks " << target << ", causing " << attackDamage << " points of damage!" << std::endl;
	}
	else
	{
		std::cout << "ClapTrap " << name << " cannot attack due to insufficient energy or hit points." << std::endl;
	}
}

void ClapTrap::takeDamage(unsigned int amount)
{
	hitPoints -= amount;
	if (hitPoints < 0)
		hitPoints = 0;
	std::cout << "ClapTrap " << name << " takes " << amount << " points of damage! Remaining hit points: " << hitPoints << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount)
{
	if (energyPoints > 0 && hitPoints > 0)
	{
		hitPoints += amount;
		energyPoints--;
		std::cout << "ClapTrap " << name << " is repaired by " << amount << " points! Current hit points: " << hitPoints << std::endl;
	}
	else
	{
		std::cout << "ClapTrap " << name << " cannot be repaired due to insufficient energy or hit points." << std::endl;
	}
}

void ClapTrap::setHP(int hp) {
	hitPoints = hp;
}

int ClapTrap::getHP() const {
	return hitPoints;
}

void ClapTrap::setEP(int ep) {
	energyPoints = ep;
}

int ClapTrap::getEP() const {
	return energyPoints;
}

void ClapTrap::setAD(int ad) {
	attackDamage = ad;
}

int ClapTrap::getAD() const {
	return attackDamage;
}

std::string ClapTrap::getName() const {
	return name;
}

void ClapTrap::setName(std::string name) {
	this->name = name;
}
