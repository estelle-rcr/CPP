/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erecuero <erecuero@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/06 18:28:49 by erecuero          #+#    #+#             */
/*   Updated: 2022/02/10 15:13:10 by erecuero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_CLASS_H
# define PHONEBOOK_CLASS_H

#include <iostream>
#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <iomanip>
#include <cctype>
#include "Contact.hpp"

#define NB_CONTACTS 8

class PhoneBook {

public:

	std::string	attributes[5];

	PhoneBook(std::string a1, std::string a2, std::string a3, std::string a4, std::string a5);
	~PhoneBook();

	bool	addContact( void );
	bool	searchContact( void ) const;
	bool	displayContact( int index ) const;
	int		getIsSet( void ) const;

private:

	int		_index;
	int		_isSet;
	Contact	_contacts[NB_CONTACTS];
	
};

#endif
