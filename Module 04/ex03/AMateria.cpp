#include "AMateria.hpp"

AMateria::AMateria()
{
}

AMateria::AMateria(std::string const & type) : type(type)
{
}

AMateria::AMateria(const AMateria &other) : type(other.type)
{
	*this = other;
}

AMateria &AMateria::operator=(const AMateria &other)
{
	this->type = other.type;
	return *this;
}

AMateria::~AMateria()
{
}

std::string const &AMateria::getType() const
{
	return this->type;
}

void AMateria::use(ICharacter& target)
{
	//need to use target
	target.getName();
}