/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iblanco- <iblanco-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/22 19:29:18 by iblanco-          #+#    #+#             */
/*   Updated: 2024/08/23 13:11:26 by iblanco-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Phonebook.hpp"

PhoneBook::PhoneBook() : numContacts(0) {}

std::string PhoneBook::getInput(const std::string prompt) {
    std::string input;
    std::cout << prompt;
    std::getline(std::cin, input);
    if (std::cin.eof()) {
        std::cin.clear();
        clearerr(stdin);
		std::cout << "EOF detected. Please try again." << std::endl;
        return getInput(prompt);
    }
    if (input.empty()) {
        std::cout << "Input cannot be empty." << std::endl;
        return getInput(prompt);
    }
    return input;
}

std::string PhoneBook::getPhoneNumber(const std::string prompt) {
    while (true) {
        std::string input = getInput(prompt);
        bool isValid = true;
        for (size_t i = 0; i < input.length(); ++i) {
            if (!isdigit(input[i])) {
                isValid = false;
                break;
            }
        }
        if (isValid)
            return input;
        std::cout << "Invalid input. Please enter a valid number." << std::endl;
    }
}

Contact PhoneBook::createNewContact() {
    Contact contact;

    std::string name = getInput("Enter the name: ");
    std::string lastName = getInput("Enter the last name: ");
    std::string nickname = getInput("Enter the nickname: ");
    std::string number = getPhoneNumber("Enter the number: ");
    std::string darkestSecret = getInput("Enter the darkest secret: ");

    contact.setContactInfo(name, lastName, nickname, number, darkestSecret);
    return contact;
}

void PhoneBook::add() {
    if (numContacts < 8) {
        contacts[numContacts] = createNewContact();
        numContacts++;
    } else {
        for (int i = 0; i < 7; i++)
            contacts[i] = contacts[i + 1];
        contacts[7] = createNewContact();
    }
}

void PhoneBook::printSpaces(int length) {
    for (int i = 0; i < length; i++)
        std::cout << " ";
}

void PhoneBook::printInTable(std::string str, bool last = false) {
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

void PhoneBook::search() {
    std::cout << "     Index|First Name| Last Name|  Nickname" << std::endl;
    std::cout << "----------|----------|----------|----------" << std::endl;
    for (int i = 0; i < 8 && !contacts[i].getName().empty(); i++) {
        std::cout << "         " << i << "|";
        printInTable(contacts[i].getName());
        printInTable(contacts[i].getLastName());
        printInTable(contacts[i].getNickname(), true);
    }
    
    std::string input;
    int index;
    
    std::cout << "\nEnter the index of the contact you want to see: " << std::endl;
    if (!std::getline(std::cin, input)) {
        std::cout << "Error reading input. Returning to menu." << std::endl;
        return;
    }
    
	std::istringstream iss(input);
	if (iss >> index && iss.eof()) {
        if (index >= 0 && index < 8 && !contacts[index].getName().empty()) {
            std::cout << "Name: " << contacts[index].getName() << std::endl;
            std::cout << "Last name: " << contacts[index].getLastName() << std::endl;
            std::cout << "Nickname: " << contacts[index].getNickname() << std::endl;
            std::cout << "Number: " << contacts[index].getNumber() << std::endl;
            std::cout << "Darkest secret: " << contacts[index].getDarkestSecret() << std::endl;
        } else {
            std::cout << "Invalid index. Returning to menu." << std::endl;
        }
    } else {
        std::cout << "Invalid input. Returning to menu." << std::endl;
    }
}