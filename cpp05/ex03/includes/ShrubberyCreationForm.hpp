#ifndef CPP_POOL_SHRUBBERYCREATIONFORM_HPP
# define CPP_POOL_SHRUBBERYCREATIONFORM_HPP

#include "AForm.hpp"
#include <fstream>

class ShrubberyCreationForm : public AForm{

private:
	static int const	_signLevel = 145;
	static int const	_execLevel = 137;
	std::string			_target;

public:
	ShrubberyCreationForm();
	ShrubberyCreationForm(const ShrubberyCreationForm &src);
	ShrubberyCreationForm &operator=(const ShrubberyCreationForm &cpy);
	~ShrubberyCreationForm();
	ShrubberyCreationForm(std::string target);

	virtual void execute(Bureaucrat const & executor) const;
};


#endif
