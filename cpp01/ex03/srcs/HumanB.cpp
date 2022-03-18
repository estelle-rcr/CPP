/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erecuero <erecuero@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/14 14:20:00 by erecuero          #+#    #+#             */
/*   Updated: 2022/03/18 18:00:51 by erecuero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB ( std::string name ) : _name( name ) {

	return ;
}

HumanB::~HumanB ( void ) {

	return ;
}

void	HumanB::setWeapon( Weapon &weapon ) {
	this->_weapon = &weapon;
}

void	HumanB::attack(void) {

	if (this->_weapon)
		std::cout << this->_name << " attacks with their " << this->_weapon->getType() << std::endl;
	else
		std::cout << this->_name << " doesn't have a weapon " << std::endl;
}
