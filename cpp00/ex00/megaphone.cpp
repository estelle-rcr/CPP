/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erecuero <erecuero@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/06 17:43:12 by erecuero          #+#    #+#             */
/*   Updated: 2022/01/27 14:48:18 by erecuero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <locale>

int	main(int ac, char **av) {
	
	int	i;
	int j;
	char var;
	std::locale loc;

	i = 1;
	if (ac < 2)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
	while (av[i])
	{
		j = 0;
		while (av[i][j])
		{
			if (av[i][j] >= 'a' && av[i][j] <= 'z')
				std::cout << std::toupper(av[i][j], loc);
			else 
				std::cout << av[i][j];
			j++;
		}
		i++;
	}
	std::cout << std::endl;
	return 0;
}