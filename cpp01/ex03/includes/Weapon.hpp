/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jprofit <jprofit@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/24 18:28:07 by jprofit           #+#    #+#             */
/*   Updated: 2023/07/24 18:28:07 by jprofit          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
#define WEAPON_HPP

#include <string>
#include <iostream>

class	Weapon{

private:
	std::string	_type;

public:
	Weapon(std::string	type);
	~Weapon();

	std::string	getType() const;

	void		setType(std::string);
};

#endif
