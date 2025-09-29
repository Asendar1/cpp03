#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <iostream>

class ClapTrap
{
	private:
		std::string name;
		int hitPoints;
		int energyPoints;
		int attackDamage;
	public:
		ClapTrap();
		ClapTrap(std::string name);
		ClapTrap(const ClapTrap &other);
		ClapTrap &operator=(const ClapTrap &other);
		virtual ~ClapTrap();
		virtual void attack(const std::string &target);
		void takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount);
		void setHP(int hp);
		int getHP() const;
		void setEP(int ep);
		int getEP() const;
		void setAD(int ad);
		int getAD() const;
		std::string getName() const;
		void setName(std::string name);
};

#endif
