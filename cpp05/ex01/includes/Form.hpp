#ifndef CPP_POOL_FORM_HPP
# define CPP_POOL_FORM_HPP

#include <iostream>
#include "../includes/Bureaucrat.hpp"
#include "Bureaucrat.hpp"

class Bureaucrat;

class Form {

private:
	std::string const	_name;
	bool				_signed;
	int const			_gradeToSign;
	int const			_gradeToExecute;

public:
	Form();
	Form(const Form &src);
	Form &operator=(const Form &cpy);
	~Form();
	Form(std::string const name, int const gradeToSign, int const gradeToExecute);

	class GradeTooHighException : public std::exception {
	public:
		const char* what() const throw();
	};
	class GradeTooLowException : public std::exception {
	public:
		const char* what() const throw();
	};

	std::string	getName() const;
	bool		getSigned() const;
	int			getGradeToSign() const;
	int			getGradeToExecute() const;

	void		beSigned(Bureaucrat const &bureaucrat);
	void		signForm(Bureaucrat const &bureaucrat);
};

std::ostream&	operator<<(std::ostream &os, Form &form);

#endif
