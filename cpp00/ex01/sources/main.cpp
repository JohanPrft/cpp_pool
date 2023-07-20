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

#include "../includes/Contact.class.hpp"
#include "../includes/PhoneBook.class.hpp"

int	main(void)
{
	PhoneBook	book;
	int			curIndex;

	std::cout << "Welcome to PhoneBook !" << std::endl;
	std::string	userInput;
	curIndex = 0;
	while (true) {
		std::cout << "You can \"ADD\" a contact, \"SEARCH\" for one or \"EXIT\"" << std::endl;
		std::cin >> userInput;

		if (userInput == "ADD")
			book.addContact();
		else if (userInput == "SEARCH")
		{
			if (book.printContactList())
				book.printContactDetails(book.chooseContact() - 1);
		}

		else if (userInput == "EXIT")
			break ;
		else
			std::cout << "! Wrong imput !" << std::endl;
	}

	return (0);
}