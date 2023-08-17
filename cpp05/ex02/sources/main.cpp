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

void	testForm(Bureaucrat &bureaucrat, Form &form)
{
	form.signForm(bureaucrat);
//	std::cout << form.getName() << " status is ";
//	if (form.getSigned())
//		std ::cout << "signed" << std::endl;
//	else
//		std ::cout << "not signed" << std::endl;
}

int main()
{
	Bureaucrat	ceo("Math", 1);
	Bureaucrat	director("Sash", 5);
	Bureaucrat	manager("Thomas", 10);
	Bureaucrat	employee("Anto", 50);
	Bureaucrat	intern("Esteban", 150);

	Form		doc1("selling the company", 1, 1);
	Form		doc2("firing someone", 5, 5);
	Form		doc3("set tasks to do", 10, 10);
	Form		doc4("coffee break", 150, 150);

	std::cout << doc1;
	std::cout << doc2;
	std::cout << doc3;
	std::cout << doc4;
	std::cout << std::endl;

	testForm(intern, doc4);
	testForm(employee, doc2);
	testForm(ceo, doc3);
	testForm(manager, doc1);
	return 0;
}
