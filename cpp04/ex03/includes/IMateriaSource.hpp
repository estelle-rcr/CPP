/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   IMateriaSource.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erecuero <erecuero@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/01 17:09:05 by erecuero          #+#    #+#             */
/*   Updated: 2022/03/01 17:13:43 by erecuero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef	__IMATERIASOURCE_HPP__
# define __IMATERIASOURCE_HPP__

#include <iostream>
#include "AMateria.hpp"

class IMateriaSource
{
	public:
		virtual ~IMateriaSource() {}
		virtual void learnMateria(AMateria*) = 0;
		virtual AMateria* createMateria(std::string const & type) = 0;
};

#endif