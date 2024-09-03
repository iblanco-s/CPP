/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iblanco- <iblanco-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/03 16:51:23 by iblanco-          #+#    #+#             */
/*   Updated: 2024/09/03 16:51:24 by iblanco-         ###   ########.fr       */
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
		std::cout << this->_name << " takes " << amount << " points of damage! " << this->_hitPoints << " hit points left." << std::endl;
	}
	if (this->_hitPoints <= 0) {
		std::cout << this->_name << " is dead!" << std::endl;
	}
}

void ClapTrap::beRepaired(unsigned int amount) {
	if (this->_energyPoints > 0) {
		this->_hitPoints += amount;
		std::cout << this->_name << " is repaired for " << amount << " points! " << this->_hitPoints << " hit points left." << std::endl;
	} else {
		std::cout << this->_name << " has no energy points left!" << std::endl;
	}
}

std::string ClapTrap::getName() const {
	return this->_name;
}

int ClapTrap::getAttackDamage() const {
	return this->_attackDamage;
}

int ClapTrap::getHitPoints() const {
	return this->_hitPoints;
}

int ClapTrap::getEnergyPoints() const {
	return this->_energyPoints;
}

void ClapTrap::setName(std::string name) {
	this->_name = name;
}

void ClapTrap::setAttackDamage(int attackDamage) {
	this->_attackDamage = attackDamage;
}

void ClapTrap::setHitPoints(int hitPoints) {
	this->_hitPoints = hitPoints;
}

void ClapTrap::setEnergyPoints(int energyPoints) {
	this->_energyPoints = energyPoints;
}