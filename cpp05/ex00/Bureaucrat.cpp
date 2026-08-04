#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat() :  _name("CEO"), _grade(1)
{

}
Bureaucrat::~Bureaucrat()
{

}
Bureaucrat::Bureaucrat(const std::string &name, int grade) : _name(name)
{
	if (grade < 1)
		throw Bureaucrat::GradeTooHighException();
	if (grade > 150)
		throw Bureaucrat::GradeTooLowException();
	_grade = grade;
}

Bureaucrat::Bureaucrat(const Bureaucrat &other) : _name(other._name), _grade(other._grade) 
{

}

Bureaucrat &Bureaucrat::operator=(const Bureaucrat &other)
{
	if (this != &other)
	{
		_grade = other._grade;
	}
	return *this;
}

int Bureaucrat::getgrade(void)
{
	return _grade;
}
std::string Bureaucrat::getname(void)
{
	return _name;
}
void Bureaucrat::incrementgrade(void)
{
	if (_grade <= 1)
		throw Bureaucrat::GradeTooHighException();
	--_grade;
}
void Bureaucrat::decrementgrade(void)
{
	if (_grade >= 150)
		throw Bureaucrat::GradeTooLowException();
	++_grade;
}
const char* Bureaucrat::GradeTooHighException::what() const throw()
{
	return "Error Grade is too high";
}
const char* Bureaucrat::GradeTooLowException::what() const throw()
{
	return "Error Grade is too low";
}

std::ostream &operator<<(std::ostream &os, Bureaucrat &obj)
{
	os << obj.getname() << ", bureaucrat grade " << obj.getgrade();
	return os;
}