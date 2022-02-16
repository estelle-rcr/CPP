/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Karen.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erecuero <erecuero@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/16 15:41:57 by erecuero          #+#    #+#             */
/*   Updated: 2022/02/16 15:59:09 by erecuero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Karen.hpp"

Karen::Karen( void ) {

	_levels[0] = "DEBUG";
	_levels[1] = "INFO";
	_levels[2] = "WARNING";
	_levels[3] = "ERROR";
	return ;
}

Karen::~Karen ( void ) {

	return ;
}

void	Karen::debug( void ) {

	std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do!"
			<< std::endl;
}

void	Karen::info( void ) {

	std::cout << "I cannot believe adding extra bacon costs more money." << std::endl;
	std::cout <<  "You didn't put enough bacon in my burger! If you did, I wouldn't be asking for more!"
		<< std::endl;
}

void	Karen::warning( void ) {

	std::cout << "I think I deserve to have some extra bacon for free." << std::endl;
	std::cout << "I've been coming for years whereas you started working here since last month."
			<< std::endl;
}

void	Karen::error( void ) {

	std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl;
}

void	Karen::complain( std::string level ) {

	void	(Karen::*f[4])() = {
		&Karen::debug,
		&Karen::info,
		&Karen::warning,
		&Karen::error
	};
	int i(0);
	bool found(false);

	while (i < 4)
	{
		if (level == this->_levels[i] || found == true)
		{
			std::cout << "[ " << this->_levels[i] << " ]" << std::endl;
			(this->*f[i])();
			found = true;
			std::cout << std::endl;
		}
		i++;
	}
	if (found == false)
		std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
}
