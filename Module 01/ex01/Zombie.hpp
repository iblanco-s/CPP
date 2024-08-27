/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iblanco- <iblanco-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/24 12:24:29 by iblanco-          #+#    #+#             */
/*   Updated: 2024/08/27 19:37:56 by iblanco-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

class Zombie {
	private:
		std::string _name;
		
	public:
		~Zombie();
		void announce(void);
		void setName(std::string name);
};

Zombie* zombieHorde( int N, std::string name );

#endif