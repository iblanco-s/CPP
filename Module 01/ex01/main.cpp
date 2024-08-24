/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iblanco- <iblanco-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/24 12:24:07 by iblanco-          #+#    #+#             */
/*   Updated: 2024/08/24 12:24:08 by iblanco-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main() {
	Zombie* zombie = zombieHorde(10, "testing");

	if (zombie == NULL)
		return 1;
	
	for (int i = 0; i < 10; i++)
		zombie[i].announce();

	delete[] zombie;

	return 0;
}