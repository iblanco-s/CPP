/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iblanco- <iblanco-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/22 19:28:58 by iblanco-          #+#    #+#             */
/*   Updated: 2024/08/27 18:53:48 by iblanco-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main(int argc, char* argv[])
{
	if (argc < 2)
	{
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
		return 1;
	}
	int i = 1;
	while (i < argc) {
		std::string str = argv[i];
		for (int j = 0; str[j]; j++)
			std::cout << (char)(std::toupper(str[j]));
		i++;
	}
	std::cout << "\n";
	return 0;
}
