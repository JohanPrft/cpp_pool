/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jprofit <jprofit@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/20 09:42:21 by jprofit           #+#    #+#             */
/*   Updated: 2023/07/20 09:42:21 by jprofit          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ostream>
#include "../includes/Contact.class.hpp"
#include "../includes/PhoneBook.class.hpp"

int	main(void)
{
	PhoneBook	book;

	std::cout << "Welcome to PhoneBook !" << std::endl;
	std::string	userInput;
	while (true && std::cin) {
		std::cout << std::endl << "You can \"ADD\" a contact, \"SEARCH\" for one or \"EXIT\"" << std::endl;
		std::cin >> userInput;

		if (userInput == "ADD")
			book.addContact();
		else if (userInput == "SEARCH")
		{
			if (book.printContactList())
				book.printContactDetails(book.chooseContact());
		}
		else if (userInput == "EXIT")
			break ;
		else
			std::cout << "! Wrong input !" << std::endl;
	}

	return (0);
}