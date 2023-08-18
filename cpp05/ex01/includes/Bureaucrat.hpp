#ifndef CPP_POOL_BUREAUCRAT_HPP
# define CPP_POOL_BUREAUCRAT_HPP

#include <iostream>
# include "Form.hpp"

class Form;

class Bureaucrat {

private:
	std::string const	_name;
	int					_grade;

public:
	Bureaucrat();
	Bureaucrat(std::string name, int grade);
	Bureaucrat(const Bureaucrat &src);
	Bureaucrat &operator=(const Bureaucrat &cpy);
	~Bureaucrat();

	class GradeTooHighException : public std::exception {
	public:
		const char* what() const throw();
	};

class GradeTooLowException : public std::exception {
public:
	const char* what() const throw();
};

std::string	getName() const;
int			getGrade() const;
void 		incrementGrade();
void 		decrementGrade();
void		signForm(Form & form);

};

std::ostream&	operator<<(std::ostream &os, Bureaucrat &bureaucrat);

#endif
