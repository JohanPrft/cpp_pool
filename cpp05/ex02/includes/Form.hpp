#ifndef CPP_POOL_FORM_HPP
# define CPP_POOL_FORM_HPP

#include <iostream>
#include "../includes/Bureaucrat.hpp"

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
		const char* what() const throw() {
			return "grade is too high to sign!";
		}
	};
	class GradeTooLowException : public std::exception {
	public:
		const char* what() const throw() {
			return "grade is too low to sign!";
		}
	};

	std::string		getName() const;
	bool			getSigned() const;
	int				getGradeToSign() const;
	int				getGradeToExecute() const;

	void			beSigned(Bureaucrat const &bureaucrat);
	void			signForm(Bureaucrat const &bureaucrat);
	virtual void	execute(Bureaucrat const &executor) const = 0;
};

std::ostream&	operator<<(std::ostream &os, Form &form);

#endif
