#ifndef CPP_POOL_FORM_HPP
# define CPP_POOL_FORM_HPP

# include <iostream>
# include "Bureaucrat.hpp"

class Bureaucrat;

class AForm {

private:
	std::string const	_name;
	bool				_signed;
	int const			_gradeToSign;
	int const			_gradeToExecute;

public:
	AForm();
	AForm(const AForm &src);
	AForm &operator=(const AForm &cpy);
	virtual ~AForm();
	AForm(std::string const name, int const gradeToSign, int const gradeToExecute);

	class GradeTooHighException : public std::exception {
	public:
		const char* what() const throw();
	};
	class GradeTooLowException : public std::exception {
	public:
		const char* what() const throw();
	};
	class FormNotSignedException : public std::exception
	{
	public :
		const char* what() const throw();
	};

	std::string		getName() const;
	bool			getSigned() const;
	int				getGradeToSign() const;
	int				getGradeToExecute() const;

	void			beSigned(Bureaucrat const &bureaucrat);
	virtual void	execute(Bureaucrat const &executor) const = 0;
};

std::ostream&	operator<<(std::ostream &os, AForm &form);

#endif
