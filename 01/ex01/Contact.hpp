/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iblanco- <iblanco-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/22 19:29:09 by iblanco-          #+#    #+#             */
/*   Updated: 2024/08/22 19:35:17 by iblanco-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
#define CONTACT_HPP

#include <string>

class Contact {
    private:
        std::string name;
        std::string lastName;
        std::string nickname;
        std::string number;
        std::string darkestSecret;

    public:
        void setContactInfo(const std::string& name, const std::string& lastName, const std::string& nickname, const std::string& number, const std::string& darkestSecret);

        std::string getName() const;
        std::string getLastName() const;
        std::string getNickname() const;
        std::string getNumber() const;
        std::string getDarkestSecret() const;
};

#endif
