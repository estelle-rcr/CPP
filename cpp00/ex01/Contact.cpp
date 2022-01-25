/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erecuero <erecuero@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/25 16:33:54 by erecuero          #+#    #+#             */
/*   Updated: 2022/01/25 17:59:48 by erecuero         ###   ########.fr       */
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




int	setAttributes( void ) {

	int i;
	char	tmp[4096];

	printf ("Adding a new contact.\n");
	printf ("Enter your first name: ");
	scanf ("%4095s", tmp);
	this->_firstName = tmp;
	printf ("Enter your last name: ");
	scanf ("%4095s", tmp);
	this->_lastName = tmp;
	printf ("Enter your nick name: ");
	scanf ("%4095s", tmp);
	this->_nickName = tmp;
	printf ("Enter your phone number: ");
	scanf ("%d",&i);
	if (tmp)
		this->_phoneNb = tmp;
	printf ("Enter your darkest secret: ");
	scanf ("%4095s", tmp);
	if (tmp)
		this->_nickName = tmp;
}

int	getAttributes( void ) const {


}