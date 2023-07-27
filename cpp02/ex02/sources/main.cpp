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
	Fixed const b( 42.425f );
	Fixed const c( 42.42f );
	std::cout << (b > c) << std::endl;
	return 0;
}