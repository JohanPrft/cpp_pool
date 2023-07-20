/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.class.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jprofit <jprofit@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/20 11:55:19 by jprofit           #+#    #+#             */
/*   Updated: 2023/07/20 11:55:19 by jprofit          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_CLASS_HPP
#define PHONEBOOK_CLASS_HPP

#include "../includes/Contact.class.hpp"

#include <iomanip>

class	PhoneBook {

private:
	int		_index;
	Contact	_contactList[8];

	std::string	_formatString(std::string info);
	void		_printContactFormated(int index);
	std::string	_getImput(std::string message);
public:
	PhoneBook(void);

	~PhoneBook(void);
	bool		addContact();
	bool printContactList();
	int			chooseContact();
	void		printContactDetails(int index);
};

#endif //PHONEBOOK_CLASS_HPP
