/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erecuero <erecuero@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/25 16:42:24 by erecuero          #+#    #+#             */
/*   Updated: 2022/03/15 15:26:01 by erecuero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap() : ClapTrap() {
	std::cout << "FragTrap default constructor called" << std::endl;
	this->_hitPoints = 100;
	this->_energyPoints = 100;
	this->_attackDamage = 30;
}

FragTrap::FragTrap(std::string name) : ClapTrap(name) {
	std::cout << "FragTrap surcharge constructor called" << std::endl;
	this->_hitPoints = 100;
	this->_energyPoints = 100;
	this->_attackDamage = 30;
}

FragTrap::FragTrap(FragTrap const & src) : ClapTrap(src) {
	std::cout << "FragTrap copy constructor called" << std::endl;
}

FragTrap::~FragTrap() {
	std::cout << "FragTrap destructor called" << std::endl;
}

FragTrap &	FragTrap::operator=( FragTrap const & rhs ) {
	ClapTrap::operator=(rhs);
	return (*this);
}

void	FragTrap::highFivesGuys( void ) {
	if (this->_hitPoints <= 0)
	{
		std::cout << "FragTrap " << this->_name << " doesn't have enough hit points to give high Fives." << std::endl;
		return ;
	}
	std::cout << "FragTrap " << this->_name << " gives high Fives to everyone." << std::endl;
}
