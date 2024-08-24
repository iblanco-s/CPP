/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iblanco- <iblanco-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/22 19:29:18 by iblanco-          #+#    #+#             */
/*   Updated: 2024/08/22 19:38:49 by iblanco-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Phonebook.hpp"

PhoneBook::PhoneBook() : numContacts(0) {}

std::string getInput(const std::string& prompt) {
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

Contact createNewContact() {
    Contact contact;

    std::string name = getInput("Enter the name: ");
    std::string lastName = getInput("Enter the last name: ");
    std::string nickname = getInput("Enter the nickname: ");
    std::string number = getInput("Enter the number: ");
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

void PhoneBook::search() {
    std::cout << "     Index|First Name| Last Name|  Nickname" << std::endl;
    std::cout << "----------|----------|----------|----------" << std::endl;
    for (int i = 0; i < 8 && !contacts[i].getName().empty(); i++) {
        std::cout << "         " << i << "|";
        printInTable(contacts[i].getName());
        printInTable(contacts[i].getLastName());
        printInTable(contacts[i].getNickname(), true);
    }
    std::cout << "\n" << "Enter the index of the contact you want to see: ";
    int index;
    if (std::cin >> index) {
        if (index < 0 || index >= 8 || contacts[index].getName().empty()) {
            std::cout << "Invalid index. Please try again." << std::endl;
            return;
        }
    } else {
        std::cin.clear();
        clearerr(stdin);
        std::cout << "Invalid index. Please try again." << std::endl;
        return;
    }
	clearerr(stdin);
    std::cout << "Name: " << contacts[index].getName() << std::endl;
    std::cout << "Last name: " << contacts[index].getLastName() << std::endl;
    std::cout << "Nickname: " << contacts[index].getNickname() << std::endl;
    std::cout << "Number: " << contacts[index].getNumber() << std::endl;
    std::cout << "Darkest secret: " << contacts[index].getDarkestSecret() << std::endl;
}
