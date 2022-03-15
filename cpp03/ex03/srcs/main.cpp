/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erecuero <erecuero@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/23 23:56:53 by erecuero          #+#    #+#             */
/*   Updated: 2022/03/15 15:29:47 by erecuero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include "DiamondTrap.hpp"

int main ( void ) {
	std::cout << "<<< CONSTRUCTORS: >>>" << std::endl;
	ScavTrap	clip("clip");
	DiamondTrap	clep("clep");
	DiamondTrap	clop;

	std::cout << "\n<<< CLIP ACTIONS: >>>" << std::endl;
	clip.attack("clip");
	clip.takeDamage(0);
	clip.attack("clep");
	std::cout << "\n<<< CLEP ACTIONS (DIAMOND): >>>" << std::endl;
	clep.takeDamage(20);
	clep.whoAmI();
	std::cout << "\n<<< CLIP ACTIONS: >>>" << std::endl;
	clip.attack("clep");
	std::cout << "\n<<< CLEP ACTIONS (DIAMOND): >>>" << std::endl;
	clep.takeDamage(20);
	std::cout << "\n<<< CLIP ACTIONS: >>>" << std::endl;
	clip.attack("clep");
	std::cout << "\n<<< CLEP ACTIONS (DIAMOND): >>>" << std::endl;
	clep.takeDamage(20);
	clep.attack("clip & clop");
	std::cout << "\n<<< CLIP ACTIONS: >>>" << std::endl;
	clip.takeDamage(30);
	std::cout << "\n<<< CLOP ACTIONS: >>>" << std::endl;
	clop.takeDamage(30);
	clop.whoAmI();
	std::cout << "\n<<< DESTRUCTORS: >>>" << std::endl;
	return 0;
}
