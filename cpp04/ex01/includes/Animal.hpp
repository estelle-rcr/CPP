/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erecuero <erecuero@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/28 12:00:19 by erecuero          #+#    #+#             */
/*   Updated: 2022/03/01 16:00:39 by erecuero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	__ANIMAL_HPP__
# define __ANIMAL_HPP__

#include <iostream>
#include <Brain.hpp>

class Animal {

	protected:
		std::string	_type;

	public:
		Animal();
		Animal( Animal const & src );
		virtual ~Animal();

		virtual void 		makeSound(void) const;
		virtual std::string	getType( void ) const;
		std::string			&getIdeas( void ) const;
		void				setIdeas( std::string idea );

		Animal & operator=( Animal const & rhs );
};

#endif
