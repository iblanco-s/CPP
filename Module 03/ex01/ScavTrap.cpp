#include "ScavTrap.hpp"

ScavTrap::ScavTrap() : ClapTrap() {
	this->setName("Default");
	this->setHitPoints(100);
	this->setEnergyPoints(50);
	this->setAttackDamage(20);
	std::cout << "ScavTrap " << this->getName() << " constructor called" << std::endl;
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name) {
	this->setHitPoints(100);
	this->setEnergyPoints(50);
	this->setAttackDamage(20);
	std::cout << "ScavTrap " << this->getName() << " constructor called" << std::endl;
}

ScavTrap::~ScavTrap() {
	std::cout << "ScavTrap " << this->getName() << " destructor called" << std::endl;	
}

void ScavTrap::attack(const std::string& target) {
	if (this->getEnergyPoints() > 0) {
		std::cout << "ScavTrap " << this->getName() << " attacks " << target << ", causing " << this->getAttackDamage() << " points of damage!" << std::endl;
		this->setEnergyPoints(this->getEnergyPoints() - 1);
	} else {
		std::cout << "ScavTrap " << this->getName() << " has no energy points left!" << std::endl;
	}
}

void ScavTrap::guardGate() {
	std::cout << "ScavTrap " << this->getName() << " is now in Gate keeper mode." << std::endl;
}
