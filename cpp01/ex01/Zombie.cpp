/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erecuero <erecuero@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/14 12:00:35 by erecuero          #+#    #+#             */
/*   Updated: 2022/02/14 12:20:57 by erecuero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie ( void ) : _name("ldefault") {

	return ;
}

Zombie::~Zombie ( void ) {
	std::cout << this->_name << " was exterminated!!" << std::endl;
	return ;
}

void	Zombie::setName( std::string name ) {

	this->_name = name;
}

void	Zombie::announce( void ) {
	
	std::cout << this->_name << ": BraiiiiiiinnnzzzZ..." << std::endl;
	return ;
}
