/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erecuero <erecuero@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/02 16:02:00 by erecuero          #+#    #+#             */
/*   Updated: 2022/03/02 16:02:12 by erecuero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	__ICE_HPP__
# define __ICE_HPP__

#include <iostream>
#include "AMateria.hpp"

class Ice : public AMateria {
	private:

	public:
		Ice();
		Ice( Ice const & src );
		Ice & operator=( Ice const & rhs );
		~Ice();

		AMateria* clone() const ;
		void use( ICharacter& target );

};

#endif
