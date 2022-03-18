/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erecuero <erecuero@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/28 12:20:27 by erecuero          #+#    #+#             */
/*   Updated: 2022/03/17 17:34:35 by erecuero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Animal.hpp"
#include "../includes/Cat.hpp"
#include "../includes/Dog.hpp"

int main ( void ) {

	std::cout << ">>> EXAMPLE 1: <<<" << std::endl;
	const Animal* j = new Dog();
	const Animal* i = new Cat();
	std::cout << std::endl;
	delete j; // ;//should not create a leak
	delete i;
	std::cout << std::endl;
	std::cout << std::endl;
	std::cout << ">>> EXAMPLE 2: <<<" << std::endl;
	int	n = 10;
	Animal *Animal[n];
	for (int i = 0; i < n / 2; i++) {
		Animal[i] = new Dog();
		Animal[i]->makeSound();
		std::cout << std::endl;
	}
	for (int i = n / 2; i < n; i++) {
		Animal[i] = new Cat();
		Animal[i]->makeSound();
		std::cout << std::endl;
	}
	std::cout << std::endl;
	for (int i = 0; i < n; i++) {
		delete Animal[i];
		std::cout << std::endl;
	}
	std::cout << std::endl;
	std::cout << ">>> EXAMPLE 3: <<<" << std::endl;
	std::cout << std::endl;
	Dog dog1;
	std::cout << std::endl;
	Cat cat1;
	cat1.setIdea(1, "Hello");
	{
		Dog dog2 = dog1;
		std::cout << std::endl;
		Cat cat2 = cat1;
		std::cout << std::endl;
		std::cout << std::endl;
		std::cout << ">>> Before setting a new idea - second cat has his own brain with same content <<<" << std::endl;
		std::cout << "cat 1 : " << cat1.getIdea(1) << std::endl;
		std::cout << "cat 2 : " << cat2.getIdea(1) << std::endl;
		cat2.setIdea(1, "I think");
		std::cout << ">>> After setting a new idea - second cat has his own brain with different content <<<" << std::endl;
		std::cout << "cat 1 : " << cat1.getIdea(1) << std::endl;
		std::cout << "cat 2 : " << cat2.getIdea(1) << std::endl;
		std::cout << std::endl;
		std::cout << std::endl;
	}
	std::cout << "\ncat 1 : " << cat1.getIdea(1) << std::endl << std::endl;
	return 0;
}
