/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erecuero <erecuero@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/28 12:14:51 by erecuero          #+#    #+#             */
/*   Updated: 2022/03/02 13:54:22 by erecuero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat( void ) : WrongAnimal( "cat" ) {

	std::cout << "WrongCat default constructor called" << std::endl;
}

WrongCat::WrongCat( WrongCat const & src ) : WrongAnimal( src ) {

	std::cout << "WrongCat copy constructor called" << std::endl;
	*this = src;
	return ;
}

WrongCat::~WrongCat() {

	std::cout << "WrongCat destructor called" << std::endl;
	return ;
}

WrongCat &	WrongCat::operator=( WrongCat const & rhs ) {

	WrongAnimal::operator=(rhs);
	return (*this);
}

void		WrongCat::makeSound(void) const {

	std::cout << "Meooowwwww" << std::endl;
}

std::string	WrongCat::getType( void ) const {

	return this->_type;
}
