/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iblanco- <iblanco-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/22 19:29:04 by iblanco-          #+#    #+#             */
/*   Updated: 2024/08/22 19:29:54 by iblanco-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

void Contact::setContactInfo(const std::string& name, const std::string& lastName, const std::string& nickname, const std::string& number, const std::string& darkestSecret) {
    this->name = name;
    this->lastName = lastName;
    this->nickname = nickname;
    this->number = number;
    this->darkestSecret = darkestSecret;
}

std::string Contact::getName() const {
    return name;
}

std::string Contact::getLastName() const {
    return lastName;
}

std::string Contact::getNickname() const {
    return nickname;
}

std::string Contact::getNumber() const {
    return number;
}

std::string Contact::getDarkestSecret() const {
    return darkestSecret;
}
