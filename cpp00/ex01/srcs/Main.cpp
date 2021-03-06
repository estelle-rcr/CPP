/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erecuero <erecuero@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/26 15:44:01 by erecuero          #+#    #+#             */
/*   Updated: 2022/02/14 12:20:41 by erecuero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/PhoneBook.hpp"
#include <stdlib.h> 

int 	Contact::_nbInst = 0;

void	intro( void ) {

	std::cout << "\n> Please select one of the following functions: " << std::endl;
	std::cout << "-> enter 'ADD' for adding a new contact" << std::endl;
	std::cout << "-> enter 'SEARCH' for displaying a contact information" << std::endl;
	std::cout << "-> enter 'EXIT' for existing (you'll lose all the contacts)" << std::endl;
}

bool	searchFunBook( PhoneBook funbook ) {

	std::string				input;
	int						index(-1);
	std::string::size_type	sz;

	if (funbook.searchContact() == false)
		std::cout << "\nNo contact to be displayed yet.\n" << std::endl;
	else {
		do {
			std::cout << "> Select an index: " << std::endl;
			if (!getline(std::cin, input, '\n')) {
				std::cout << "error in input\n";
				return false;
			}
			else if (input.length() == 1 && std::isdigit(input[0]))
				index = input[0] - '0';
		} while (index < 0 || index >= funbook.getIsSet());
		funbook.displayContact(index);
	}
	return true;
}

int	main( void ) {

	PhoneBook funbook("First Name", "Last Name", "Nick Name", "Phone Number", "Darkest secret");
	std::string	input;

	std::cout << "Welcome in your FunBook!" << std::endl;
	do {
		intro();
		if (!getline(std::cin, input, '\n')) {
			std::cout << "\nerror in input\n" << std::endl;
			return 1;
		}
		if (input.compare("ADD") == 0) {
			if (funbook.addContact() == false) {
				std::cout << "\nerror in adding a contact" << std::endl;
				return 1;
			}
		}
		else if (input.compare("SEARCH") == 0)
			if (searchFunBook(funbook) == false)
				return 1;				
	} while (input != "EXIT");
	return 0;
}
