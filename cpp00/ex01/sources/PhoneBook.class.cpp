/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.class.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jprofit <jprofit@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/20 11:59:41 by jprofit           #+#    #+#             */
/*   Updated: 2023/07/20 11:59:41 by jprofit          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "../includes/PhoneBook.class.hpp"

PhoneBook::PhoneBook() {
	_index = 0;
	return;
}

PhoneBook::~PhoneBook() {
	return;
}

bool	PhoneBook::addContact() {
	_index = _index % 8;
	std::cout << "First name: ";
	_contactList[_index].fillFirstName();
	std::cout << "Last name: ";
	_contactList[_index].fillLastName();
	std::cout << "Nickname: ";
	_contactList[_index].fillNickname();
	std::cout << "Phone number: ";
	_contactList[_index].fillPhoneNumber();
	std::cout << "Darkest secret: ";
	_contactList[_index].fillSecret();
	std::cout << "Contact added successfully !" << std::endl;
	_index++;
	return (true);
}

std::string	PhoneBook::_formatString(std::string info){
	if (info.length() > 10)
	{
		info.resize(9);
		info+= ".";
	}
	return (info);
}

void	PhoneBook::_printContactFormated(int index){
	std::cout << "|" << std::setw(10) << index + 1 << "|";

	std::string	firstName = _contactList[index].getFirstName();
	firstName = PhoneBook::_formatString(firstName);
	std::cout << std::setw(10) << firstName << "|";

	std::string	lastName = _contactList[index].getLastName();
	lastName = PhoneBook::_formatString(lastName);
	std::cout << std::setw(10) <<lastName << "|";

	std::string	nickname = _contactList[index].getNickname();
	nickname = PhoneBook::_formatString(nickname);
	std::cout << std::setw(10) << nickname << "|" <<std::endl;
	std::cout	<< "+----------+----------+----------+----------+" << std::endl;
}

bool PhoneBook::printContactList(){
	if (_contactList[0].getFirstName().empty())
	{
		std::cout << "No contact saved for now !" << std::endl;
		return (0);
	}
	std::cout	<< "+----------+----------+----------+----------+" << std::endl
				<< "|  INDEX   |FIRST NAME| LAST NAME| NICKNAME |" << std::endl
				<< "+----------+----------+----------+----------+" << std::endl;
	for (int i = 0; i < 8 && !_contactList[i].getFirstName().empty(); i++)
		PhoneBook::_printContactFormated(i);
	return (1);
}

int			PhoneBook::chooseContact(){
	int		index;

	std::cout << "Wich contact do you want more details on ?" << std::endl;
	while (true) {
		std::cin >> index;
		if (std::cin.fail() || std::cin.eof()) {
			std::cin.clear();
			std::cin.ignore();
		}
		index--;
		if (index >= 0 && index <= 7)
			break;
		std::cout << "Please choose between 1 and 8" << std::endl;
	}
	if (_contactList[index].getFirstName().empty())
	{
		std::cout << "Contact doesn't exist" << std::endl;
		return (-1);
	}
	return (index);
}

void		PhoneBook::printContactDetails(int index){
	if (index == -1)
		return;
	std::cout << "First name : " << _contactList[index].getFirstName() << std::endl;
	std::cout << "Last name : " << _contactList[index].getLastName() << std::endl;
	std::cout << "Nickname : " << _contactList[index].getNickname() << std::endl;
	std::cout << "Phone number : " <<_contactList[index].getPhoneNumber() << std::endl;
	std::cout << "Darkest secret : " << _contactList[index].getSecret();
}