/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erecuero <erecuero@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/21 17:09:58 by erecuero          #+#    #+#             */
/*   Updated: 2022/03/07 15:51:45 by erecuero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed( void ) : _rawBits( 0 ) {

	std::cout << "Default constructor called" << std::endl;
	return ;
}

Fixed::Fixed( int const i ) {

	std::cout << "Int constructor called" << std::endl;
	this->_rawBits = i << this->_bits;
	return ;
}

Fixed::Fixed( float const f ) {

	std::cout << "Float constructor called" << std::endl;
	this->_rawBits = (int)roundf((f * (1 << this->_bits)));
	return ;
}

Fixed::Fixed( Fixed const & src ) {

	std::cout << "Copy constructor called" << std::endl;
	*this = src;
	return ;
}

Fixed::~Fixed() {

	std::cout << "Destructor called" << std::endl;
	return ;
}

int		Fixed::getRawBits( void ) const {

	std::cout << "getRawBits member function called" << std::endl;
	return this->_rawBits;
}

void	Fixed::setRawBits( int const raw ) {

	std::cout << "setRawBits member function called" << std::endl;
	this->_rawBits = raw;
}

float			Fixed::toFloat ( void ) const
{
	return ((float)this->_rawBits / (1 << this->_bits));
}

int				Fixed::toInt ( void ) const
{
	return (this->_rawBits >> this->_bits);
}

Fixed & Fixed::operator=( Fixed const & rhs ) {

	std::cout << "Copy assignment operator called" << std::endl;
	if ( this != &rhs )
		this->_rawBits = rhs._rawBits;
	return *this;
}

std::ostream & operator<<( std::ostream & o, Fixed const & i ) {

	o << i.toFloat();
	return o;
}
