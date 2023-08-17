#ifndef CPP_POOL_PRESIDENTIALPARDONFORM_HPP
# define CPP_POOL_PRESIDENTIALPARDONFORM_HPP

#include "Form.hpp"

class PresidentialPardonForm : public Form{

private:
	std::string	_target;

public:
	PresidentialPardonForm();
	PresidentialPardonForm(const PresidentialPardonForm &src);
	PresidentialPardonForm &operator=(const PresidentialPardonForm &cpy);
	~PresidentialPardonForm();
	PresidentialPardonForm(std::string target);

};


#endif
