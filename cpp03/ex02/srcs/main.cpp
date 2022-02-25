/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erecuero <erecuero@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/23 23:56:53 by erecuero          #+#    #+#             */
/*   Updated: 2022/02/25 16:54:01 by erecuero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main ( void ) {

	ClapTrap	clap("clap");
	ScavTrap	clip("clip");
	FragTrap	clup("clup");

	std::cout << "<<< CLAP ACTIONS: >>>" << std::endl;
	clap.attack("clap");
	clap.takeDamage(0);
	clap.attack("clip");
	std::cout << "<<< CLIP ACTIONS: >>>" << std::endl;
	clip.takeDamage(5);
	clip.guardGate();
	clip.beRepaired(3);
	clip.attack("");
	std::cout << "<<< CLUP ACTIONS: >>>" << std::endl;
	clup.attack("clip");
	std::cout << "<<< CLIP ACTIONS: >>>" << std::endl;
	clip.takeDamage(20);
	std::cout << "<<< CLUP ACTIONS: >>>" << std::endl;
	clup.highFivesGuys();
	clup.attack("clap");
	std::cout << "<<< CLAP ACTIONS: >>>" << std::endl;
	clap.takeDamage(0);
	clap.beRepaired(5);
	clap.attack("clip");
	std::cout << "<<< CLIP ACTIONS: >>>" << std::endl;
	clip.takeDamage(2);
	clip.attack("clap");
	std::cout << "<<< CLAP ACTIONS: >>>" << std::endl;
	clap.takeDamage(20);
	clap.beRepaired(20);
	return 0;
}
