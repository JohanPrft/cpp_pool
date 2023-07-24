/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jprofit <jprofit@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/21 14:36:30 by jprofit           #+#    #+#             */
/*   Updated: 2023/07/21 14:36:30 by jprofit          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Zombie.hpp"

Zombie::Zombie() {
	std::cout << "A zombie appears!" << std::endl;
}

Zombie::~Zombie() {
	std::cout << "Zombie " << _name << " died." << std::endl;
}

void Zombie::setName(std::string name) {
	_name = name;
}

std::string	Zombie::_getName() const {
	return (_name);
}

void	Zombie::announce() const {
	std::cout << _getName() << ": BraiiiiiiinnnzzzZ..." << std::endl;
}
