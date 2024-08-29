#include "FragTrap.hpp"

FragTrap::FragTrap() : ClapTrap() {
	this->setName("Default");
	this->setHitPoints(100);
	this->setEnergyPoints(100);
	this->setAttackDamage(30);
	std::cout << "FragTrap " << this->getName() << " constructor called" << std::endl;
}

FragTrap::FragTrap(std::string name) : ClapTrap(name) {
	this->setHitPoints(100);
	this->setEnergyPoints(100);
	this->setAttackDamage(30);
	std::cout << "FragTrap " << this->getName() << " constructor called" << std::endl;
}

FragTrap::~FragTrap() {
	std::cout << "FragTrap " << this->getName() << " destructor called" << std::endl;	
}

void FragTrap::attack(const std::string& target) {
	if (this->getEnergyPoints() > 0) {
		std::cout << "FragTrap " << this->getName() << " attacks " << target << ", causing " << this->getAttackDamage() << " points of damage!" << std::endl;
		this->setEnergyPoints(this->getEnergyPoints() - 1);
	} else {
		std::cout << "FragTrap " << this->getName() << " has no energy points left!" << std::endl;
	}
}

void FragTrap::highFivesGuys() {
	std::cout << "FragTrap " << this->getName() << " high fives anyone?" << std::endl;
}
