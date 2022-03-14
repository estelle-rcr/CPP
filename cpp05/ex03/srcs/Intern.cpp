/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erecuero <erecuero@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/10 16:13:15 by erecuero          #+#    #+#             */
/*   Updated: 2022/03/11 18:28:36 by erecuero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

Intern::Intern( void ) {

	return ;
}

Intern::Intern( Intern const & src ) {

	*this = src;
}

Intern::~Intern() {

	return ;
}

Intern &	Intern::operator=( Intern const & rhs ) {

	(void) rhs;
	return *this;
}


Form	*Intern::makeForm( std::string const formName, std::string const target ) {

	Form	*formPointer;
	Form	*f[3] = {
		new PresidentialPardonForm(target),
		new RobotomyRequestForm(target),
		new ShrubberyCreationForm(target)
	};

	std::string	s[3] = { "presidential pardon", "robotomy request", "shrubbery creation" };
	
	formPointer = 0;
	for (int i = 0; i < 3; i++) {
		if (formName != s[i]) {
			delete f[i];
		}
		else if (formName == s[i]) {
			formPointer = f[i];
		}
	}
	if (formPointer)
		return formPointer;
	throw Intern::FormNotExisting();
	return formPointer;
}