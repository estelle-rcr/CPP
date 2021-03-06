/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erecuero <erecuero@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/23 23:56:53 by erecuero          #+#    #+#             */
/*   Updated: 2022/03/15 15:11:30 by erecuero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main ( void ) {

	ClapTrap	clap("clap");
	ClapTrap	clip("clip");
	ClapTrap	clup(clap);


	std::cout << "<<< CLAP ACTIONS: >>>" << std::endl;
	clap.attack("clap");
	clap.takeDamage(20);
	clap.attack("clip");
	std::cout << "<<< CLIP ACTIONS: >>>" << std::endl;
	clip.takeDamage(5);
	clip.beRepaired(3);
	clip.attack("");
	std::cout << "<<< CLAP ACTIONS: >>>" << std::endl;
	clap.takeDamage(0);
	clap.beRepaired(5);
	clap.attack("clip");
	std::cout << "<<< CLIP ACTIONS: >>>" << std::endl;
	clip.takeDamage(2);
	clip.attack("clap & clup");
	std::cout << "<<< CLAP ACTIONS: >>>" << std::endl;
	clap.takeDamage(0);
	std::cout << "<<< CLUP ACTIONS: >>>" << std::endl;
	clup.takeDamage(0);
	clup.attack("");
	return 0;
}
