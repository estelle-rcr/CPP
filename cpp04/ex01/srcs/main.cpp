/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erecuero <erecuero@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/28 12:20:27 by erecuero          #+#    #+#             */
/*   Updated: 2022/03/01 16:14:15 by erecuero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Animal.hpp"
#include "../includes/Cat.hpp"
#include "../includes/Dog.hpp"

int main ( void ) {

	const Animal* j = new Dog();
	const Animal* i = new Cat();
	delete j; // ;//should not create a leak
	delete i;
	Dog dog1;
	Cat cat1;
	cat1.setIdea(1, "Hello");
	{
		Dog dog2 = dog1;
		Cat cat2 = cat1;
		std::cout << ">>> Before setting a new idea - copies the first cat <<<" << std::endl;
		std::cout << cat1.getIdea(1) << std::endl;
		std::cout << cat2.getIdea(1) << std::endl;
		cat2.setIdea(1, "I think");
		std::cout << ">>> After setting a new idea - second cat has his own brain <<<" << std::endl;
		std::cout << cat1.getIdea(1) << std::endl;
		std::cout << cat2.getIdea(1) << std::endl;
	}
	return 0;
}
