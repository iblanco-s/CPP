/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iblanco- <iblanco-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/27 19:38:13 by iblanco-          #+#    #+#             */
/*   Updated: 2024/08/27 19:38:15 by iblanco-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

	HumanA::HumanA(std::string name, Weapon& weapon) : weapon(weapon), name(name) {}

	void HumanA::attack() {
		std::cout << this->name << " attacks with their " << this->weapon.getType() << std::endl;
	}