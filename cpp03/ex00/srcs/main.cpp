/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erecuero <erecuero@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/23 23:56:53 by erecuero          #+#    #+#             */
/*   Updated: 2022/02/24 16:40:51 by erecuero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main ( void ) {

	ClapTrap	clap("clapclap");
	ClapTrap	clip(clap);


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
