/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erecuero <erecuero@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/01 17:08:59 by erecuero          #+#    #+#             */
/*   Updated: 2022/03/02 16:01:51 by erecuero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	__AMATERIA_HPP__
# define __AMATERIA_HPP__

#include <iostream>
#include "ICharacter.hpp"

class AMateria {
	protected:
		std::string		_type;

	public:
		AMateria( void );
		AMateria(std::string const & type);
		AMateria( AMateria const & src );
		AMateria & operator=( AMateria const & rhs );
		virtual ~AMateria( void );

		std::string const & getType() const; //Returns the materia type
		virtual AMateria* clone() const = 0;
		virtual void use( ICharacter& target );

};

#endif
