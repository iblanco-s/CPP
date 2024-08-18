#include <iostream>

class Contact {
	std::string name;
	std::string lastName;
	std::string nickname;
	int number;
	std::string darkestSecret;
};

class PhoneBook {
	Contact contact[8];
	int numContacts = 0;

	int add() {
		if (numContacts < 8)
			contact[numContacts] = createContact();

	};
};

int main() {
	PhoneBook phoneBook;

	while (1)
	{
		std::cout << "Enter any of these commands: ADD, SEARCH or EXIT" << std::endl;
		std::string str;
		while (std::getline(std::cin, str))
		{
			if (!str.empty())
			{
				if (str.compare("ADD") == 0)

				else if (str.compare("SEARCH") == 0)

				else if (str.compare("EXIT") == 0)
	
				else
					std::cout << "Invalid command" << std::endl;
			}
			std::cout << "Enter any of these commands: ADD, SEARCH or EXIT" << std::endl;
		}
	}

	return 0;
}
