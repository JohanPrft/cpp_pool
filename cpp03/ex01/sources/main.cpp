/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jprofit <jprofit@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/26 16:53:00 by jprofit           #+#    #+#             */
/*   Updated: 2023/07/26 16:53:00 by jprofit          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ScavTrap.hpp"

int main( void ) {
	ClapTrap	trap("CT000");
	ScavTrap	scav("SC4V-TP");

	scav.beRepaired(0);

	scav.attack(trap.getName());
	trap.takeDamage(scav.getAttackDamage());
	scav.attack(trap.getName());
	trap.takeDamage(scav.getAttackDamage());

	trap.attack(scav.getName());
	scav.beRepaired(1);
	return (0);}