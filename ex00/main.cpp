#include <iostream>
#include "ClapTrap.hpp"

int main()
{
	std::cout << "=== ClapTrap Demo ===" << std::endl << std::endl;

	// Test default constructor
	std::cout << "1. Creating ClapTrap with default constructor:" << std::endl;
	ClapTrap defaultBot;
	std::cout << std::endl;

	// Test parameterized constructor
	std::cout << "2. Creating ClapTraps with names:" << std::endl;
	ClapTrap alice("Alice");
	ClapTrap bob("Bob");
	std::cout << std::endl;

	// Test copy constructor
	std::cout << "3. Creating ClapTrap using copy constructor:" << std::endl;
	ClapTrap aliceCopy(alice);
	std::cout << std::endl;

	// Test assignment operator
	std::cout << "4. Testing assignment operator:" << std::endl;
	ClapTrap assigned;
	assigned = bob;
	std::cout << std::endl;

	// Test attack functionality
	std::cout << "5. Testing attack functionality:" << std::endl;
	alice.attack("Bob");
	bob.attack("Alice");
	std::cout << std::endl;

	// Test takeDamage functionality
	std::cout << "6. Testing takeDamage functionality:" << std::endl;
	alice.takeDamage(3);
	bob.takeDamage(5);
	std::cout << std::endl;

	// Test beRepaired functionality
	std::cout << "7. Testing beRepaired functionality:" << std::endl;
	alice.beRepaired(2);
	bob.beRepaired(4);
	std::cout << std::endl;

	// Test energy depletion
	std::cout << "8. Testing energy depletion (attacking until no energy left):" << std::endl;
	for (int i = 0; i < 12; i++)
	{
		std::cout << "Attack " << (i + 1) << ": ";
		alice.attack("Training Dummy");
	}
	std::cout << std::endl;

	// Test repair when no energy
	std::cout << "9. Testing repair when no energy:" << std::endl;
	alice.beRepaired(5);
	std::cout << std::endl;

	// Test what happens when hit points reach 0
	std::cout << "10. Testing behavior when hit points reach 0:" << std::endl;
	bob.takeDamage(20); // Should reduce to 0
	bob.attack("Alice");
	bob.beRepaired(3);
	std::cout << std::endl;

	std::cout << "=== End of Demo ===" << std::endl;

	return 0;
}
