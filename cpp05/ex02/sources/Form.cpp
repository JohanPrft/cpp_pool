#include "../includes/Form.hpp"

Form::Form()
: _name("Default"), _signed(false), _gradeToSign(150), _gradeToExecute(150) {
}

Form::Form(const Form &src)
: _name(src._name), _signed(src._signed), _gradeToSign(src._gradeToSign), _gradeToExecute(src._gradeToExecute){
}

Form &Form::operator=(const Form &cpy) {
	if (this != &cpy) {
		_signed = cpy._signed;
	}
	return (*this);
}

Form::~Form() {
}

Form::Form(std::string name, int gradeToSign, int gradeToExecute)
: _name(name), _signed(false), _gradeToSign(gradeToSign), _gradeToExecute(gradeToExecute)
{
	if (gradeToSign < 1)
		throw Form::GradeTooHighException();
	else if (gradeToSign > 150)
		throw Form::GradeTooLowException();
	else if (gradeToExecute < 1)
		throw Form::GradeTooHighException();
	else if (gradeToExecute > 150)
		throw Form::GradeTooLowException();
}

std::string	Form::getName() const {
	return _name;
}

bool		Form::getSigned() const {
	return _signed;
}

int			Form::getGradeToSign() const {
	return _gradeToSign;
}

int			Form::getGradeToExecute() const {
	return _gradeToExecute;
}

void		Form::beSigned(Bureaucrat const &bureaucrat) {
	if (bureaucrat.getGrade() > _gradeToSign)
		throw Form::GradeTooLowException();
	_signed = true;
}

void		Form::signForm(Bureaucrat const &bureaucrat) {
	try
	{
		beSigned(bureaucrat);
		std::cout << bureaucrat.getName() << " signed form " << _name << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << bureaucrat.getName()  << " couldn't sign " << _name << " because " << e.what() << std::endl;
	}
}

virtual void	execute(Bureaucrat const &executor) const {
	(void)executor;
	std::cout << "Execute what ? This form is a template !" << std::endl;
}

std::ostream&	operator<<(std::ostream &os, Form &form) {
	os << "Form : " <<form.getName() << ", form grade to sign " << form.getGradeToSign() << ", form grade to execute " << form.getGradeToExecute() << ", form is ";
	if (form.getSigned())
		os << "signed." << std::endl;
	else
		os << "not signed." << std::endl;
	return os;
}