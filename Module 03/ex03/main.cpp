/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iblanco- <iblanco-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/03 16:51:54 by iblanco-          #+#    #+#             */
/*   Updated: 2024/09/03 16:51:55 by iblanco-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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