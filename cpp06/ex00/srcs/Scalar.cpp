/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Scalar.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erecuero <erecuero@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/11 17:08:04 by erecuero          #+#    #+#             */
/*   Updated: 2022/03/23 15:13:17 by erecuero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Scalar.hpp"

Scalar::Scalar( char *entry ) {

	if (std::isprint(entry[0]) && !entry[1] && !std::isdigit(entry[0]))
		this->_entry = static_cast<double>(entry[0]);
	else
		this->_entry = atof(entry);
	setInt(this->_entry);
	setChar(this->_entry);
	setFloat(this->_entry);
	setDouble(this->_entry);
	setSource(entry);
	return ;
}

Scalar::Scalar( Scalar const & src ) : _entry(src._entry) {
	*this = src;
}

Scalar::~Scalar ( void ) {
	return ;
}

// OPERATOR OVERLOADS

Scalar	&Scalar::operator=( Scalar const & rhs ) {
	this->_char = rhs._char;
	this->_int = rhs._int;
	this->_float = rhs._float;
	this->_double = rhs._double;
	this->_entry = rhs._entry;
	return (*this);
}

std::ostream	&operator<<(std::ostream &o, const Scalar &scalar)
{
	scalar.printChar(o);
	scalar.printInt(o);
	scalar.printFloat(o);
	scalar.printDouble(o);
	return (o);
}

void	Scalar::printChar(std::ostream &o) const {

	o << "char : ";
	if (std::isnan(this->_entry) || std::isinf(this->_entry)
		|| this->_entry > CHAR_MAX || this->_entry < CHAR_MIN)
		o << "impossible" << std::endl;
	else if (!std::isprint(this->_char))
		o << "Non displayable" << std::endl;
	else if (this->_char > 31 && this->_char < 127)
		o << "'" << this->getChar() << "'" << std::endl;
}

void	Scalar::printInt(std::ostream &o) const {

	o << "int : ";
	if (std::isnan(this->_entry) || std::isinf(this->_entry)
		|| this->_entry > INT_MAX || this->_entry < INT_MIN)
		o << "impossible" << std::endl;
	else
		o << this->getInt() << std::endl;
}

void	Scalar::printFloat(std::ostream &o) const {

	o << "float : ";
	if (std::isnan(this->_entry) || std::isinf(this->_entry))
		o << this->getFloat() << "f" << std::endl;
	else if (this->getSource().find('.') != std::string::npos) {
		int pos = this->getSource().find('.') + 1;
		if (this->getSource()[pos] == '0') {
			o << this->getFloat() << ".0f" << std::endl;
		}
		else
			o << this->getFloat() << "f" << std::endl;
	}
	else
		o << this->getFloat() << ".0f" << std::endl;
}

void	Scalar::printDouble(std::ostream &o) const {

	o << "double : ";
	if (std::isnan(this->_entry) || std::isinf(this->_entry))
		o << this->getDouble() << std::endl;
	else if (this->getSource().find('.') != std::string::npos) {
		int pos = this->getSource().find('.') + 1;
		if (this->getSource()[pos] == '0') {
			o << this->getDouble() << ".0" << std::endl;
		}
		else
			o << this->getDouble() << std::endl;
	}
	else
		o << this->getDouble() << ".0" << std::endl;
}


// GETTERS

char	Scalar::getChar() const {
	return (this->_char);
}

int		Scalar::getInt() const {
	return (this->_int);
}

float	Scalar::getFloat() const {
	return (this->_float);
}

double	Scalar::getDouble() const {
	return (this->_double);
}

std::string	Scalar::getSource() const {
	return (this->_source);
}


// SETTERS

void	Scalar::setChar(double entry) {
	this->_char = static_cast<char>(entry);
}

void	Scalar::setInt(double entry) {
	this->_int = static_cast<int>(entry);
}

void	Scalar::setFloat(double entry) {
	this->_float = static_cast<float>(entry);
}

void	Scalar::setDouble(double entry) {
	this->_double = entry;
}

void	Scalar::setSource(char *entry) {
	this->_source = entry;
}
