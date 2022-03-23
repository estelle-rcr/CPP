/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erecuero <erecuero@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/11 17:16:11 by erecuero          #+#    #+#             */
/*   Updated: 2022/03/23 14:48:35 by erecuero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Scalar.hpp"


int main (int ac, char **av) {


	if (ac != 2) {
		std::cerr << "Recommended use is: ./convert <int/float/double/char>" << std::endl;
		return (EXIT_FAILURE);
	}
	Scalar	number( av[1] );
	std::cout << number;
	return (EXIT_SUCCESS);
}

