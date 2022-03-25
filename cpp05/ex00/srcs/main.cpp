/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erecuero <erecuero@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/02 17:46:34 by erecuero          #+#    #+#             */
/*   Updated: 2022/03/25 18:14:31 by erecuero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

/*
// Please use:  make && ./Bureaucrat 2> err.log && cat err.log
*/

int main( void ) {

	Bureaucrat	bureaucrat1("Brandon", 1);
	Bureaucrat	bureaucrat2(bureaucrat1);
	Bureaucrat	bureaucrat3;

	std::cout << ">>> BEFORE <<<" << std::endl;
	std::cout << bureaucrat1 << std::endl;
	std::cout << bureaucrat2 << std::endl;
	std::cout << bureaucrat3 << std::endl << std::endl;

	try {
		bureaucrat1.incrementRank();
	}
	catch(const std::exception& e) {
		std::cout << e.what() << std::endl;;
	}

	std::cout << "\n>>> AFTER 1st TRY (increment) <<<" << std::endl;
	std::cout << bureaucrat1 << std::endl;
	std::cout << bureaucrat2 << std::endl;
	std::cout << bureaucrat3 << std::endl << std::endl;

	try {
		bureaucrat2.decrementRank();
	}
	catch(const std::exception& e) {
		std::cout << e.what() << std::endl;;
	}

	std::cout << "\n>>> AFTER 2nd TRY (decrement) <<<" << std::endl;
	std::cout << bureaucrat1 << std::endl;
	std::cout << bureaucrat2 << std::endl;
	std::cout << bureaucrat3 << std::endl << std::endl;

	try {
		bureaucrat3.decrementRank();
	}
	catch(const std::exception& e) {
		std::cout << e.what() << std::endl;;
	}

	std::cout << "\n>>> AFTER 3rd TRY (decrement) <<<" << std::endl;
	std::cout << bureaucrat1 << std::endl;
	std::cout << bureaucrat2 << std::endl;
	std::cout << bureaucrat3 << std::endl << std::endl;

	try {
		Bureaucrat	tooHigh("Cannot be created", 0);
	}
	catch(const std::exception& e) {
		std::cout << ">>> failed creation - return error:\n" << e.what() << std::endl;
	}
	std::cout << "\n>>> AFTER 4th TRY (failed creation) <<<" << std::endl;

	return (0);
}
