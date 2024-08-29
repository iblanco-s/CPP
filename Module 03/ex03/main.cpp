#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include "DiamondTrap.hpp"

int main( void ) {
	ClapTrap clapTrap("Iñigo");
	ScavTrap scavTrap("Juan");
	FragTrap fragTrap("Pedro");
	DiamondTrap diamondTrap("Diamond");
	clapTrap.attack(scavTrap.getName());
	scavTrap.takeDamage(clapTrap.getAttackDamage());
	scavTrap.attack(clapTrap.getName());
	clapTrap.takeDamage(scavTrap.getAttackDamage());
	fragTrap.attack(scavTrap.getName());
	scavTrap.takeDamage(fragTrap.getAttackDamage());
	diamondTrap.attack(scavTrap.getName());
	scavTrap.takeDamage(diamondTrap.getAttackDamage());
	scavTrap.guardGate();
	fragTrap.highFivesGuys();
	diamondTrap.whoAmI();
	return 0;
}