/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erecuero <erecuero@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/29 15:53:13 by erecuero          #+#    #+#             */
/*   Updated: 2022/03/30 14:09:40 by erecuero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __ITER_HPP__
# define __ITER_HPP__

#include <iostream>

template <typename T>
void	iter(T const *array, int const size, void function(const T &)) {
	for (int i = 0; i < size; i++) {
		function(array[i]);
	}
}

template <typename T>
void	displayArrayValue(T const & v) {
	std::cout << v << std::endl;
}

template <typename T>
void	addArrayValue(T const & v) {
	std::cout << v + v << std::endl;
}

#endif
