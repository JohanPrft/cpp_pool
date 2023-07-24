/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jprofit <jprofit@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/24 17:03:46 by jprofit           #+#    #+#             */
/*   Updated: 2023/07/24 17:03:46 by jprofit          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/HumanB.hpp"

HumanB::HumanB(std::string const name) : _name(name){
}

HumanB::~HumanB() {
}

void	HumanB::attack() const {
	std::cout << _name << " attacks with their " << _weapon.getType();
}

void	HumanB::setWeapon(Weapon weapon){
	_weapon = &weapon;
}