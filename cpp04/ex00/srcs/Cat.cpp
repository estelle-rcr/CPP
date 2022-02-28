/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erecuero <erecuero@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/28 12:14:51 by erecuero          #+#    #+#             */
/*   Updated: 2022/02/28 12:28:27 by erecuero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat( void ) : _type( "cat" ) {

	std::cout << "Cat default constructor called" << std::endl;
}

Cat::Cat( std::string type ) : _type( type ) {

	std::cout << "Cat surcharge constructor called" << std::endl;
}

Cat::Cat( Cat const & src ) {

	std::cout << "Cat copy constructor called" << std::endl;
	*this = src;
	return ;
}

Cat::~Cat() {

	std::cout << "Cat destructor called" << std::endl;
	return ;
}

void		Cat::makeSound(void) const {

	std::cout << "Meooowwwww" << std::endl;
}

std::string	Cat::getType( void ) const {

	return Animal::getType();
}
