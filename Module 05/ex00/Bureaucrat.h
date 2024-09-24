#ifndef BUREAUCRAT_H
# define BUREAUCRAT_H

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
};

#endif