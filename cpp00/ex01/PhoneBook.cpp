/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erecuero <erecuero@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/06 18:28:44 by erecuero          #+#    #+#             */
/*   Updated: 2022/01/28 13:54:34 by erecuero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

PhoneBook::PhoneBook( std::string a1, std::string a2, std::string a3, std::string a4, std::string a5 ) {

	this->_index = 0;
//	this->attributes[0] = "Last Name";
//	this->attributes[1] = "First Name";
//	this->attributes[2] = "Nick Name";
//	this->attributes[3] = "Phone Number";
//	this->attributes[4] = "Darkest secret";
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

	bool ret (false);

	if (this->_index < NB_CONTACTS)
	{
		Contact	newContact;
		this->_index++;
		if ((ret = newContact.createContact(this->_index)) == false)
			return ret;
		if (sizeof(this->_contacts) / sizeof(Contact) > this->_index)		// this->_contacts[this->_index].isSet() // newContact._NbInst > this->_index
			this->_contacts[this->_index].removeAttributes();				// not sure if needed (reassignment handled by C++)
		this->_contacts[this->_index] = newContact;							// set up attributes from phonebook attributes
		return ret;
	}
	else if (this->_index >= NB_CONTACTS)
	{
		this->_index = 0;
	//	this->_contacts[this->_index].removeAttributes();			// not necessary if done above (recursive)
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
	if (len <= width)
	{
		cells = (width - len);
		str.insert(str.begin(), 3, ' ');			// a tester
		return str;
	}
	else
		return str.substr(0, width - 1) + '.';
}

bool	PhoneBook::searchContact( void ) const {

	bool	ret (false);

	if (this->_index == 0)
		return false;
	std::cout << "|" << display_cell("INDEX", 10) << "|"
					<< display_cell("FIRST NAME", 10) << "|"
					<< display_cell("LAST NAME", 10) << "|"
					<< display_cell("NICK NAME", 10) << "|"
					<< std::endl;
	for (int i = 0; i < this->_index; i++)
	{
		std::cout << "|" << std::setw(9)
			<< this->_contacts[i].getIndex() << "|"
			<< display_cell(this->_contacts[i].getAttribute(attributes[1]), 10) << "|"
			<< display_cell(this->_contacts[i].getAttribute(attributes[0]), 10) << "|"
			<< display_cell(this->_contacts[i].getAttribute(attributes[2]), 10) << "|"
			<< std::endl;
	}
	return true;
}

bool	PhoneBook::displayContact( int index ) const {

	if (index < 0 || index > NB_CONTACTS)
		return false;
	if (index <= sizeof(this->_contacts) / sizeof(Contact))
	{
		for (int i = 0; i < 4; i++)
			std::cout << this->_contacts[index].getAttribute(attributes[i]) << std::endl;
		return true;
	}
	return false;
}

// std::cout << std::string(45, '-') << std::endl;
//std::cout	<< "|" << center(10, "INDEX")
//				<< "|" << center(10, "FIRST NAME")
// if (this->_contacts[i].isSet())
//		{
//			std::cout	<< "|" << std::setw(5) << i + 1 << std::setw(6)
