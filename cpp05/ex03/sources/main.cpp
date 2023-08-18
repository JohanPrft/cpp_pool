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
#include "Intern.hpp"

void	testInternFormCreation(Intern const & intern, std::string const formName, std::string const targetName)
{
	try
	{
		static Bureaucrat ceo("Jeff", 1);
		static Bureaucrat manager("Rick", 50);
		static Bureaucrat worker("Morty", 120);

		AForm* form  = intern.makeForm(formName, targetName);
		worker.signForm(*form);
		manager.signForm(*form);
		ceo.executeForm(*form);
		delete form;
	}
	catch (std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}
}

int main()
{
	Intern max;

	testInternFormCreation(max, "shrubbery creation", "amazonie");
	std::cout << std::endl;
	testInternFormCreation(max, "robotomy request", "Zuck");
	std::cout << std::endl;
	testInternFormCreation(max, "presidential pardon", "Jay");
}