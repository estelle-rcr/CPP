/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erecuero <erecuero@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/02 16:29:33 by erecuero          #+#    #+#             */
/*   Updated: 2022/03/02 16:33:50 by erecuero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	__MATERIASOURCE_HPP__
# define __MATERIASOURCE_HPP__

#include <iostream>
#include "AMateria.hpp"
#include "IMateriaSource.hpp"
#define MATERIAMAX	4

class MateriaSource : public IMateriaSource {

	private:
		AMateria		*_materia[MATERIAMAX];

	public:
		MateriaSource();
		MateriaSource( MateriaSource const & other );
		MateriaSource & operator=( MateriaSource const & rhs );
		~MateriaSource();

		void learnMateria(AMateria*);
		AMateria* createMateria(std::string const & type);
};

#endif
