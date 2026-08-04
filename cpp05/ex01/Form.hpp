#ifndef FORM_H
#define FORM_H

#include <iostream>
#include <string>
#include <exception>

class Bureaucrat;

class Form
{
	private:

		const std::string _name;
		bool _signed;
		const int _gradesign;
		const int _gradeexec;

	public:

		Form();
		Form(const std::string &name, int gradesign, int gradeexec);
		Form(Form const &other);
		Form &operator =(Form const &other);
		~Form();

		std::string get_name(void);
		bool get_signed(void);
		int get_gradesign(void);
		int get_gradeexec(void);

		void besigned(Bureaucrat &bureaucrat);

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

std::ostream &operator<<(std::ostream &os, Form &obj);


#endif