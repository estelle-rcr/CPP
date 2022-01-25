/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erecuero <erecuero@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/06 18:28:49 by erecuero          #+#    #+#             */
/*   Updated: 2022/01/25 16:44:28 by erecuero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_CLASS_H
# define PHONEBOOK_CLASS_H

#include <iostream>
#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include "Contact.hpp"

class PhoneBook {

public:
	PhoneBook();
	~PhoneBook();

	void	exit(void) const;
	int		addContact(void) const;
	int		searchContact();

	static int	getCommand( void );

private:
	Contact	contacts[8];

};

#endif