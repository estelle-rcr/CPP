/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erecuero <erecuero@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/28 12:07:03 by erecuero          #+#    #+#             */
/*   Updated: 2022/03/02 15:05:21 by erecuero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal( void ) : _type( "default_animal" ) {

	std::cout << "Animal default constructor called" << std::endl;
}

Animal::Animal( std::string type ) : _type( type ) {

	std::cout << "Animal surcharge constructor called" << std::endl;
}

Animal::Animal( Animal const & src ) {

	std::cout << "Animal copy constructor called" << std::endl;
	*this = src;
	return ;
}

Animal::~Animal() {

	std::cout << "Animal destructor called" << std::endl;
	return ;
}

Animal &	Animal::operator=( Animal const & rhs ) {

	this->_type = rhs._type;
	return (*this);
}

void		Animal::makeSound(void) const {

	std::cout << "?&%!!/;?" << std::endl;
}

std::string	Animal::getType( void ) const {

	return this->_type;
}
