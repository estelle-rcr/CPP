/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serialization.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erecuero <erecuero@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/23 21:55:26 by erecuero          #+#    #+#             */
/*   Updated: 2022/03/23 22:03:48 by erecuero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serialize.hpp"

uintptr_t serialize(Data* ptr)
{
	return (reinterpret_cast<uintptr_t>(ptr));
}

Data* deserialize(uintptr_t raw)
{
	return (reinterpret_cast<Data *>(raw));
}

std::ostream	&operator<<(std::ostream &o, const Data &data)
{
	o << "nb : " << data.nb << std::endl;
	o << "c : " << data.c << std::endl;
	o << "str : " << data.str << std::endl;
	o << "ptr nb : " << data.ptrNb << std::endl;
	o << "ptr c : " << data.ptrChar << std::endl;
	o << "ptr str : " << data.ptrStr << std::endl;
	return o;
}
