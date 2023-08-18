/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jprofit <jprofit@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/26 16:53:00 by jprofit           #+#    #+#             */
/*   Updated: 2023/07/26 16:53:00 by jprofit          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/AForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "ShrubberyCreationForm.hpp"

int main()
{
	try
	{
		Bureaucrat	intern("Esteban", 150);
		AForm		*Robotomy = new RobotomyRequestForm("Gaston");

		std::cout << *Robotomy << std::endl;
		intern.signForm(*Robotomy);
		intern.executeForm(*Robotomy);
		delete Robotomy;
	}
	catch (std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	std::cout << std::endl;
	try
	{
		Bureaucrat	director("Sash", 5);
		AForm		*Shrubbery = new ShrubberyCreationForm("garden");

		std::cout << *Shrubbery << std::endl;
		director.signForm(*Shrubbery);
		director.executeForm(*Shrubbery);
		delete Shrubbery;
	}
	catch (std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	std::cout << std::endl;
	try
	{
		Bureaucrat	ceo("Math", 1);
		AForm		*Presidential = new PresidentialPardonForm("Gaston");

		std::cout << *Presidential << std::endl;
		ceo.signForm(*Presidential);
		ceo.executeForm(*Presidential);
		delete Presidential;
	}
	catch (std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	std::cout << std::endl;
	try
	{
		Bureaucrat	error("Math", 0);
		AForm		*Presidential = new PresidentialPardonForm("Gaston");

		std::cout << *Presidential << std::endl;
		error.signForm(*Presidential);
		error.executeForm(*Presidential);
		delete Presidential;
	}
	catch (std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	return 0;
}
