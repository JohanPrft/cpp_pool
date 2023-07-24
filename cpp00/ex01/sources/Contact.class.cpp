/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jprofit <jprofit@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/19 18:05:12 by jprofit           #+#    #+#             */
/*   Updated: 2023/07/19 18:05:12 by jprofit          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Contact.class.hpp"

Contact::Contact(){
	return ;
}

Contact::~Contact() {
	return ;
}

bool Contact::fillFirstName() {
	std::cin >> _firstName;
	if (!std::cin)
		return (false);
	return (true);
}

bool Contact::fillLastName() {
	std::cin >> _lastName;
	if (!std::cin)
		return (false);
	return (true);
}

bool Contact::fillNickname() {
	std::cin >> _nickname;
	if (!std::cin)
		return (false);
	return (true);
}

bool Contact::fillPhoneNumber() {
	std::cin >> _phoneNumber;
	if (!std::cin)
		return (false);
	return (true);
}

bool Contact::fillSecret() {
	std::cin >> _secret;
	if (!std::cin)
		return (false);
	return (true);
}

std::string Contact::getFirstName() const {
	return (_firstName);
}

std::string Contact::getLastName() const {
	return (_lastName);
}

std::string Contact::getNickname() const {
	return (_nickname);
}

std::string Contact::getPhoneNumber() const {
	return (_phoneNumber);
}

std::string Contact::getSecret() const {
	return (_secret);
}
