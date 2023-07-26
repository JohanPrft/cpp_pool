/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jprofit <jprofit@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/26 11:51:50 by jprofit           #+#    #+#             */
/*   Updated: 2023/07/26 11:51:50 by jprofit          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Harl.hpp"

int	main(int ac, char** av){
	if (ac != 2)
		return (std::cerr << "Usage: ./Harl <debug_level>" << std::endl, 0);
	Harl	karen;
	karen.complain(av[1]);
	return (1);
}