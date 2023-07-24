/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jprofit <jprofit@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/24 17:06:13 by jprofit           #+#    #+#             */
/*   Updated: 2023/07/24 17:06:13 by jprofit          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
#define HUMANB_HPP

#include "Weapon.hpp"

class	HumanB
{
private:
	std::string const	_name;
	Weapon				*_weapon;

public:
	HumanB(std::string const name);
	~HumanB();

	void	attack() const;
	void	setWeapon(Weapon weapon);
};

#endif
