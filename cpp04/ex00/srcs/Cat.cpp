/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erecuero <erecuero@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/28 12:14:51 by erecuero          #+#    #+#             */
/*   Updated: 2022/03/01 19:07:13 by erecuero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat( void ) : _type( "cat" ) {

	std::cout << "Cat default constructor called" << std::endl;
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

Cat &	Cat::operator=( Cat const & rhs ) {

	Animal::operator=(rhs);
	return (*this);
}

void		Cat::makeSound(void) const {

	std::cout << "Meooowwwww" << std::endl;
}
/*
std::string	Cat::getType( void ) const {

	return this->_type;
}
*/
