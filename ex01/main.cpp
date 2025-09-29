#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int	main( void )
{
	ScavTrap	a("scav");

	for (int i = 0; i < 51; i++)
		a.attack("abo alshabab");
	a.guardGate();

	a.beRepaired(2);
	a.takeDamage(2);

	return (0);
}
