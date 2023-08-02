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

#include "../includes/Point.hpp"
#include <iostream>

bool bsp( Point a, Point b, Point c, Point point);

int main( void ) {
	Point a(1.0f, 1.0f);
	Point b(1.0f, 2.0f);
	Point c(2.0f, 1.0f);
	Point point(1.5f, 1.5f);
	if (bsp(a, b, c, point))
		std::cout << "Point is in the triangle" << std::endl;
	else
		std::cout << "Point is not in the triangle" << std::endl;
	return 0;
}