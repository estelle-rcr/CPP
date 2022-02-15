/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erecuero <erecuero@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/06 18:28:44 by erecuero          #+#    #+#             */
/*   Updated: 2022/02/15 10:14:21 by erecuero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/PhoneBook.hpp"

PhoneBook::PhoneBook( std::string a1, std::string a2, std::string a3, std::string a4, std::string a5 ) {

	this->_index = 0;
	this->_isSet = -1;
	this->attributes[0] = a1;
	this->attributes[1] = a2;
	this->attributes[2] = a3;
	this->attributes[3] = a4;
	this->attributes[4] = a5;
	return;
}

PhoneBook::~PhoneBook( void ) {

	return;
}

bool	PhoneBook::addContact( void ) {

	bool ret(false);

	if (this->_index < NB_CONTACTS) {
		ret = this->_contacts[this->_index].createContact(this->_index);
		if (ret == false)
			return ret;
		this->_index++;
		if (this->_isSet < this->_index)
			this->_isSet = this->_index;
		return ret;
	}
	else if (this->_index >= NB_CONTACTS) {
		this->_index = 0;
		ret = addContact();
		return ret;
	}
	return ret;
}

std::string	display_cell( std::string str, int width ) {

	int cells;
	int	len;
	std::string new_str;

	len = str.length();
	if (len <= width) {
		cells = (width - len);
		str.insert(str.begin(), cells, ' ');
		return str;
	}
	else
		return str.substr(0, width - 1) + '.';
}

bool	PhoneBook::searchContact( void ) const {

	if (this->_index == 0)
		return false;
	std::cout << "\n|" << display_cell("INDEX", 10) << "|"
		<< display_cell("FIRST NAME", 10) << "|"
		<< display_cell("LAST NAME", 10) << "|"
		<< display_cell("NICK NAME", 10) << "|"
		<< std::endl;
	for (int i = 0; i < this->_isSet; i++) {
		if (this->_contacts[i].getIndex() >= 0) {
			std::cout << "|" << std::setw(10)
				<< this->_contacts[i].getIndex() << "|"
				<< display_cell(this->_contacts[i].getAttribute(1), 10) << "|"
				<< display_cell(this->_contacts[i].getAttribute(0), 10) << "|"
				<< display_cell(this->_contacts[i].getAttribute(2), 10) << "|"
				<< std::endl;
		}
	}
	return true;
}

bool	PhoneBook::displayContact( int index ) const {

	if (index < 0 || index >= NB_CONTACTS)
		return false;
	std::cout << std::endl;
	for (int i = 0; i < 5; i++) {
		std::cout << this->_contacts[index].attributes[i] << " : "
		<< this->_contacts[index].getAttribute(i) << std::endl;
	}
	return true;
}

int		PhoneBook::getIsSet( void ) const {

	return PhoneBook::_isSet;
}
