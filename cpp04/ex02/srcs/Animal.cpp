/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erecuero <erecuero@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/28 12:07:03 by erecuero          #+#    #+#             */
/*   Updated: 2022/03/01 16:35:57 by erecuero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AAnimal.hpp"

AAnimal::AAnimal( void ) : _type( "default_animal" )  {

	std::cout << "AAnimal default constructor called" << std::endl;
}

AAnimal::AAnimal( AAnimal const & src ) {

	std::cout << "AAnimal copy constructor called" << std::endl;
	*this = src;
	return ;
}

AAnimal::~AAnimal() {

	std::cout << "AAnimal destructor called" << std::endl;
	return ;
}

AAnimal &	AAnimal::operator=( AAnimal const & rhs ) {

	this->_type = rhs._type;
	return (*this);
}

void		AAnimal::makeSound(void) const {

	std::cout << "?&%!!/;?" << std::endl;
}

std::string	AAnimal::getType( void ) const {

	return this->_type;
}
