#include "Dog.hpp"
#include "Cat.hpp"

int main()
{
	std::cout << "--- Constructors ---" << std::endl;
	Animal* animals[10];
	for (int i = 0; i < 10; i++) {
		if (i < 5) {
			animals[i] = new Dog();
		} else {
			animals[i] = new Cat();
		}
	}

	std::cout << std::endl << "--- Deep copy test ---" << std::endl;
	Dog basic;
	{
		Dog tmp = basic;
	}
	std::cout << "basic: " << basic.getBrain()->getIdeas()[0] << std::endl;

	std::cout << std::endl << "--- Destructors ---" << std::endl;
	for (int i = 0; i < 10; i++) {
		delete animals[i];
	}
	return 0;
}