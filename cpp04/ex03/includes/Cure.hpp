/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erecuero <erecuero@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/02 15:40:18 by erecuero          #+#    #+#             */
/*   Updated: 2022/03/02 16:01:45 by erecuero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	__CURE_HPP__
# define __CURE_HPP__

#include <iostream>
#include "AMateria.hpp"

class Cure : public AMateria {
	private:

	public:
		Cure();
		Cure( Cure const & src );
		Cure & operator=( Cure const & rhs );
		~Cure();

		AMateria* clone() const ;
		void use( ICharacter& target );

};

#endif
