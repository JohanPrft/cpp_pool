/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jprofit <jprofit@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/21 11:17:37 by jprofit           #+#    #+#             */
/*   Updated: 2023/08/21 11:17:37 by jprofit          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Base.hpp"
#include "../includes/A.hpp"
#include "../includes/B.hpp"
#include "../includes/C.hpp"

Base * generate(void)
{
	int random = rand() % 3;


	switch (random)
	{
		case 0:
			std::cout << "Generated:	A" << std::endl;
			return (new A);
		case 1:
			std::cout << "Generated:	B" << std::endl;
			return (new B);
		case 2:
			std::cout << "Generated:	C" << std::endl;
			return (new C);
	}
	return (NULL);
}

void identify(Base* p) {
	std::cout << "Pointer id:	";
	if (dynamic_cast<A*>(p) != NULL) {
		std::cout << "A" << std::endl;
	} else if (dynamic_cast<B*>(p) != NULL) {
		std::cout << "B" << std::endl;
	} else if (dynamic_cast<C*>(p) != NULL) {
		std::cout << "C" << std::endl;
	} else {
		std::cout << "Unknown object type" << std::endl;
	}
}

void identify(Base& p)
{
	std::cout << "Reference id:	";
	try
	{
		(void) dynamic_cast<A &>(p);
		std::cout << "A" << std::endl;
	}
	catch (std::exception & e) { }
	try
	{
		(void) dynamic_cast<B &>(p);
		std::cout << "B" << std::endl;
	}
	catch (std::exception & e) { }
	try
	{
		(void) dynamic_cast<C &>(p);
		std::cout << "C" << std::endl;
	}
	catch (std::exception & e) { }}

int main()
{
	Base *base;
	std::srand(std::time(NULL));

	for (int i = 0; i < 10; i++)
	{
		base = generate();
		if (base == NULL)
			return 1;
		identify(*base);
		identify(base);
		delete base;
		std::cout << std::endl;
	}
	return 0;
}