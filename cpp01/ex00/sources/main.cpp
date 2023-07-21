/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jprofit <jprofit@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/21 15:10:09 by jprofit           #+#    #+#             */
/*   Updated: 2023/07/21 15:10:09 by jprofit          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Zombie.hpp"

Zombie* newZombie(std::string name);
void	randomChump(std::string name);

int	main() {
	randomChump("Stack");
	Zombie	*heap = newZombie("Heap");
	heap->announce();
	delete heap;
	return (0);
}