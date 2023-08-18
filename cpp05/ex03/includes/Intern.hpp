#ifndef CPP05_INTERN_HPP
# define CPP05_INTERN_HPP

# include <iostream>
# include "RobotomyRequestForm.hpp"
# include "PresidentialPardonForm.hpp"
# include "ShrubberyCreationForm.hpp"

class PresidentialPardonForm;
class RobotomyRequestForm;
class ShrubberyCreationForm;

class Intern {

private:
	static AForm* _makeShrubberyCreationForm(std::string target);
	static AForm* _makeRobotomyRequestForm(std::string target);
	static AForm* _makePresidentialPardonForm(std::string target);

public:
	Intern();
	Intern(const Intern &src);
	Intern &operator=(const Intern &cpy);
	~Intern();

	class FormNameNotFoundException : public std::exception {
	public:
		const char * what () const throw();
	};

	AForm*	makeForm(std::string const formName, std::string const targetName) const;
};


#endif
