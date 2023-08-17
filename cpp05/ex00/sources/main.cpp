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

#include "../includes/Bureaucrat.hpp"

void	testBureaucrat(std::string name, int grade){
	try
	{
		Bureaucrat bur(name, grade);
		std::cout << "Create " << bur << std::endl;
	}
	catch (Bureaucrat::GradeTooHighException &e)
	{
		std::cout << e.what() << std::endl;
	}
	catch (Bureaucrat::GradeTooLowException &e)
	{
		std::cout << e.what() << std::endl;
	}
}

int main()
{
	testBureaucrat("Johan", 150);
	testBureaucrat("Mounir", 1);
	testBureaucrat("Fail", 151);
	testBureaucrat("Fail2", 0);
	std::cout << std::endl;

	try {
		Bureaucrat bur("Johan", 150);
		std::cout << bur << std::endl;
		bur.decrementGrade();
		std::cout << bur << std::endl;
	}
	catch (Bureaucrat::GradeTooHighException &e)
	{
		std::cout << e.what() << std::endl;
	}
	catch (Bureaucrat::GradeTooLowException &e)
	{
		std::cout << e.what() << std::endl;
	}
	std::cout << std::endl;

	try {
		Bureaucrat bur("Mounir", 2);
		std::cout << bur << std::endl;
		bur.incrementGrade();
		std::cout << bur << std::endl;
		bur.incrementGrade();
		std::cout << bur << std::endl;
	}
	catch (Bureaucrat::GradeTooHighException &e)
	{
		std::cout << e.what() << std::endl;
	}
	catch (Bureaucrat::GradeTooLowException &e)
	{
		std::cout << e.what() << std::endl;
	}
	return 0;
}