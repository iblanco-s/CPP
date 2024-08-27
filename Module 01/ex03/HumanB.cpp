/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iblanco- <iblanco-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/27 19:38:26 by iblanco-          #+#    #+#             */
/*   Updated: 2024/08/27 19:38:27 by iblanco-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

	HumanB::HumanB(std::string name) : name(name) {}

	void HumanB::setWeapon(Weapon& weapon) {
		this->weapon = &weapon;
	}

	void HumanB::attack() {
		std::cout << this->name << " attacks with their " << this->weapon->getType() << std::endl;
	}