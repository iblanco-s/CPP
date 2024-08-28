/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iblanco- <iblanco-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/22 19:29:22 by iblanco-          #+#    #+#             */
/*   Updated: 2024/08/23 13:05:13 by iblanco-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include "Contact.hpp"
#include <iostream>
#include <cstdio>
#include <string>
#include <sstream>

class PhoneBook {
    private:
        Contact contacts[8];
        int numContacts;

		// Helper methods
        void printSpaces(int length);
        void printInTable(std::string str, bool last);
		std::string getPhoneNumber(const std::string prompt);
		std::string getInput(const std::string prompt);
		Contact createNewContact();

    public:
        PhoneBook();

        void add();
        void search();
};

#endif