#include "../includes/PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm() : AForm("PresidentialPardonForm", _signLevel, _execLevel) {
	_target = "default";
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &src) : AForm(src) {
	_target = src._target;
}

PresidentialPardonForm &PresidentialPardonForm::operator=(const PresidentialPardonForm &cpy) {
	if (this != &cpy) {
		_target = cpy._target;
	}
	return (*this);
}

PresidentialPardonForm::~PresidentialPardonForm() {
}

PresidentialPardonForm::PresidentialPardonForm(std::string target) : AForm("PresidentialPardonForm", _signLevel, _execLevel) {
	_target = target;
}

void PresidentialPardonForm::execute(Bureaucrat const & executor) const {
	if (executor.getGrade() > getGradeToExecute())
		throw AForm::GradeTooLowException();
	else if (!getSigned())
		throw AForm::FormNotSignedException();
	else
		std::cout << _target << " has been pardoned by Zafod Beeblebrox" << std::endl;
	return ;
}