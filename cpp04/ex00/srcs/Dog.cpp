/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erecuero <erecuero@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/28 12:15:44 by erecuero          #+#    #+#             */
/*   Updated: 2022/02/28 12:28:24 by erecuero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog( void ) : _type( "dog" ) {

	std::cout << "Dog default constructor called" << std::endl;
}

Dog::Dog( std::string type ) : _type( type ) {

	std::cout << "Dog surcharge constructor called" << std::endl;
}

Dog::Dog( Dog const & src ) {

	std::cout << "Dog copy constructor called" << std::endl;
	*this = src;
	return ;
}

Dog::~Dog() {

	std::cout << "Dog destructor called" << std::endl;
	return ;
}

void	Dog::makeSound(void) const {

	std::cout << "Waarrrfff" << std::endl;
}

std::string	Dog::getType( void ) const {

	return Animal::getType();
}
