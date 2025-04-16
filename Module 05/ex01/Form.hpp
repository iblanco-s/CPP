/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iblanco- <iblanco-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/27 19:08:01 by iblanco-          #+#    #+#             */
/*   Updated: 2024/09/27 19:08:01 by iblanco-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include "Bureaucrat.hpp"

class Bureaucrat;

class Form {
	private:
		const std::string name;
		bool isSigned;
		const int requiredGradeToSign;
		const int requiredGradeToExecute;

	public:
		Form();
		Form(const std::string name, const int requiredGradeToSign, const int requiredGradeToExecute);
		Form(const Form &other);
		~Form();
		Form &operator=(const Form &other);

		std::string getName() const;
		bool getIsSigned() const;
		int getRequiredGradeToSign() const;
		int getRequiredGradeToExecute() const;
	
		class GradeTooHighException : public std::exception {
			public:
				const char *what() const throw();
		};

		class GradeTooLowException : public std::exception {
			public:
				const char *what() const throw();
		};

		void beSigned(Bureaucrat &bureaucrat);
};

std::ostream &operator<<(std::ostream& os, const Form& Form);