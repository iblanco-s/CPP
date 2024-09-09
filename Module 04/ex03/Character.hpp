#ifndef CHARACTER_HPP
# define CHARACTER_HPP

#include "ICharacter.hpp"

class Character : public ICharacter
{
	private:
		std::string name;
		AMateria* inventory[4];

	public: 
		Character();
		Character(const std::string &name);
		Character(const Character &other);
		Character &operator=(const Character &other);
		~Character();

		std::string const & getName() const;
		void equip(AMateria* m); //check if is full
		void unequip(int idx); //unequip() member function must NOT delete the Materia! !Check if not empty
		void use(int idx, ICharacter& target);
};

#endif
