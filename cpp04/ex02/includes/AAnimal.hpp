/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erecuero <erecuero@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/28 12:00:19 by erecuero          #+#    #+#             */
/*   Updated: 2022/03/01 16:36:34 by erecuero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	__ANIMAL_HPP__
# define __ANIMAL_HPP__

#include <iostream>
#include "Brain.hpp"

class AAnimal {

	protected:
		std::string	_type;

	public:
		AAnimal();
		AAnimal( AAnimal const & src );
		virtual ~AAnimal();

		virtual void 		makeSound(void) const = 0;
		virtual std::string	getType( void ) const;
		std::string			&getIdeas( void ) const;
		void				setIdeas( std::string idea );

		AAnimal & operator=( AAnimal const & rhs );
};

#endif
