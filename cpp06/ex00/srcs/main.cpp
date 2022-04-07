/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erecuero <erecuero@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/11 17:16:11 by erecuero          #+#    #+#             */
/*   Updated: 2022/04/07 15:52:07 by erecuero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Scalar.hpp"


int main (int ac, char **av) {


	if (ac != 2) {
		std::cerr << "Recommended use is: ./convert <int/float/double/char>" << std::endl;
		return (EXIT_FAILURE);
	}
	try {
		Scalar	number( av[1] );
		std::cout << number;
	}
	catch (const std::exception& e) {
		std::cout << e.what() << std::endl;;
	}
	return (EXIT_SUCCESS);
}

