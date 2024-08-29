#include "ClapTrap.hpp"

int main( void ) {
	ClapTrap clapTrap("Iñigo");
	clapTrap.attack("Juan");
	clapTrap.takeDamage(5);
	clapTrap.beRepaired(5);
	clapTrap.takeDamage(10);
	return 0;
}