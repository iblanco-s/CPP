/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iblanco- <iblanco-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/27 19:38:40 by iblanco-          #+#    #+#             */
/*   Updated: 2024/08/27 19:38:43 by iblanco-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(std::string type) : type(type) {
}

void Weapon::setType(std::string type) {
	this->type = type;
}

std::string Weapon::getType() {
	return type;
}
