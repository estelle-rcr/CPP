/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erecuero <erecuero@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/14 14:20:00 by erecuero          #+#    #+#             */
/*   Updated: 2022/02/14 23:36:48 by erecuero         ###   ########.fr       */
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

	std::cout << this->_name << " attacks with their " << this->_weapon->getType() << std::endl;
}
