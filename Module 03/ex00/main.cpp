/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iblanco- <iblanco-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/03 16:49:27 by iblanco-          #+#    #+#             */
/*   Updated: 2024/09/03 16:49:28 by iblanco-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main( void ) {
	ClapTrap clapTrap("Iñigo");
	clapTrap.attack("Juan");
	clapTrap.takeDamage(5);
	clapTrap.beRepaired(5);
	clapTrap.takeDamage(10);
	return 0;
}