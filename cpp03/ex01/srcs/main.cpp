/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erecuero <erecuero@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/23 23:56:53 by erecuero          #+#    #+#             */
/*   Updated: 2022/02/25 09:35:18 by erecuero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main ( void ) {

	ClapTrap	clap("clapclap");
	ScavTrap	clip("clip");


	clap.attack("clipclip");
	clap.takeDamage(20);
	clap.attack("clapclap");
	clip.takeDamage(5);
	clip.beRepaired(3);
	clap.attack("");
	clip.takeDamage(2);
	clap.beRepaired(5);
	clap.attack("clapclap");
	clip.attack("clipclip");
	return 0;
}
