/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ICharacter.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erecuero <erecuero@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/01 17:09:02 by erecuero          #+#    #+#             */
/*   Updated: 2022/03/01 17:13:49 by erecuero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef	__ICHARACTER_HPP__
# define __ICHARACTER_HPP__

#include <iostream>
#include "AMateria.hpp"

class ICharacter
{

	public:

		virtual ~ICharacter() {}
		virtual std::string const & getName() const = 0;
		virtual void equip(AMateria* m) = 0;
		virtual void unequip(int idx) = 0;
		virtual void use(int idx, ICharacter& target) = 0;

};

#endif
