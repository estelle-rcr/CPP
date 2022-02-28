/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erecuero <erecuero@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/23 23:56:53 by erecuero          #+#    #+#             */
/*   Updated: 2022/02/28 10:54:42 by erecuero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include "DiamondTrap.hpp"

int main ( void ) {

	ScavTrap	clip("clip");
	DiamondTrap	clep("clep");
	DiamondTrap	clop;

	std::cout << "<<< CLIP ACTIONS: >>>" << std::endl;
	clip.attack("clip");
	clip.takeDamage(0);
	clip.attack("clep");
	std::cout << "<<< CLEP ACTIONS (DIAMOND): >>>" << std::endl;
	clep.takeDamage(20);
	clep.whoAmI();
	std::cout << "<<< CLIP ACTIONS: >>>" << std::endl;
	clip.attack("clep");
	std::cout << "<<< CLEP ACTIONS (DIAMOND): >>>" << std::endl;
	clep.takeDamage(20);
	std::cout << "<<< CLIP ACTIONS: >>>" << std::endl;
	clip.attack("clep");
	std::cout << "<<< CLEP ACTIONS (DIAMOND): >>>" << std::endl;
	clep.takeDamage(20);
	clep.attack("clip & clop");
	std::cout << "<<< CLIP ACTIONS: >>>" << std::endl;
	clip.takeDamage(30);
	std::cout << "<<< CLOP ACTIONS: >>>" << std::endl;
	clop.takeDamage(30);
	clop.whoAmI();
	return 0;
}
