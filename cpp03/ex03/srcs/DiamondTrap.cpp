/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erecuero <erecuero@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/25 17:03:44 by erecuero          #+#    #+#             */
/*   Updated: 2022/03/15 15:26:09 by erecuero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap() : ClapTrap("default_clap_name"), ScavTrap(), FragTrap() {

	std::cout << "DiamondTrap default constructor called" << std::endl;
	this->_name = "default";
	this->FragTrap::_hitPoints;
	this->ScavTrap::_energyPoints;
	this->FragTrap::_attackDamage;
}

DiamondTrap::DiamondTrap(std::string name) : ClapTrap(name + "_clap_name"), ScavTrap(), FragTrap() {

	std::cout << "DiamondTrap surcharge constructor called" << std::endl;
	this->_name = name;
	this->FragTrap::_hitPoints;
	this->ScavTrap::_energyPoints;
	this->FragTrap::_attackDamage;
}

DiamondTrap::DiamondTrap(DiamondTrap const & src) : ClapTrap(src) {

	std::cout << "DiamondTrap copy constructor called" << std::endl;
}

DiamondTrap::~DiamondTrap() {

	std::cout << "DiamondTrap destructor called" << std::endl;
}

DiamondTrap &	DiamondTrap::operator=( DiamondTrap const & rhs ) {

	ClapTrap::operator=(rhs);
	return (*this);
}

void	DiamondTrap::attack(const std::string & target) {

	ScavTrap::attack(target);
}

void 	DiamondTrap::whoAmI( void ) {

	std::cout << "I'm a DiamondTrap named " << this->_name
		<< " but my ClapTrap name is " << this->ClapTrap::_name
		<< " and I'm wondering who I am and all things in life." << std::endl;
	return ;
}
