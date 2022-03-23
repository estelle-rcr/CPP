/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serialization.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erecuero <erecuero@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/23 20:44:43 by erecuero          #+#    #+#             */
/*   Updated: 2022/03/23 22:01:50 by erecuero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SERIALIZATION_HPP
# define SERIALIZATION_HPP

#include <stdint.h>
#include <iostream>

typedef struct s_Data {
	int			nb;
	char		c;
	std::string	str;
	void		*ptrNb;
	void		*ptrChar;
	void		*ptrStr;
}				Data;

uintptr_t	serialize(Data *ptr);
Data*		deserialize(uintptr_t raw);

std::ostream	&operator<<(std::ostream &o, const Data &data);

#endif
