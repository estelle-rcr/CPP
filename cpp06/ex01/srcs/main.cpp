/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erecuero <erecuero@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/23 21:58:29 by erecuero          #+#    #+#             */
/*   Updated: 2022/03/23 22:05:39 by erecuero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serialize.hpp"

int main(void) {

	Data		data;

	data.nb = 42;
	data.c = 'c';
	data.str = "Hello";
	data.ptrNb = &data.nb;
	data.ptrChar = &data.c;
	data.ptrStr = &data.str;
	std::cout << ">>> DATA BEFORE:" << std::endl;
	std::cout << data << std::endl;

	std::cout << ">>> DATA SERIALIZATION <<<" << std::endl;
	uintptr_t	serialized = serialize(&data);
	std::cout << ">>> DATA DESERIALIZATION <<<" << std::endl;
	Data		deserialized = *deserialize(serialized);

	std::cout << "\n>>> DATA AFTER:" << std::endl;
	std::cout << deserialized << std::endl;
	return 0;
}
