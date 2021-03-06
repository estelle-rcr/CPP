/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   EasyFind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erecuero <erecuero@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/29 15:53:13 by erecuero          #+#    #+#             */
/*   Updated: 2022/04/07 17:01:28 by erecuero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __EASYFIND_HPP__
# define __EASYFIND_HPP__

# include <iostream>
# include <algorithm>
# include <stdlib.h>
# include <vector>
# include <list>

class NotFoundException : public std::exception
{
	virtual const char * what() const throw()
	{
		return ("Int not found in container.");
	}
};

template < typename T >
int & easyFind( T & container, int nb) {
	typename T::iterator it = std::find(container.begin(), container.end(), nb);
	if (it == container.end())
		throw NotFoundException();
	return (*it);
}

#endif
