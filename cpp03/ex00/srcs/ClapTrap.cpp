/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erecuero <erecuero@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/23 23:34:47 by erecuero          #+#    #+#             */
/*   Updated: 2022/02/25 16:28:07 by erecuero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap::ClapTrap( void ) : _name("default"), _hitPoints(10), _energyPoints(10), _attackDamage(0) {

	std::cout << "ClapTrap default constructor called" << std::endl;
	return ;
}

ClapTrap::ClapTrap( std::string name ) : _name(name), _hitPoints(10), _energyPoints(10), _attackDamage(0) {

	std::cout << "ClapTrap surcharge constructor called" << std::endl;
	return ;
}

ClapTrap::ClapTrap( ClapTrap const & src ) {

	std::cout << "ClapTrap copy constructor called" << std::endl;
	*this = src;
	return ;
}

ClapTrap::~ClapTrap() {

	std::cout << "ClapTrap destructor called" << std::endl;
	return ;
}

ClapTrap & 	ClapTrap::operator=( ClapTrap const & rhs ) {

	this->_name = rhs._name;
	this->_hitPoints = rhs._hitPoints;
	this->_energyPoints = rhs._energyPoints;
	this->_attackDamage = rhs._attackDamage;
	return (*this);
}

void		ClapTrap::attack(const std::string & target) {

	if (target.empty()) {
		std::cout << "ClapTrap " << this->_name 
			<< " doesn't seem to attack anyone around." << std::endl;
		return ;
	}
	else if (this->_hitPoints <= 0) {
		std::cout << "ClapTrap " << this->_name
			<< " doesn't have hit points anymore and cannot attack." << std::endl;
		return ;
	}
	else if (this->_energyPoints <= 0) {
		std::cout << "ClapTrap " << this->_name 
			<< " doesn't have enough energy points to attack." << std::endl;
		return ;
	}
	this->_energyPoints--;
	std::cout << "ClapTrap " << this->_name << " attacks " << target
		<< ", causing " << this->_attackDamage << " points of damage!" << std::endl;
	return ;
}

void		ClapTrap::takeDamage(unsigned int amount) {

	if (this->_hitPoints <= 0) {
		std::cout << "ClapTrap " << this->_name
			<< " doesn't have hit points anymore, it cannot take more damage." << std::endl;
		return ;
	}
	std::cout << "ClapTrap " << this->_name << " takes " << amount << " points of damage!" << std::endl;
	if (this->_hitPoints < amount)
		this->_hitPoints = 0;
	else
		this->_hitPoints -= amount;
	return ;
}

void		ClapTrap::beRepaired(unsigned int amount) {

	if (this->_hitPoints <= 0) {
		std::cout << "ClapTrap " << this->_name << " doesn't have enough hit points to repair itself." << std::endl;
		return ;
	}
	else if (this->_energyPoints <= 0) {
		std::cout << "ClapTrap " << this->_name 
			<< " doesn't have enough energy points to repair itself." << std::endl;
		return ;
	}
	else if (amount < 0) {
		std::cout << "ClapTrap " << this->_name 
			<< " doesn't seem to repair itself." << std::endl;
		return ;
	}
	this->_energyPoints--;
	this->_hitPoints += amount;
	std::cout << "ClapTrap " << this->_name << " has repaired " << amount << " hit points!" << std::endl;
}

