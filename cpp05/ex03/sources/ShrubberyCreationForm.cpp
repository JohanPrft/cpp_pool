#include "../includes/ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm() : AForm("ShrubberyCreationForm", _signLevel, _execLevel) {
	_target = "default";
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &src) : AForm(src) {
	_target = src._target;
}

ShrubberyCreationForm &ShrubberyCreationForm::operator=(const ShrubberyCreationForm &cpy) {
	if (this != &cpy) {
		_target = cpy._target;
	}
	return (*this);
}

ShrubberyCreationForm::~ShrubberyCreationForm() {
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string target) : AForm("ShrubberyCreationForm", _signLevel, _execLevel) {
	_target = target;
}

void ShrubberyCreationForm::execute(Bureaucrat const & executor) const
{
	std::ofstream	ofs;
	std::string		outfileName;

	if (executor.getGrade() > getGradeToExecute())
		throw AForm::GradeTooLowException();
	else if (!getSigned())
		throw AForm::FormNotSignedException();
	outfileName = _target + "_shrubbery";
	ofs.open(outfileName.c_str());
	if (!ofs)
	{
		std::cerr << "Error occured when creating the file" << std::endl;
		return;
	}
	ofs << "          &&& &&  & &&\n"
		   "      && &\\/&\\|& ()|/ @, &&\n"
		   "      &\\/(/&/&||/& /_/)_&/_&\n"
		   "   &() &\\/&|()|/&\\/ '%\" & ()\n"
		   "  &_\\_&&_\\ |& |&&/&__%_/_& &&\n"
		   "&&   && & &| &| /& & % ()& /&&\n"
		   " ()&_---()&\\&\\|&&-&&--%---()~\n"
		   "     &&     \\|||\n"
		   "             |||\n"
		   "             |||\n"
		   "             |||\n"
		   "       , -=-~  .-^- _\n";
	ofs.close();
}