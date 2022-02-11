/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erecuero <erecuero@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/11 18:26:48 by erecuero          #+#    #+#             */
/*   Updated: 2022/02/11 19:26:55 by erecuero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main ( void ) {
	
	std::string	input;

	std::cout << "Let's create Zombiessss!!! \n" << std:: endl;
	
	std::cout << "Choose a name for the Zombie created on the heap:" << std:: endl;
	if (!getline(std::cin, input, '\n')) {
		std::cout << "\nerror in input\n" << std::endl;
		return 1;
	}
	Zombie	*ZombieOnHeap = newZombie(input);
	std::cout << "\nWe can use this zombie to introduce him/her, for instance:" << std:: endl;
	ZombieOnHeap->announce();
	std::cout << "\nNow choose a name for the Zombie created on the stack:" << std:: endl;
	if (!getline(std::cin, input, '\n')) {
		std::cout << "\nerror in input\n" << std::endl;
		return 1;
	}
	std::cout << std:: endl;
	randomChump(input);
	std::cout << std:: endl;
	std::cout << "\nIt was killed within the randomChump function because it exists only within its scope." << std:: endl;
	std::cout << "The Zombie on stack was free automatically while we now have to free our Zombie on heap:\n" << std:: endl;
	delete ZombieOnHeap;
	return 0;
}
