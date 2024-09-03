/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iblanco- <iblanco-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/03 16:49:45 by iblanco-          #+#    #+#             */
/*   Updated: 2024/09/03 16:49:46 by iblanco-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

#include <iostream>

class ClapTrap {
	private:
		std::string _name;
		int _hitPoints;
		int _energyPoints;
		int _attackDamage;
		
	public:
		ClapTrap();
		ClapTrap(std::string name);
		ClapTrap(const ClapTrap &other);
		ClapTrap &operator=(const ClapTrap &other);
		~ClapTrap();

		void attack(const std::string& target);
		void takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount);

		//getters
		std::string getName() const;
		int getAttackDamage() const;
		int getHitPoints() const;
		int getEnergyPoints() const;

		//setters
		void setName(std::string name);
		void setAttackDamage(int attackDamage);
		void setHitPoints(int hitPoints);
		void setEnergyPoints(int energyPoints);
};

#endif