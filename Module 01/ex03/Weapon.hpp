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