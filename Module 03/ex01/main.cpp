#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main( void ) {
	ClapTrap clapTrap("Iñigo");
	ScavTrap scavTrap("Juan");
	clapTrap.attack(scavTrap.getName());
	scavTrap.takeDamage(clapTrap.getAttackDamage());
	scavTrap.attack(clapTrap.getName());
	clapTrap.takeDamage(scavTrap.getAttackDamage());
	scavTrap.guardGate();
	return 0;
}