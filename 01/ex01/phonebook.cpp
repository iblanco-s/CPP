#include <iostream>

class Contact {
	public:
		std::string name;
		std::string lastName;
		std::string nickname;
		std::string number;
		std::string darkestSecret;
};

std::string getInput(const std::string& prompt) {
    std::string input;
    std::cout << prompt;
    std::getline(std::cin, input);
    if (input.empty()) {
        std::cout << "Input cannot be empty. Please try again." << std::endl;
        return getInput(prompt);
    }
    return input;
}

Contact	createNewContact() {
	Contact contact;

	contact.name = getInput("Enter the name: ");
	contact.lastName = getInput("Enter the last name: ");
	contact.nickname = getInput("Enter the nickname: ");
	contact.number = getInput("Enter the number: ");
	contact.darkestSecret = getInput("Enter the darkest secret: ");

	return contact;
}

void printSpaces(int length) {
	for (int i = 0; i < length; i++)
		std::cout << " ";
}

void printInTable(std::string str, bool last = false) {
	int length = str.length();
	if (length > 10)
		std::cout << str.substr(0, 9) << ".";
	else {
		printSpaces(10 - length);
		std::cout << str;
	}
	if (!last)
		std::cout << "|";
	else
		std::cout << std::endl;
}

class PhoneBook {
	Contact contacts[8];
	int numContacts;

	public:
		PhoneBook() : numContacts(0) {}

		int add() {
			if (numContacts < 8) {
				contacts[numContacts] = createNewContact();
				numContacts++;
			}
			else {
				for (int i = 0; i < 7; i++)
					contacts[i] = contacts[i + 1];
				contacts[7] = createNewContact();
			}
			return 0;
		};

		int search() {
			for (int i = 0; i < 8 && !contacts[i].name.empty(); i++)
			{
				std::cout << "         " << i << "|";
				printInTable(contacts[i].name);
				printInTable(contacts[i].lastName);
				printInTable(contacts[i].nickname, true);					
			}
			std::cout << "Enter the index of the contact you want to see: ";
			int index;
			std::cin >> index;
			std::cin.ignore();
			if (index >= 0 && index < 8)
			{
				if (contacts[index].name.empty())
					std::cout << "Contact not found" << std::endl;
				else
				{
					std::cout << "Name: " << contacts[index].name << std::endl;
					std::cout << "Last name: " << contacts[index].lastName << std::endl;
					std::cout << "Nickname: " << contacts[index].nickname << std::endl;
					std::cout << "Number: " << contacts[index].number << std::endl;
					std::cout << "Darkest secret: " << contacts[index].darkestSecret << std::endl;
				}
			}
			else
				std::cout << "Invalid index" << std::endl;
			return 0;
		};
};

int main() {
	PhoneBook phoneBook;

	std::cout << "Enter any of these commands: ADD, SEARCH or EXIT" << std::endl;
	std::string str;
	while (std::getline(std::cin, str))
	{
		if (!str.empty())
		{
			if (str.compare("ADD") == 0)
				phoneBook.add();
			else if (str.compare("SEARCH") == 0)
				phoneBook.search();
			else if (str.compare("EXIT") == 0)
				break; // exit the program
			else
				std::cout << "Invalid command" << std::endl;
		}
		std::cout << "Enter any of these commands: ADD, SEARCH or EXIT" << std::endl;
	}

	return 0;
}
