#include "../includes/Bureaucrat.hpp"

Bureaucrat::Bureaucrat() : _name("Default"), _grade(150){
}

Bureaucrat::Bureaucrat(std::string const name, int grade) : _name(name) {
	if (grade < 1)
		throw Bureaucrat::GradeTooHighException();
	else if (grade > 150)
		throw Bureaucrat::GradeTooLowException();
	_grade = grade;
}

Bureaucrat::Bureaucrat(const Bureaucrat &src) : _name(src._name), _grade(src._grade) {
}

Bureaucrat &Bureaucrat::operator=(const Bureaucrat &cpy) {
	if (this != &cpy) {
		_grade = cpy._grade;
	}
	return *this;
}

Bureaucrat::~Bureaucrat() {
}

const char* Bureaucrat::GradeTooHighException::what() const throw()
{
	return "Grade too high";
}

const char* Bureaucrat::GradeTooLowException::what() const throw()
{
	return "Grade too low";
}

std::string	Bureaucrat::getName() const{
	return _name;
}

int			Bureaucrat::getGrade() const{
	return _grade;
}

void 		Bureaucrat::incrementGrade(){
	if (_grade - 1 < 1)
		throw Bureaucrat::GradeTooHighException();
	_grade--;
}

void 		Bureaucrat::decrementGrade(){
	if (_grade + 1 > 150)
		throw Bureaucrat::GradeTooLowException();
	_grade++;
}

void	Bureaucrat::signForm(AForm & form) {
	try
	{
		form.beSigned(*this);
		std::cout << _name << " signed form " << form.getName() << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << _name  << " couldn't sign " << form.getName() << " because " << e.what() << std::endl;
	}
}


void Bureaucrat::executeForm(const AForm &form) {
	try
	{
		form.execute(*this);
		std::cout << _name << " executes " << form.getName() << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << _name << " cannot execute " << form.getName() << " because " << e.what() << std::endl;
		return ;
	}
}

std::ostream&	operator<<(std::ostream &os, Bureaucrat &bureaucrat){
	os << bureaucrat.getName() << ", bureaucrat grade " << bureaucrat.getGrade();
	return os;
}
