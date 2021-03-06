/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erecuero <erecuero@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/14 14:19:58 by erecuero          #+#    #+#             */
/*   Updated: 2022/02/16 13:39:56 by erecuero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon( std::string type ) : _type(type) {

	return ;
}

Weapon::~Weapon( void ) {

	return ;
}

std::string const &	Weapon::getType( void ) const {

	return this->_type;
}

std::string const & Weapon::setType( std::string newType ) {

	this->_type = newType;
	return this->_type;
}
