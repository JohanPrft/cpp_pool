/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jprofit <jprofit@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/01 12:15:10 by jprofit           #+#    #+#             */
/*   Updated: 2023/08/01 12:15:10 by jprofit          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Point.hpp"

bool bsp( Point const a, Point const b, Point const c, Point const point)
{
	Fixed d1, d2, d3;
	bool has_neg, has_pos;

	d1 = Point::CrossProduct(a, b, point);
	d2 = Point::CrossProduct(b, c, point);
	d3 = Point::CrossProduct(c, a, point);

	std::cout << "d1 = " << d1 << std::endl;
	std::cout << "d2 = " << d2 << std::endl;
	std::cout << "d3 = " << d3 << std::endl;

	has_neg = (d1 < 0) || (d2 < 0) || (d3 < 0);
	has_pos = (d1 > 0) || (d2 > 0) || (d3 > 0);
	return !(has_neg && has_pos);
}
