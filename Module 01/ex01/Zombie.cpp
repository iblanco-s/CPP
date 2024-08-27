/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iblanco- <iblanco-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/24 12:24:22 by iblanco-          #+#    #+#             */
/*   Updated: 2024/08/27 19:37:53 by iblanco-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

void Zombie::setName(std::string name) {
	_name = name;
}

Zombie::~Zombie() {
	std::cout << _name << " has been destroyed" << std::endl;
}

void Zombie::announce(void) {
	std::cout << _name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}