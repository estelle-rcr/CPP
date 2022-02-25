/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erecuero <erecuero@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/25 09:30:27 by erecuero          #+#    #+#             */
/*   Updated: 2022/02/25 16:45:12 by erecuero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap() : ClapTrap() {
	std::cout << "ScavTrap default constructor called" << std::endl;
	this->_hitPoints = 100;
	this->_energyPoints = 50;
	this->_attackDamage = 20;
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name) {
	std::cout << "ScavTrap name constructor called" << std::endl;
	this->_hitPoints = 100;
	this->_energyPoints = 50;
	this->_attackDamage = 20;
}

ScavTrap::ScavTrap(ScavTrap const & src) : ClapTrap(src) {
	std::cout << "ScavTrap copy constructor called" << std::endl;
}

ScavTrap::~ScavTrap()
{
	std::cout << "ScavTrap destructor called" << std::endl;
}

ScavTrap &	ScavTrap::operator=( ScavTrap const & rhs ) {
	ClapTrap::operator=(rhs);
	return (*this);
}

void	ScavTrap::attack(const std::string & target) {

	if (target.empty()) {
		std::cout << "ScavTrap " << this->_name 
			<< " doesn't seem to attack anyone around." << std::endl;
		return ;
	}
	else if (this->_hitPoints <= 0) {
		std::cout << "ScavTrap " << this->_name
			<< " doesn't have hit points anymore and cannot attack." << std::endl;
		return ;
	}
	else if (this->_energyPoints <= 0) {
		std::cout << this->_name << " doesn't have enough energy points to attack." << std::endl;
		return ;
	}
	this->_energyPoints--;
	std::cout << "ScavTrap " << this->_name << " attacks " << target
		<< ", causing " << this->_attackDamage << " points of damage!" << std::endl;
	return ;
}

void	ScavTrap::guardGate( void ) {
	if (this->_hitPoints <= 0)
	{
		std::cout << "ScavTrap " << this->_name << " doesn't have enough hit points to enter Gate keeper mode." << std::endl;
		return ;
	}
	std::cout << "ScavTrap " << this->_name << " has entered Gate keeper mode." << std::endl;
}
