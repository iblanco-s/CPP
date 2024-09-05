#include "WrongCat.hpp"

WrongCat::WrongCat() : WrongAnimal() {
	std::cout << "WrongCat constructor called" << std::endl;
    this->type = "WrongCat";
}

WrongCat::WrongCat(const WrongCat& other) : WrongAnimal(other) {
	std::cout << "WrongCat copy constructor called" << std::endl;
    *this = other;
}	

WrongCat& WrongCat::operator=(const WrongCat& other) {
	std::cout << "WrongCat copy assignment operator called" << std::endl;
    if (this != &other) {
        this->type = other.type;
    }
    return *this;
}

WrongCat::~WrongCat() {
	std::cout << "WrongCat destructor called" << std::endl;
}

void WrongCat::makeSound() const {
    std::cout << "WrongCat sound" << std::endl;
}