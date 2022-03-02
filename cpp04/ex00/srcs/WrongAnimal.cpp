/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erecuero <erecuero@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/28 12:07:03 by erecuero          #+#    #+#             */
/*   Updated: 2022/03/02 13:54:41 by erecuero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal( void ) : _type( "wrong_animal" ) {

	std::cout << "WrongAnimal default constructor called" << std::endl;
}

WrongAnimal::WrongAnimal( std::string type ) : _type( type ) {

	std::cout << "Animal surcharge constructor called" << std::endl;
}

WrongAnimal::WrongAnimal( WrongAnimal const & src ) {

	std::cout << "WrongAnimal copy constructor called" << std::endl;
	*this = src;
	return ;
}

WrongAnimal::~WrongAnimal() {

	std::cout << "WrongAnimal destructor called" << std::endl;
	return ;
}

WrongAnimal &	WrongAnimal::operator=( WrongAnimal const & rhs ) {

	this->_type = rhs._type;
	return (*this);
}

void		WrongAnimal::makeSound(void) const {

	std::cout << "?&%!!/;?" << std::endl;
}

std::string	WrongAnimal::getType( void ) const {

	return this->_type;
}
