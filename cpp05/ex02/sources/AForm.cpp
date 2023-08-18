#include "../includes/AForm.hpp"

AForm::AForm()
: _name("Default"), _signed(false), _gradeToSign(150), _gradeToExecute(150) {
}

AForm::AForm(const AForm &src)
: _name(src._name), _signed(src._signed), _gradeToSign(src._gradeToSign), _gradeToExecute(src._gradeToExecute){
}

AForm &AForm::operator=(const AForm &cpy) {
	if (this != &cpy) {
		_signed = cpy._signed;
	}
	return (*this);
}

AForm::~AForm() {
}

const char * AForm::GradeTooHighException::what() const throw()
{
    return "Grade is too high to sign this form";
}

const char * AForm::GradeTooLowException::what() const throw()
{
    return "Grade is too low to sign this form";
}

const char * AForm::FormNotSignedException::what() const throw()
{
    return "Form is not signed";
}

AForm::AForm(std::string name, int gradeToSign, int gradeToExecute)
: _name(name), _signed(false), _gradeToSign(gradeToSign), _gradeToExecute(gradeToExecute)
{
	if (gradeToSign < 1)
		throw AForm::GradeTooHighException();
	else if (gradeToSign > 150)
		throw AForm::GradeTooLowException();
	else if (gradeToExecute < 1)
		throw AForm::GradeTooHighException();
	else if (gradeToExecute > 150)
		throw AForm::GradeTooLowException();
}

std::string	AForm::getName() const {
	return _name;
}

bool		AForm::getSigned() const {
	return _signed;
}

int			AForm::getGradeToSign() const {
	return _gradeToSign;
}

int			AForm::getGradeToExecute() const {
	return _gradeToExecute;
}

void		AForm::beSigned(Bureaucrat const &bureaucrat) {
	if (bureaucrat.getGrade() > _gradeToSign)
		throw AForm::GradeTooLowException();
	_signed = true;
}

std::ostream&	operator<<(std::ostream &os, AForm &form) {
	os << "Form : " <<form.getName() << ", form grade to sign " << form.getGradeToSign() << ", form grade to execute " << form.getGradeToExecute() << ", form is ";
	if (form.getSigned())
		os << "signed.";
	else
		os << "not signed.";
	return os;
}