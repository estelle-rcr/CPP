/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erecuero <erecuero@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/02 17:46:34 by erecuero          #+#    #+#             */
/*   Updated: 2022/03/29 14:16:00 by erecuero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Bureaucrat.hpp"
#include "../includes/Form.hpp"
#include "../includes/PresidentialPardonForm.hpp"
#include "../includes/RobotomyRequestForm.hpp"
#include "../includes/ShrubberyCreationForm.hpp"
#include "../includes/Intern.hpp"

int main( void ) {

	Intern intern1;
	Intern intern2(intern1);
	Form *formP1;
	Form *formP2;
	Form *formP3;

	std::cout << ">>> Test 1 <<<" << std::endl;
	try {
		formP1 = intern2.makeForm("robotomy request", "Bender");
		std::cout << *formP1 << std::endl;
		delete formP1;
	}
	catch(const std::exception& e) {
		std::cout << e.what() << std::endl;;
	}
	std::cout << "\n>>> Test 2 <<<" << std::endl;
	try {
		formP2 = intern2.makeForm("shrubbery creation", "Bender");
		std::cout << *formP2 << std::endl;
		delete formP2;
	}
	catch(const std::exception& e) {
		std::cout << e.what() << std::endl;;
	}
	std::cout << "\n>>> Test 3 <<<" << std::endl;
	try {
		formP3 = intern2.makeForm("robotomylababa", "Bender");
		std::cout << *formP3 << std::endl;
		delete formP3;
	}
	catch(const std::exception& e) {
		std::cout << e.what() << std::endl;;
	}
	return (0);
}
