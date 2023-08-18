#ifndef CPP_POOL_PRESIDENTIALPARDONFORM_HPP
# define CPP_POOL_PRESIDENTIALPARDONFORM_HPP

#include "AForm.hpp"

class PresidentialPardonForm : public AForm{

private:
	static int const	_signLevel = 25;
	static int const	_execLevel = 5;
	std::string			_target;

public:
	PresidentialPardonForm();
	PresidentialPardonForm(const PresidentialPardonForm &src);
	PresidentialPardonForm &operator=(const PresidentialPardonForm &cpy);
	~PresidentialPardonForm();
	PresidentialPardonForm(std::string target);

	void	execute(Bureaucrat const &executor) const;
};


#endif
