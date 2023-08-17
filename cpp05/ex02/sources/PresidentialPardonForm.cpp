#include "../includes/PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm() : Form("PresidentialPardonForm", 25, 5) {
	_target = "default";
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &src) : Form(src) {
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

PresidentialPardonForm::PresidentialPardonForm(std::string target) : Form("PresidentialPardonForm", 25, 5) {
	_target = target;
}
