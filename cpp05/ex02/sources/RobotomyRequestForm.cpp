#include "../includes/RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm() : Form("RobotomyRequestForm", 72, 45) {
	_target = "default";
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &src) : Form(src) {
	_target = src._target;
}

RobotomyRequestForm &RobotomyRequestForm::operator=(const RobotomyRequestForm &cpy) {
	if (this != &cpy) {
		_target = cpy._target;
	}
	return (*this);
}

RobotomyRequestForm::~RobotomyRequestForm() {
}

RobotomyRequestForm::RobotomyRequestForm(std::string target) : Form("RobotomyRequestForm", 72, 45) {
	_target = target;
}