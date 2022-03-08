/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erecuero <erecuero@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/02 17:46:34 by erecuero          #+#    #+#             */
/*   Updated: 2022/03/08 18:36:17 by erecuero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Bureaucrat.hpp"
#include "../includes/Form.hpp"
#include "../includes/PresidentialPardonForm.hpp"
#include "../includes/RobotomyRequestForm.hpp"
#include "../includes/ShrubberyCreationForm.hpp"

int main( void ) {

	std::cout << "\n>>> Tests creation of forms and bureaucrats to sign forms <<<" << std::endl;
	Bureaucrat	bureaucrat1("Brandon", 2);
	Bureaucrat	bureaucrat2(bureaucrat1);
	Bureaucrat	bureaucrat3;
	Form		*form1 = new PresidentialPardonForm("Brandon");
	Form		*form2 = new RobotomyRequestForm("Brandon");
	Form		*form3 = new ShrubberyCreationForm("Brandon");

	std::cout << bureaucrat1 << std::endl;
	std::cout << bureaucrat2 << std::endl;
	std::cout << bureaucrat3 << std::endl;
	std::cout << form1 << std::endl;
	std::cout << form2 << std::endl;
	std::cout << form3 << std::endl;
	std::cout << "\n>>> Test 1 <<<" << std::endl;
	try {
		bureaucrat1.signForm(&form2);
	}
	catch(const std::exception& e) {
		std::cerr << e.what() << std::endl;;
	}

	std::cout << bureaucrat1 << std::endl;
	std::cout << bureaucrat2 << std::endl;
	std::cout << bureaucrat3 << std::endl;
	std::cout << form1 << std::endl;
	std::cout << form2 << std::endl;
	std::cout << form3 << std::endl;

	std::cout << "\n>>> Test 2 <<<" << std::endl;
	try {
		bureaucrat2.signForm(&form3);
	}
	catch(const std::exception& e) {
		std::cerr << e.what() << std::endl;;
	}

	std::cout << bureaucrat1 << std::endl;
	std::cout << bureaucrat2 << std::endl;
	std::cout << bureaucrat3 << std::endl;
	std::cout << form1 << std::endl;
	std::cout << form2 << std::endl;
	std::cout << form3 << std::endl;

	std::cout << "\n>>> Test 3 <<<" << std::endl;
	try {
		bureaucrat3.signForm(&form1);
	}
	catch(const std::exception& e) {
		std::cerr << e.what() << std::endl;;
	}

	std::cout << bureaucrat1 << std::endl;
	std::cout << bureaucrat2 << std::endl;
	std::cout << bureaucrat3 << std::endl;
	std::cout << form1 << std::endl;
	std::cout << form2 << std::endl;
	std::cout << form3 << std::endl;


	return (0);
}
