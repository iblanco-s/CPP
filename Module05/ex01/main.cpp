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

#include "Bureaucrat.hpp"
#include "Form.hpp"

int main()
{
    try {
        // Test Form construction
        Form f1("Correcto", 50, 25);
        std::cout << "Form created: " << f1 << std::endl;

        // Test Form with invalid grades
        try {
            Form f2("Demasiado Alto", 0, 25);
        } catch (std::exception& e) {
            std::cout << "Exception caught: " << e.what() << std::endl;
        }

        try {
            Form f3("Demasiado Bajo", 50, 151);
        } catch (std::exception& e) {
            std::cout << "Exception caught: " << e.what() << std::endl;
        }

        // Test signing a form
        Bureaucrat b1("Juan", 40);
        Bureaucrat b2("Pedro", 60);

        std::cout << "\nTesting form signing:" << std::endl;
        b1.signForm(f1);
        b2.signForm(f1);

        std::cout << "\nForm status after signing attempts:" << std::endl;
        std::cout << f1 << std::endl;

    } catch (std::exception& e) {
        std::cout << "Unexpected exception: " << e.what() << std::endl;
    }

    return 0;
}