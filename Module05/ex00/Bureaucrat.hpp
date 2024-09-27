#pragma once

#include <iostream>

class Bureaucrat
{
	private:
		const std::string name;
		int grade;

	public:
		Bureaucrat();
		Bureaucrat(const std::string name, int grade);
		Bureaucrat(const Bureaucrat &other);
		~Bureaucrat();
		Bureaucrat &operator=(const Bureaucrat &other);

		std::string getName() const;
		int getGrade() const;
	
		class GradeTooHighException : public std::exception {
			public:
				const char *what() const throw();
		};

		class GradeTooLowException : public std::exception {
			public:
				const char *what() const throw();
		};

		void incrementGrade();
		void decrementGrade();
};

//Override << (return the ostream so chaining is possible and not creating new stream objects)
std::ostream &operator<<(std::ostream& os, const Bureaucrat& bureaucrat);