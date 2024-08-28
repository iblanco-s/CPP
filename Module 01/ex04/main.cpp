/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iblanco- <iblanco-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/27 19:38:55 by iblanco-          #+#    #+#             */
/*   Updated: 2024/08/27 19:38:56 by iblanco-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include <string>

int main(int argc, char **argv)
{
    if (argc != 4)
        return (std::cout << "Error: wrong number of arguments" << std::endl, 1);
    
    std::string filename = argv[1];
    std::string s1 = argv[2];
    std::string s2 = argv[3];

    // Check if s1 is empty
    if (s1.empty()) {
        std::cout << "Error: s1 cannot be empty" << std::endl;
        return 1;
    }

    std::ifstream readFile(filename.c_str());
    if (!readFile.is_open()) {
        std::cout << "Error: Unable to open file"<< std::endl;
        return 1;
    }

    std::string createdFileName = filename + ".replace";
    std::ofstream createdFile(createdFileName.c_str());
    if (!createdFile.is_open()) {
        std::cout << "Error: Unable to create file" << std::endl;
        return 1;
    }

    std::string line;
    while (std::getline(readFile, line)) {
        size_t pos = 0;
		// std::string::npos is what find returns when the substring is not found
    	while ((pos = line.find(s1, pos)) != std::string::npos) {
        	line.erase(pos, (s1).length());
        	line.insert(pos, s2);
        	pos += (s2).length();
    	}
		createdFile << line << std::endl;
	}

    readFile.close();
    createdFile.close();
    std::cout << "File created successfully" << std::endl;

    return 0;
}