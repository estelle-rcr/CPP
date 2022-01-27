/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erecuero <erecuero@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/06 18:28:44 by erecuero          #+#    #+#             */
/*   Updated: 2022/01/27 15:50:54 by erecuero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

Contact	_contacts[8] {};

PhoneBook::PhoneBook( void ) {

	this->_nbContacts = 0;
	return;
}

PhoneBook::~PhoneBook( void ) {

	return;
}

bool	PhoneBook::addContact( void ) {
	
	bool ret (false);

	if (this->_nbContacts < 8)
	{
		Contact	newContact;
		this->_nbContacts = newContact.getNbInst();
		ret = newContact.createContact(this->_nbContacts);
		if (ret == true)
		{
			if (sizeof(this->_contacts) / sizeof(Contact) > this->_nbContacts)
				this->_contacts[this->_nbContacts].removeAttributes();
			this->_contacts[this->_nbContacts] = newContact;
		}
		return ret;
	}
	else if (this->_nbContacts >= 8)
	{
		this->_nbContacts = 0;
		this->_contacts[this->_nbContacts].removeAttributes();
		ret = addContact();
		return ret;
	}
	return ret;
}

bool	PhoneBook::searchContact( void ) const {

// do something
}

