#include "../includes/RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm() : AForm("RobotomyRequestForm", _signLevel, _execLevel) {
	_target = "default";
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &src) : AForm(src) {
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

RobotomyRequestForm::RobotomyRequestForm(std::string target) : AForm("RobotomyRequestForm", _signLevel, _execLevel) {
	_target = target;
}

void RobotomyRequestForm::execute(Bureaucrat const & executor) const {
	if (executor.getGrade() > getGradeToExecute())
		throw AForm::GradeTooLowException();
	else if (!getSigned())
		throw AForm::FormNotSignedException();
	else
	{
		std::cout << "**Brrrrrrrrrrrrrrrrrrrrrr**" << std::endl;
		srand(time(NULL));
		if (rand() % 2)
			std::cout << _target << " has been robotomized successfully !!" << std::endl;
		else
			std::cout << "Robotomization of " << _target << " failed..." << std::endl;
	}
	return ;
}
