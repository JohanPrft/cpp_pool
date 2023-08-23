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

int main()
{
	int		a = 1;
	int		b = 42;

	std::cout << "a = " << a << " b = " << b << std::endl;
	swap<int>(a, b);
	std::cout << "a = " << a << " b = " << b << std::endl;
	std::cout << min<int>(a,b) << std::endl;
	std::cout << max<int>(a,b) << std::endl;
	std::cout << std::endl;

	float	c = 1.5;
	float	d = 42.5;
	std::cout << "c= " << c<< " d = " << d << std::endl;
	swap<float>(c,d);
	std::cout << "c= " << c<< " d = " << d << std::endl;
	std::cout << min<float>(c,d) << std::endl;
	std::cout << max<float>(c,d) << std::endl;

	return 0;
}
