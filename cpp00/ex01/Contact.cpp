/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erecuero <erecuero@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/25 16:33:54 by erecuero          #+#    #+#             */
/*   Updated: 2022/01/26 19:11:26 by erecuero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include "Contact.hpp"

int 	Contact::_nbInst = 0;

Contact::Contact( void ) {

	Contact::_nbInst += 1;
	return;
}

Contact::~Contact( void ) {

	Contact::_nbInst -= 1;
	return;
}

int		Contact::getNbInst( void ) {

	return Contact::_nbInst;
}


int		Contact::setAttribute( std::string attribute, std::string _local) {

	std::string	buffer;

	std::cout << attribute << " : ";
	if (!std::getline(std::cin, buffer, '\n'))
	{
		if (std::cin.eof())
			std::cout << "error: missing end-of-file\n";
		else
			std::cout << "error in input\n";
		return 0;
	}
	else
	{
		_local = buffer;
		return 1;
	}
}

std::string	Contact::getAttribute( std::string attribute ) const {

	std::string	buffer;
	int			i = 0;

	if (this->index)
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

int		Contact::createContact( void ) {

	std::cout << "Adding a new contact" << std::endl;
	if (!Contact::setAttribute(this->attributes[0], this->_lastName)
		|| !Contact::setAttribute(this->attributes[1], this->_firstName)
		|| !Contact::setAttribute(this->attributes[2], this->_nickName)
		|| !Contact::setAttribute(this->attributes[3], this->_phoneNb)
		|| !Contact::setAttribute(this->attributes[4], this->_darkestSecret))
		return 0;
	index = this->_nbInst;
	return 1;
}

void	Contact::removeAttributes( void )
{
	if (this->_lastName.empty() == false)
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
