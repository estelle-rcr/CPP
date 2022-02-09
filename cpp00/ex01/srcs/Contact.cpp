/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erecuero <erecuero@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/25 16:33:54 by erecuero          #+#    #+#             */
/*   Updated: 2022/02/09 17:34:26 by erecuero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/PhoneBook.hpp"


Contact::Contact( void ) {

	Contact::_nbInst += 1;
	this->_index = -1;
	this->attributes[0] = "First Name";
	this->attributes[1] = "Last Name";
	this->attributes[2] = "Nick Name";
	this->attributes[3] = "Phone Number";
	this->attributes[4] = "Darkest secret";
	return;
}

Contact::~Contact( void ) {

	Contact::_nbInst -= 1;
	return;
}

bool	Contact::setAttribute( int i ) {

	std::string	buffer;

	do {
		std::cout << this->attributes[i] << " : ";
		if (!getline(std::cin, buffer, '\n'))
		{
			std::cin.ignore();
			return false;
		}
	} while (buffer.empty() == true);
	switch (i) {
		case 0:
			this->_lastName = buffer;
		case 1:
			this->_firstName = buffer;
		case 2:
			this->_nickName = buffer;
		case 3:
			this->_phoneNb = buffer;
		case 4:
			this->_darkestSecret = buffer;
	}
	return true;
}

bool	Contact::createContact( int indexInput ) {

	std::cout << "\n> Adding a new contact:" << std::endl;
	if (!Contact::setAttribute(0)
		|| !Contact::setAttribute(1)
		|| !Contact::setAttribute(2)
		|| !Contact::setAttribute(3)
		|| !Contact::setAttribute(4))
		return false;
	this->_index = indexInput;
	return true;
}

std::string	Contact::getAttribute( int i ) const {

	switch (i)
	{
		case 0:
			return (this->_lastName);
		case 1:
			return this->_firstName;
		case 2:
			return this->_nickName;
		case 3:
			return this->_phoneNb;
		case 4:
			return this->_darkestSecret;
	}
	return NULL;
}

int		Contact::getIndex( void ) const {

	return this->_index;
}

int		Contact::getNbInst( void ) {

	return Contact::_nbInst;
}
