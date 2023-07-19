/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex00.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jprofit <jprofit@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/19 11:41:18 by jprofit           #+#    #+#             */
/*   Updated: 2023/07/19 15:07:32 by jprofit          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

int main(int ac, char **av)
{
	if (ac == 1) {
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
		return (0);
	}

	std::string		str;

	for (int i = 1; i < ac; i++)
		str += av[i];

	std::string::iterator	j = str.begin();
	while (j != str.end()) {
		*j = toupper(*j);
		j++;
	}

	std::cout << str << std::endl;

	return (0);
}

