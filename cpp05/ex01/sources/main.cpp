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

#include "../includes/Form.hpp"

int main()
{
	try
	{
		Bureaucrat	intern("Esteban", 150);
		Form	doc1("firing someone", 5, 5);

		std::cout << doc1 << intern << std::endl;
		intern.signForm(doc1);
	}
	catch (std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	std::cout << std::endl;
	try
	{
		Bureaucrat	director("Sash", 5);
		Form	doc2("set tasks to do", 10, 10);

		std::cout << doc2 << director << std::endl;
		director.signForm(doc2);
	}
	catch (std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	std::cout << std::endl;
	try
	{
		Bureaucrat	ceo("Math", 1);
		Form	doc3("coffee break", 150, 150);

		std::cout << doc3 << ceo << std::endl;
		ceo.signForm(doc3);
	}
	catch (std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	std::cout << std::endl;
	try
	{
		Bureaucrat	manager("Thomas", 0);
		Form	doc4("invalid1", 151, 150);
		std::cout << doc4;
		manager.signForm(doc4);
	}
	catch (std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	std::cout << std::endl;
	try
	{
		Bureaucrat	employee("Anto", 50);
		Form	doc5("invalid2", 150, 0);
		std::cout << doc5;
		employee.signForm(doc5);
	}
	catch (std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	return 0;
}
