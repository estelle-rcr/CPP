/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erecuero <erecuero@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/14 12:00:31 by erecuero          #+#    #+#             */
/*   Updated: 2022/02/14 13:30:14 by erecuero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main( void ) {

	std::string input;
	int num(10);

	std::cout << "> Select the name of our zombies: " << std::endl; 
	if (!getline(std::cin, input, '\n')) {
		std::cout << "\nerror in input\n" << std::endl;
		return 1;
	}
	Zombie	*horde = zombieHorde(num, input);
	std::cout << "> Let's the Zombies introduce themselves: " << std::endl; 
	for (int i = 0; i < num; i++) {
		horde[i].announce();
	}
	delete [] horde;
	return 0;
}
