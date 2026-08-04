#ifndef BUREAUCRAT_H
# define BUREAUCRAT_H

#include <iostream>
#include <string>
#include <exception>

class Bureaucrat
{
	private:

		const std::string _name;
		int _grade;

	public:

		Bureaucrat();
		Bureaucrat(const std::string &name, int grade);
		Bureaucrat(Bureaucrat const &other);
		Bureaucrat &operator =(const Bureaucrat &other);
		~Bureaucrat();

		std::string getname(void);
		int getgrade(void);
		void incrementgrade(void);
		void decrementgrade(void);

		//const char* car prototypage de what pour la memoire
		class GradeTooHighException : public std::exception
		{
			public:
				virtual const char* what() const throw();
		};

		class GradeTooLowException : public std::exception
		{
			public:
				virtual const char* what() const throw();
		};

};

std::ostream &operator<<(std::ostream &os, Bureaucrat &obj);

#endif
