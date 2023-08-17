#ifndef CPP_POOL_SHRUBBERYCREATIONFORM_HPP
# define CPP_POOL_SHRUBBERYCREATIONFORM_HPP

#include "Form.hpp"

class ShrubberyCreationForm : public Form{

private:
	std::string	_target;

public:
	ShrubberyCreationForm();
	ShrubberyCreationForm(const ShrubberyCreationForm &src);
	ShrubberyCreationForm &operator=(const ShrubberyCreationForm &cpy);
	~ShrubberyCreationForm();
	ShrubberyCreationForm(std::string target);

};


#endif
