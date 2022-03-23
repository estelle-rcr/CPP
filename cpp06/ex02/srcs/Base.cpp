/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erecuero <erecuero@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/23 21:55:26 by erecuero          #+#    #+#             */
/*   Updated: 2022/03/23 22:25:39 by erecuero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"

Base	*generate(void) {

	Base	*inst = NULL;
	srand(time(NULL));
	int randInt = rand() % 3;

	if (randInt == 1) {
		inst = new A;
		std::cout << "Instanciate A" << std::endl;
	}
	else if (randInt == 2) {
		inst = new B;
		std::cout << "Instanciate B" << std::endl;
	}
	else {
		inst = new C;
		std::cout << "Instanciate C" << std::endl;
	}
	return (inst);
}

void	identify(Base *p) {
	std::cout << "identify the object pointed by p as an instanciation of ";
	if (dynamic_cast<A *>(p) != NULL)
		std::cout << "class A!" << std::endl;
	else if (dynamic_cast<B *>(p) != NULL)
		std::cout << "class B!" << std::endl;
	else if (dynamic_cast<C *>(p) != NULL)
		std::cout << "class C!" << std::endl;
	else
		throw UndefinedClass();
}

void	identify(Base &p) {
	std::cout << "identify the object referenced by p as an instanciation of ";
	try {
		A	classA = dynamic_cast<A &>(p);
		std::cout << "class A!" << std::endl;
	}
	catch(const std::exception& e) { }
	try {
		B	classB = dynamic_cast<B &>(p);
		std::cout << "class B!" << std::endl;
	}
	catch(const std::exception& e) { }
	try {
		C	classC = dynamic_cast<C &>(p);
		std::cout << "class C!" << std::endl;
	}
	catch(const std::exception& e) { }

}
