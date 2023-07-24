/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jprofit <jprofit@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/24 17:12:08 by jprofit           #+#    #+#             */
/*   Updated: 2023/07/24 17:41:47 by jprofit          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/HumanA.hpp"

HumanA::HumanA(std::string name, Weapon &weapon) :  _weapon(weapon), _name(name){
}

HumanA::~HumanA() {
}

void	HumanA::attack() const {
	std::cout << _name << " attacks with their " << _weapon.getType();
}