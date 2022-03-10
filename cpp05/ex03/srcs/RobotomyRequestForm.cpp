/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erecuero <erecuero@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/08 15:04:14 by erecuero          #+#    #+#             */
/*   Updated: 2022/03/10 17:12:09 by erecuero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm( std::string target ) :
	Form("robotomy request", 72, 45), _target(target) {
//	std::cout << "Target set to " << this->_target << std::endl;
	return ;
}

RobotomyRequestForm::RobotomyRequestForm( RobotomyRequestForm const & src ) :
	Form(src), _target(src._target) {
	*this = src;
	return ;
}

RobotomyRequestForm::~RobotomyRequestForm() {

	return ;
}

RobotomyRequestForm &	RobotomyRequestForm::operator=( RobotomyRequestForm const & rhs ) {

	if ( this != &rhs )
	{
		Form::operator=(rhs);
	}
	return *this;
}

std::string	RobotomyRequestForm::getTarget( void ) const {

	return this->_target;
}

bool	RobotomyRequestForm::execute(Bureaucrat const & executor) const {

	if (this->checkConditions(executor))
	{
		srand (time(NULL));
		std::cout << "TRIIIIIIT " << std::endl;
		if ((std::rand() % 2 + 1) == 1) {
			std::cout << this->getTarget() << " was robotomized correctly." << std::endl;
			return true;
		}
		else {
			std::cout << "Robotomization failed on " << this->getTarget() << std::endl;
			return false;
		}
	}
	return false;
}
