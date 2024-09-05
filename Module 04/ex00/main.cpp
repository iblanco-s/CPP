// #include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
// #include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main()
{
	std::cout << "--- Animal ---" << std::endl;
	const Animal* meta = new Animal();
	const Animal* j = new Dog();
	const Animal* i = new Cat();
	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;
	i->makeSound(); //will output the cat sound
	j->makeSound();
	meta->makeSound();

	delete j;
	delete i;
	delete meta;


	std::cout << std::endl << "--- WrongAnimal ---" << std::endl;
	const WrongAnimal* wrongMeta = new WrongAnimal();
	const WrongAnimal* wrongI = new WrongCat();
	std::cout << wrongI->getType() << " " << std::endl;
	wrongI->makeSound(); // This should output the WrongAnimal sound because it's not virtual
	wrongMeta->makeSound();

	delete wrongMeta;
	delete wrongI;

	return 0;
}