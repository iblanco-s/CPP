/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iblanco- <iblanco-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/22 19:29:12 by iblanco-          #+#    #+#             */
/*   Updated: 2024/08/27 18:58:14 by iblanco-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Phonebook.hpp"

int main() {
    PhoneBook phoneBook;

    std::string str;
    while (std::cout << "Enter any of these commands: ADD, SEARCH or EXIT" << std::endl && std::getline(std::cin, str)) {
        if (!str.empty()) {
            if (str == "ADD")
                phoneBook.add();
            else if (str == "SEARCH")
                phoneBook.search();
            else if (str == "EXIT")
                return 0;
            else
                std::cout << "Invalid command" << std::endl;
        } else {
			std::cout << "Input cannot be empty" << std::endl;
		}
    }
	std::cout << "EOF detected, exiting program safely" << std::endl;
    return 0;
}