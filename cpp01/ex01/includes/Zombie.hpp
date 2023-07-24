/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jprofit <jprofit@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/21 14:36:53 by jprofit           #+#    #+#             */
/*   Updated: 2023/07/21 14:39:43 by jprofit          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <iostream>
#include <string>

class Zombie {

private:
	std::string	_name;
	std::string	_getName() const;
public:

	Zombie();

	~Zombie();

	void		setName(std::string name);
	void		announce() const;
};


#endif //ZOMBIE_HPP
