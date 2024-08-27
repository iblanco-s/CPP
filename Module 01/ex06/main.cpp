/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iblanco- <iblanco-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/27 19:39:07 by iblanco-          #+#    #+#             */
/*   Updated: 2024/08/27 19:39:08 by iblanco-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main(int argc, char **argv) {
	if (argc != 2) {
		std::cout << "Error: wrong number of arguments" << std::endl;
		return 1;
	}
	std::string level = argv[1];
	Harl harl;
	harl.complain(level);
	return 0;
}

