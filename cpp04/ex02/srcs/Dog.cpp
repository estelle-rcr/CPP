/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erecuero <erecuero@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/28 12:15:44 by erecuero          #+#    #+#             */
/*   Updated: 2022/03/01 16:37:24 by erecuero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Dog.hpp"

Dog::Dog( void ) : _type( "dog" ) {

	std::cout << "Dog default constructor called" << std::endl;
	this->_brain = new Brain();
}

Dog::Dog( Dog const & src ) {

	std::cout << "Dog copy constructor called" << std::endl;
	*this = src;
	return ;
}

Dog::~Dog() {

	std::cout << "Dog destructor called" << std::endl;
	delete this->_brain;
	return ;
}

Dog &	Dog::operator=( Dog const & rhs ) {

	AAnimal::operator=(rhs);
	this->_brain = new Brain(*rhs._brain);
	return (*this);
}

void	Dog::makeSound(void) const {

	std::cout << "Waarrrfff" << std::endl;
}

std::string	Dog::getType( void ) const {

	return this->_type;
}
