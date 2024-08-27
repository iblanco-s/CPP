/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iblanco- <iblanco-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/27 19:38:30 by iblanco-          #+#    #+#             */
/*   Updated: 2024/08/27 19:38:31 by iblanco-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
# define HUMANB_HPP

#include "Weapon.hpp"

class HumanB {
	private:
		Weapon *weapon;
		std::string name;
		
	public:
		HumanB(std::string name);
		void attack();
		void setWeapon(Weapon& weapon);
};


#endif