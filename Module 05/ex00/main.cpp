/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iblanco- <iblanco-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/27 17:35:10 by iblanco-          #+#    #+#             */
/*   Updated: 2024/09/27 17:35:10 by iblanco-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.h"

int main() {
	try {
		// Valid creation and operations
		std::cout << "--- Valid operations ---" << std::endl;
		Bureaucrat b1("Valido", 75);
		std::cout << b1 << std::endl;
		
		b1.incrementGrade();
		std::cout << "After increment: " << b1 << std::endl;
		
		b1.decrementGrade();
		std::cout << "After decrement: " << b1 << std::endl;

		// Invalid increment
		std::cout << "\n--- Invalid increment ---" << std::endl;
		Bureaucrat b2("High", 1);
		std::cout << b2 << std::endl;
		b2.incrementGrade(); // This throws exception
	} catch (std::exception& e) {
		std::cout << "Exception caught: " << e.what() << std::endl;
	}

	try {
		// Invalid decrement
		std::cout << "\n--- Invalid decrement ---" << std::endl;
		Bureaucrat b3("Low", 150);
		std::cout << b3 << std::endl;
		b3.decrementGrade(); // This throws exception
	} catch (std::exception& e) {
		std::cout << "Exception caught: " << e.what() << std::endl;
	}

	try {
		// Invalid creation High
		std::cout << "\n--- Invalid creation (too high) ---" << std::endl;
		Bureaucrat b4("CreationHigh", 0);
	} catch (std::exception& e) {
		std::cout << "Exception caught: " << e.what() << std::endl;
	}

	try {
		// Invalid creation Low
		std::cout << "\n--- Invalid creation (too low) ---" << std::endl;
		Bureaucrat b5("CreationLow", 151);
	} catch (std::exception& e) {
		std::cout << "Exception caught: " << e.what() << std::endl;
	}

	return 0;
}