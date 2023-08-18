#include "../includes/Intern.hpp"

Intern::Intern() {
}

Intern::Intern(const Intern &src) {
	(void)src;
}

Intern &Intern::operator=(const Intern &cpy) {
	(void)cpy;
	return (*this);
}

Intern::~Intern() {
}

const char* Intern::FormNameNotFoundException::what() const throw()
{
	return "Grade too low";
}

AForm* Intern::_makeRobotomyRequestForm(std::string target){
	return new RobotomyRequestForm(target);
}

AForm* Intern::_makePresidentialPardonForm(std::string target){
	return new PresidentialPardonForm(target);
}

AForm* Intern::_makeShrubberyCreationForm(std::string target){
	return new ShrubberyCreationForm(target);
}

typedef AForm* (*function)(std::string);

AForm*	Intern::makeForm(std::string const formName, std::string const targetName) const {
	function formConstructorFunction[] =
			{
			_makeRobotomyRequestForm,
			_makePresidentialPardonForm,
			_makeShrubberyCreationForm
			};
	std::string formConstructorName[] =
			{
			"robotomy request",
			"presidential pardon",
			"shrubbery creation"
			};

	for (int i = 0; i < 3; i++)
	{
		if (formName == formConstructorName[i])
		{
			std::cout << "Intern created " << formName << " form targeting " << targetName << std::endl;
			return formConstructorFunction[i](targetName);
		}
	}
	throw FormNameNotFoundException();
}
// returning NULL isnt a good option (can't check it) but :
// - create a special class default (can't return default AForm bcause abstract)
// - throw an exception but not a fan bcause happens a lot but makes a good try block in main
