/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jprofit <jprofit@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/26 16:53:00 by jprofit           #+#    #+#             */
/*   Updated: 2023/07/27 15:28:09 by jprofit          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Fixed.hpp"
#include <iostream>

int main( void ) {
	Fixed a;
	Fixed b(10.0f);
	Fixed const c( Fixed( 5.05f ) * Fixed( 2 ) );
	std::cout << "a = " << a << std::endl;
	std::cout << "b = " << b << std::endl;
	std::cout << "c = " << c << std::endl;
	std::cout << "\n";

	if (b > a)
		std::cout << "b > a" << std::endl;
	else
		std::cout << "b < a" << std::endl;
	if (b < c)
		std::cout << "b < c" << std::endl;
	else
		std::cout << "b > c" << std::endl;
	if (c >= c)
		std::cout << "c >= c" << std::endl;
	else
		std::cout << "c < c" << std::endl;
	if (a == a)
		std::cout << "a == a" << std::endl;
	else
		std::cout << "a != a" << std::endl;
	if (a != b)
		std::cout << "a != b" << std::endl;
	else
		std::cout << "a == b" << std::endl;
	std::cout << "\n";

	std::cout << "a + b = " << a + b << std::endl;
	std::cout << "a - b = " << a - b << std::endl;
	std::cout << "a * b = " << a * b << std::endl;
	std::cout << "c / a = " << c / a << std::endl;
	std::cout << "\n";

	std::cout << "++a = " << ++a << std::endl;
	std::cout << "a++ = " << a++ << std::endl;
	std::cout << "--b = " << --b << std::endl;
	std::cout << "b-- = " << b-- << std::endl;
	std::cout << "\n";

	std::cout << "min(a, c) = " << Fixed::min(a, c) << std::endl;
	std::cout << "max(b, c) = " << Fixed::max(b, c) << std::endl;
	return 0;
}