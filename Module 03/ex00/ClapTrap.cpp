/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iblanco- <iblanco-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/03 16:49:19 by iblanco-          #+#    #+#             */
/*   Updated: 2024/09/03 16:49:20 by iblanco-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap() : _name("Default"), _hitPoints(10), _energyPoints(10), _attackDamage(0) {
	std::cout << "ClapTrap default constructor called" << std::endl;
}

ClapTrap::ClapTrap(std::string name) : _name(name), _hitPoints(10), _energyPoints(10), _attackDamage(0) {
	std::cout << "ClapTrap " << this->_name << " constructor called" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &other) {
	std::cout << "ClapTrap " << this->_name << " copy constructor called" << std::endl;
	*this = other;
}

ClapTrap &ClapTrap::operator=(const ClapTrap &other) {
	std::cout << "ClapTrap " << this->_name << " copy assignment operator called" << std::endl;
	this->_name = other._name;
	this->_hitPoints = other._hitPoints;
	this->_energyPoints = other._energyPoints;
	this->_attackDamage = other._attackDamage;
	return *this;
}

ClapTrap::~ClapTrap() {
	std::cout << "ClapTrap " << this->_name << " destructor called" << std::endl;	
}

void ClapTrap::attack(const std::string& target) {
	if (this->_energyPoints > 0) {
		std::cout << "ClapTrap " << this->_name << " attacks " << target << ", causing " << this->_attackDamage << " points of damage!" << std::endl;
		this->_energyPoints -= 1;
	} else {
		std::cout << "ClapTrap " << this->_name << " has no energy points left!" << std::endl;
	}
}

void ClapTrap::takeDamage(unsigned int amount) {
	if (this->_hitPoints > 0) {
		this->_hitPoints -= amount;
		std::cout << "ClapTrap " << this->_name << " takes " << amount << " points of damage! " << this->_hitPoints << " hit points left." << std::endl;
	}
	if (this->_hitPoints <= 0) {
		std::cout << "ClapTrap " << this->_name << " is dead!" << std::endl;
	}
}

void ClapTrap::beRepaired(unsigned int amount) {
	if (this->_energyPoints > 0) {
		this->_hitPoints += amount;
		std::cout << "ClapTrap " << this->_name << " is repaired for " << amount << " points! " << this->_hitPoints << " hit points left." << std::endl;
	} else {
		std::cout << "ClapTrap " << this->_name << " has no energy points left!" << std::endl;
	}
}
