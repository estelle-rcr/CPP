/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erecuero <erecuero@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/21 17:09:58 by erecuero          #+#    #+#             */
/*   Updated: 2022/02/21 17:44:17 by erecuero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed( void ) : _value( 0 ) {

	std::cout << "Default constructor called" << std::endl;
	return ;
}

Fixed::~Fixed() {

	std::cout << "Destructor called" << std::endl;
	return ;
}

Fixed::Fixed( Fixed const & src ) {

	std::cout << "Copy constructor called" << std::endl;
	*this = src;
	return ;
}

Fixed & Fixed::operator=( Fixed const & rhs ) {

	std::cout << "Copy assignment operator called" << std::endl;
	if ( this != &rhs )
		this->_value = rhs.getRawBits();

	return *this;
}

int		Fixed::getRawBits( void ) const {

	std::cout << "getRawBits member function called" << std::endl;
	return this->_value;
}

int		Fixed::setRawBits( int const raw ) {

	std::cout << "setRawBits member function called" << std::endl;
	this->_value = raw;
	return  this->_value;
}

std::ostream & operator<<( std::ostream & o, Fixed const & i ) {
	
	o << i.getRawBits();

	return o;
}
