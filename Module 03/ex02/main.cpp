#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main( void ) {
	ClapTrap clapTrap("Iñigo");
	ScavTrap scavTrap("Juan");
	FragTrap fragTrap("Pedro");
	clapTrap.attack(scavTrap.getName());
	scavTrap.takeDamage(clapTrap.getAttackDamage());
	scavTrap.attack(clapTrap.getName());
	clapTrap.takeDamage(scavTrap.getAttackDamage());
	fragTrap.attack(scavTrap.getName());
	scavTrap.takeDamage(fragTrap.getAttackDamage());
	scavTrap.guardGate();
	fragTrap.highFivesGuys();
	return 0;
}