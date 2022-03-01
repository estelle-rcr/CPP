/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erecuero <erecuero@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/01 17:08:59 by erecuero          #+#    #+#             */
/*   Updated: 2022/03/01 17:12:38 by erecuero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	__AMATERIA_HPP__
# define __AMATERIA_HPP__

#include <iostream>

class AMateria
{
	protected:
	//[...]

	public:
		AMateria(std::string const & type);
		//[...]

		std::string const & getType() const; //Returns the materia type
		virtual AMateria* clone() const = 0;
		virtual void use(ICharacter& target);

};

#endif
