/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erecuero <erecuero@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/16 15:41:25 by erecuero          #+#    #+#             */
/*   Updated: 2022/02/16 15:47:49 by erecuero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Karen.hpp"

int main ( int ac, char **av ) {

	Karen karen;

	if (ac == 2) {
		karen.complain(av[1]);
		return 0;
	}
	else
		std::cout << "wrong number of args" << std::endl;
	return 1;
}
