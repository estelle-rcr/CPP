/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erecuero <erecuero@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/25 16:33:54 by erecuero          #+#    #+#             */
/*   Updated: 2022/01/28 13:19:34 by erecuero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

int 	Contact::_nbInst = 0;

Contact::Contact( void ) {

	Contact::_nbInst += 1;
	this->attributes[0] = "Last Name";
	this->attributes[1] = "First Name";
	this->attributes[2] = "Nick Name";
	this->attributes[3] = "Phone Number";
	this->attributes[4] = "Darkest secret";
	return;
}

Contact::~Contact( void ) {

	Contact::_nbInst -= 1;
	return;
}

bool	Contact::setAttribute( std::string attribute, std::string _local) {

	std::string	buffer;

	std::cout << attribute << " : ";
	if (!std::getline(std::cin, buffer, '\n'))
	{
		std::cout << "error in input\n";
		return false;
	}
	else if (std::cin.eof())
	{
		_local = buffer;
		return true;
	}
	else
	{
		std::cout << "error: missing end-of-file\n";
		return false;
	}
}

bool	Contact::createContact( int indexInput ) {

	std::cout << "Adding a new contact" << std::endl;
	if (!Contact::setAttribute(this->attributes[0], this->_lastName)
		|| !Contact::setAttribute(this->attributes[1], this->_firstName)
		|| !Contact::setAttribute(this->attributes[2], this->_nickName)
		|| !Contact::setAttribute(this->attributes[3], this->_phoneNb)
		|| !Contact::setAttribute(this->attributes[4], this->_darkestSecret))
		return false;
	this->_index = indexInput;
	return true;
}

std::string	Contact::getAttribute( std::string attribute ) const {

	std::string	buffer;
	int			i = 0;

	if (this->_index)
	{
		while (this->attributes[i] != attribute)
			i++;
		switch (i)
		{
			case 0:
				return this->_lastName;
			case 1:
				return this->_firstName;
			case 2:
				return this->_nickName;
			case 3:
				return this->_phoneNb;
			case 4:
				return this->_darkestSecret;
		}
	}
	return NULL;
}

int		Contact::getIndex( void ) const {

	return this->_index;
}

void	Contact::removeAttributes( void )
{
	if (this->_lastName.empty() == false)		//.isSet ?
		this->_lastName.clear();
	if (this->_firstName.empty() == false)
		this->_firstName.clear();
	if (this->_nickName.empty() == false)
		this->_nickName.clear();
	if (this->_phoneNb.empty() == false)
		this->_phoneNb.clear();
	if (this->_darkestSecret.empty() == false)
		this->_darkestSecret.clear();
}

int		Contact::getNbInst( void ) {

	return Contact::_nbInst;
}
