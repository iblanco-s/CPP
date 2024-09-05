#include "Dog.hpp"

Dog::Dog() : Animal() {
	this->type = "Dog";
	this->brain = new Brain();
	std::cout << "Dog constructor called" << std::endl;
}

Dog::Dog(const Dog& other) : Animal(other) {
	this->brain = new Brain(*other.getBrain());
	std::cout << "Dog copy constructor called" << std::endl;
}

Dog& Dog::operator=(const Dog& other) {
	if (this != &other) {
		Animal::operator=(other);
		delete this->brain;
		this->brain = new Brain(*other.getBrain());
	}
	return *this;
}

Dog::~Dog() {
	delete this->brain;
	std::cout << "Dog destructor called" << std::endl;
}

void Dog::makeSound() const {
	std::cout << "Woof woof" << std::endl;
}

Brain* Dog::getBrain() const {
	return this->brain;
}