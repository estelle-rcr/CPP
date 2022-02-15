/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erecuero <erecuero@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/11 18:02:44 by erecuero          #+#    #+#             */
/*   Updated: 2022/02/11 18:46:42 by erecuero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie ( std::string input ) : _name(input) {

	return ;
}

Zombie::~Zombie ( void ) {
	std::cout << this->_name << " was exterminated!!" << std::endl;
	return ;
}

void Zombie::announce( void ) {
	
	std::cout << this->_name << ": BraiiiiiiinnnzzzZ..." << std::endl;
	return ;
}
