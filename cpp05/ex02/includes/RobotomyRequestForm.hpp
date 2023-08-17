#ifndef CPP_POOL_ROBOTOMYREQUESTFORM_HPP
# define CPP_POOL_ROBOTOMYREQUESTFORM_HPP

#include "Form.hpp"

class RobotomyRequestForm : public Form{

private:
	std::string	_target;

public:
	RobotomyRequestForm();
	RobotomyRequestForm(const RobotomyRequestForm &src);
	RobotomyRequestForm &operator=(const RobotomyRequestForm &cpy);
	~RobotomyRequestForm();
	RobotomyRequestForm(std::string target);

};


#endif
