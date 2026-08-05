#include "Form.hpp"
#include "Bureaucrat.hpp"

Form::Form() : _name("BIGBOSS"), _signed(false), _gradesign(1), _gradeexec(1)
{

}
Form::Form(const std::string &name, int gradesign, int gradeexec) : _name(name), _gradesign(gradesign), _gradeexec(gradeexec) ,_signed(false)
{
	if (gradesign < 1 || gradeexec < 1)
		throw Form::GradeTooHighException();
	if (gradesign > 150 || gradeexec > 150)
		throw Form::GradeTooLowException();
}

Form::Form(Form const &other) : _name(other._name), _signed(other._signed), _gradesign(other._gradesign), _gradeexec(other._gradeexec)
{

}

Form &Form::operator=(Form const &other)
{
	if (this != &other)
	{
		_signed = other._signed;
	}
	return *this;
}

Form::~Form()
{

}

void Form::besigned(Bureaucrat &Bureaucrat)
{
	if (Bureaucrat.getgrade() <= _gradesign)
		_signed = true;
	else
		throw Form::GradeTooLowException();
}

const char* Form::GradeTooHighException::what() const throw()
{
	return "Form Error: Grade is too high";
}

const char* Form::GradeTooLowException::what() const throw()
{
	return "Form Error: Grade is too low";
}

std::string Form::get_name(void)
{
	return _name;
}
bool Form::get_signed(void)
{
	return _signed;
}
int Form::get_gradeexec(void)
{
	return _gradeexec;
}
int Form::get_gradesign(void)
{
	return _gradesign;
}
std::ostream &operator<<(std::ostream &os, Form &obj)
{
	os << obj.get_name() << ", require sign grade: " << obj.get_gradesign();
	os << ", require execute grade: " << obj.get_gradeexec();
	os << ", sign status: ";
	
	if (obj.get_signed() == true)
	{
		os << "yes";
	}
	else
	{
		os << "no";
	}
	return os;
}