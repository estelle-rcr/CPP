/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erecuero <erecuero@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/16 15:41:25 by erecuero          #+#    #+#             */
/*   Updated: 2022/02/16 16:46:28 by erecuero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Karen.hpp"

static int	getLevel(std::string str)
{
	std::string	levels[4] = {
		"DEBUG",
		"INFO",
		"WARNING",
		"ERROR"
	};

	for (int i = 0; i < 4; i++)
	{
		if (str == levels[i])
			return (i);
	}
	return (4);
}

int main ( int ac, char **av ) {

	Karen karen;

	if (ac == 2) {
		switch(getLevel(av[1]))
		{
			case 0	:
				std::cout << "[ DEBUG ]" << std::endl;
				karen.complain("DEBUG");
				std::cout << std::endl;
				__attribute__((fallthrough));
			case 1	:
				std::cout << "[ INFO ]" << std::endl;
				karen.complain("INFO");
				std::cout << std::endl;
				__attribute__((fallthrough));
			case 2	:
				std::cout << "[ WARNING ]" << std::endl;
				karen.complain("WARNING");
				std::cout << std::endl;
				__attribute__((fallthrough));
			case 3	:
				std::cout << "[ ERROR ]" << std::endl;
				karen.complain("ERROR");
				break;
			default	:
				std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
				break;
		}
	}
	else
		std::cout << "wrong number of args" << std::endl;
	return 1;
}
