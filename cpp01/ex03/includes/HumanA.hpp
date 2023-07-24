/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jprofit <jprofit@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/24 17:27:42 by jprofit           #+#    #+#             */
/*   Updated: 2023/07/24 17:27:42 by jprofit          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
#define HUMANA_HPP

#include "Weapon.hpp"

class	HumanA
{
private:
	std::string const	_name;
	Weapon				&_weapon;

public:
	HumanA(std::string name, Weapon &weapon);
	~HumanA();

	void	attack() const;
};

#endif
