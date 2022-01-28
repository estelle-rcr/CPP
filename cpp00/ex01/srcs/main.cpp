/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erecuero <erecuero@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/26 15:44:01 by erecuero          #+#    #+#             */
/*   Updated: 2022/01/28 19:14:12 by erecuero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/PhoneBook.hpp"
#include <cctype>

int 	Contact::_nbInst = 0;

void	intro( void ) {

	std::cout << "\n> Please select one of the following functions: " << std::endl;
	std::cout << "-> enter 'ADD' for adding a new contact" << std::endl;
	std::cout << "-> enter 'SEARCH' for displaying a contact information" << std::endl;
	std::cout << "-> enter 'EXIT' for existing (you'll lose all the contacts)" << std::endl;
}
/*
std::string	getInput( void ) {

	std::string	buffer;

	if (!getline(std::cin, buffer, '\n')) {
		std::cout << "error in input\n";
		return NULL;
	}
	else if (std::cin.eof() == 1) {
		std::cout << "error with end-of-file\n";
		return NULL;
	}
	return buffer;
}*/

void	searchFunBook( PhoneBook funbook ) {

	std::string	input;
	int			index;
	std::string::size_type sz;   // alias of size_t

	if (funbook.searchContact() == false)
		std::cout << "\nNo contact to be displayed yet.\n" << std::endl;
	else {
		std::cout << "> Select an index: " << std::endl;
		do {
			if (!getline(std::cin, input, '\n')) {
				std::cout << "error in input\n";
				return ;
			}
			index = std::stoi(input,&sz);
		} while (index < 0 || index >= NB_CONTACTS);
// try {
//	index = std::stoi(input,&sz)
//}
//		catch (std::invalid_argument const& ex) {
 //       	std::cout << "#2: " << ex.what() << '\n';
 //   	}
		funbook.displayContact(index);
	}
	return ;
}

int	main( void ) {

	PhoneBook funbook("Last Name", "First Name", "Nick Name", "Phone Number", "Darkest secret");
	std::string	input;

	std::cout << "Welcome in your FunBook!" << std::endl;
	intro();
	if (!getline(std::cin, input, '\n')) {
		std::cout << "\nerror in input\n" << std::endl;
		return 1;
	}
	while (input != "EXIT") {
		printf("test MAIN %i\n", Contact::getNbInst());
		if (input.compare("ADD") == 0)
		{
			if (funbook.addContact() == false) {
				std::cout << "\nerror in adding a contact" << std::endl;
				return 1;
			}
		}
		else if (input.compare("SEARCH") == 0)
			searchFunBook(funbook);
		intro();
		if (!getline(std::cin, input, '\n')) {
			std::cout << "\nerror in input\n" << std::endl;
			return 1;
		}
	}
	return 0;
}

//		"Last name"
//	"First name"
//	"Nick name"
//	"Phone Number"
//	"Darkest secret"
