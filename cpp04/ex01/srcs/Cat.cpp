/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erecuero <erecuero@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/28 12:14:51 by erecuero          #+#    #+#             */
/*   Updated: 2022/03/01 16:09:53 by erecuero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Cat.hpp"

Cat::Cat( void ) : _type( "cat" ) {

	std::cout << "Cat default constructor called" << std::endl;
	this->_brain = new Brain();
}

Cat::Cat( Cat const & src ) {

	std::cout << "Cat copy constructor called" << std::endl;
	*this = src;
	return ;
}

Cat::~Cat() {

	std::cout << "Cat destructor called" << std::endl;
	delete this->_brain;
	return ;
}

Cat &	Cat::operator=( Cat const & rhs ) {

	Animal::operator=(rhs);
	this->_brain = new Brain(*rhs._brain);
	return (*this);
}

void		Cat::makeSound(void) const {

	std::cout << "Meooowwwww" << std::endl;
}

std::string	Cat::getType( void ) const {

	return this->_type;
}

std::string	&Cat::getIdea( int nb ) {

	return this->_brain->getIdea(nb);
}

void		Cat::setIdea( int nb, std::string idea ) {

	this->_brain->setIdea(nb, idea);
}
