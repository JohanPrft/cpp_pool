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

#include "../includes/iter.hpp"

int	main(void)
{
	int const	tabSize = 4;
	std::string	tabString[tabSize] = {
			"42",
			"21",
			"Hello",
			"World"
	};
	iter(tabString, tabSize, print);
	std::cout << std::endl;

	int tabInt[tabSize] = {
			42,
			21,
			84,
			168
	};
	iter(tabInt, tabSize, print);

	return 0;
}
