/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iblanco- <iblanco-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/27 19:38:45 by iblanco-          #+#    #+#             */
/*   Updated: 2024/08/27 19:38:46 by iblanco-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "HumanA.hpp"
#include "HumanB.hpp"

#ifndef WEAPON_HPP
# define WEAPON_HPP

class Weapon {
	private:
		std::string type;
		
	public:
		Weapon();
		Weapon(std::string type);

		std::string getType();
		void setType(std::string type);
};


#endif