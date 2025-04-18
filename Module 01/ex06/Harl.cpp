/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iblanco- <iblanco-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/27 19:39:14 by iblanco-          #+#    #+#             */
/*   Updated: 2024/08/27 19:39:15 by iblanco-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

	void Harl::debug(void) {
		std::cout << "[ DEBUG ]" << std::endl;
		std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do!" << std::endl << std::endl;
	}

	void Harl::info(void) {
		std::cout << "[ INFO ]" << std::endl;
		std::cout << "I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!" << std::endl << std::endl;
	}

	void Harl::warning(void) {
		std::cout << "[ WARNING ]" << std::endl;
		std::cout << "I think I deserve to have some extra bacon for free. I’ve been coming for years whereas you started working here since last month." << std::endl << std::endl;
	}

	void Harl::error(void) {
		std::cout << "[ ERROR ]" << std::endl;
		std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl << std::endl;
	}

	void Harl::complain(std::string level) {
		int j = 4;
		void (Harl::*ptrMemberFunc[4])(void) = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};
		std::string levels[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
		for (int i = 0; i < 4; i++) {
			if (level == levels[i]) {
				j = i;
				break;
			}
		}
		
		switch(j) 
		{
			case 0: 
				(this->*ptrMemberFunc[0])();
				(this->*ptrMemberFunc[1])();
				(this->*ptrMemberFunc[2])();
				(this->*ptrMemberFunc[3])();
			break;
			case 1: 
				(this->*ptrMemberFunc[1])();
				(this->*ptrMemberFunc[2])();
				(this->*ptrMemberFunc[3])();
			break;
			case 2:
				(this->*ptrMemberFunc[2])();
				(this->*ptrMemberFunc[3])();
			break;
			case 3: 
				(this->*ptrMemberFunc[3])();
			break;
			default: 
				std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
		}
	}
