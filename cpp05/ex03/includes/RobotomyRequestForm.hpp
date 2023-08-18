#ifndef CPP_POOL_ROBOTOMYREQUESTFORM_HPP
# define CPP_POOL_ROBOTOMYREQUESTFORM_HPP

#include "AForm.hpp"
#include <cstdlib> //rand()
#include <time.h>

class RobotomyRequestForm : public AForm{

private:
	static int const	_signLevel = 72;
	static int const	_execLevel = 45;
	std::string			_target;

public:
	RobotomyRequestForm();
	RobotomyRequestForm(const RobotomyRequestForm &src);
	RobotomyRequestForm &operator=(const RobotomyRequestForm &cpy);
	~RobotomyRequestForm();
	RobotomyRequestForm(std::string target);

	void	execute(Bureaucrat const &executor) const;
};


#endif
