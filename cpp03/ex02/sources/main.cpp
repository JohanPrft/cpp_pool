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
#include "../includes/FragTrap.hpp"

int main( void ) {
	FragTrap	frag("CT000");
	ScavTrap	scav("SC4V-TP");

	scav.beRepaired(0);
	frag.highFivesGuys();

	for (int i = 0; i < 2; i++) {
		scav.attack(frag.getName());
		frag.takeDamage(scav.getAttackDamage());
	}

	for (int i = 0; i < 5; i++) {
		frag.attack(scav.getName());
		scav.takeDamage(frag.getAttackDamage());
	}

	frag.attack(scav.getName());
	scav.beRepaired(1);
	return (0);}