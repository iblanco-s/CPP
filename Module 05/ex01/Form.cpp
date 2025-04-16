/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iblanco- <iblanco-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/27 19:08:01 by iblanco-          #+#    #+#             */
/*   Updated: 2024/09/27 19:08:01 by iblanco-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form() : name("Default"), isSigned(false), requiredGradeToSign(3), requiredGradeToExecute(3)  {
}

Form::Form(const std::string name, const int requiredGradeToSign, const int requiredGradeToExecute)
	: name(name), isSigned(false), requiredGradeToSign(requiredGradeToSign), requiredGradeToExecute(requiredGradeToExecute) {
	if (requiredGradeToSign < 1 || requiredGradeToExecute < 1)
		throw Form::GradeTooHighException();
	else if (requiredGradeToSign > 150 || requiredGradeToExecute > 150)
		throw Form::GradeTooLowException();
}

Form::Form(const Form &other)
    : name(other.name), isSigned(other.isSigned),
      requiredGradeToSign(other.requiredGradeToSign),
      requiredGradeToExecute(other.requiredGradeToExecute) {
	*this = other;
}

Form &Form::operator=(const Form &other) {
	this->isSigned = other.isSigned;
	return *this;
}

Form::~Form() {}

std::string Form::getName() const {
	return this->name;
}

bool Form::getIsSigned() const {
	return this->isSigned;
}

int Form::getRequiredGradeToSign() const {
	return this->requiredGradeToSign;
}

int Form::getRequiredGradeToExecute() const {
	return this->requiredGradeToExecute;
}

const char *Form::GradeTooHighException::what() const throw() {
	return "Grade is too high";
}

const char *Form::GradeTooLowException::what() const throw() {
	return "Grade is too low";
}

std::ostream &operator<<(std::ostream& os, const Form &form) {
	std::cout << form.getName() << ", form grade to sign " << form.getRequiredGradeToSign() << ", required grade to execute " << form.getRequiredGradeToExecute() << ", is signed " << form.getIsSigned();
	return os;
}

void Form::beSigned(Bureaucrat &bureaucrat) {
	if (bureaucrat.getGrade() > this->requiredGradeToSign)
		throw Form::GradeTooLowException();
	else
		this->isSigned = true;
}
