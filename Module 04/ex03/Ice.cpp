#include "Ice.hpp"

Ice::Ice() : AMateria("ice")
{
	this->type = "ice";
}

Ice::Ice(const Ice &other) : AMateria(other)
{
	*this = other;
}

Ice &Ice::operator=(const Ice &other)
{
	this->type = other.type;
	return *this;
}

Ice::~Ice()
{
}

AMateria* Ice::clone() const
{
	return new Ice();
}

void Ice::use(ICharacter& target)
{
	std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}