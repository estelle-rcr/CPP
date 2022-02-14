/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erecuero <erecuero@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/14 14:20:02 by erecuero          #+#    #+#             */
/*   Updated: 2022/02/14 17:48:07 by erecuero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA ( std::string name, Weapon weapon ) : _name( name ), _weapon( weapon ) {

	return ;
}

HumanA::~HumanA ( void ) {

	return ;
}

void	HumanA::attack(void) {

	std::cout << this->_name << " attacks with their " << this->_weapon.getType() << std::endl;
}
