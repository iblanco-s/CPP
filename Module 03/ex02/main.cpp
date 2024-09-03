/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iblanco- <iblanco-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/03 16:50:23 by iblanco-          #+#    #+#             */
/*   Updated: 2024/09/03 16:50:24 by iblanco-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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