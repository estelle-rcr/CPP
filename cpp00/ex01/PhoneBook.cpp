/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erecuero <erecuero@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/06 18:28:44 by erecuero          #+#    #+#             */
/*   Updated: 2022/01/25 15:33:41 by erecuero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include "Contact.hpp"

PhoneBook::PhoneBook( void )
{
	return;
}

PhoneBook::~PhoneBook( void )
{
	return;
}

Contact::Contact( void )
{
	Contact::_nbInst += 1;
	return;
}