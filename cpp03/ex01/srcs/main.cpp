/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erecuero <erecuero@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/23 23:56:53 by erecuero          #+#    #+#             */
/*   Updated: 2022/03/15 15:15:52 by erecuero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main ( void ) {

	ClapTrap	clap("clap");
	ScavTrap	clip("clip");

	std::cout << "<<< CLAP ACTIONS: >>>" << std::endl;
	clap.attack("clap");
	clap.takeDamage(0);
	clap.attack("clip");
	std::cout << "<<< CLIP ACTIONS: >>>" << std::endl;
	clip.takeDamage(0);
	clip.guardGate();
	clip.beRepaired(0);
	clip.attack("");
	std::cout << "<<< CLAP ACTIONS: >>>" << std::endl;
	clap.takeDamage(0);
	clap.attack("clip");
	std::cout << "<<< CLIP ACTIONS: >>>" << std::endl;
	clip.takeDamage(0);
	clip.attack("clap");
	std::cout << "<<< CLAP ACTIONS: >>>" << std::endl;
	clap.takeDamage(20);
	clap.beRepaired(20);
	return 0;
}
