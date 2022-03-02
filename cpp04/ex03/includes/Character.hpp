/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erecuero <erecuero@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/02 16:18:47 by erecuero          #+#    #+#             */
/*   Updated: 2022/03/02 16:33:24 by erecuero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	__CHARACTER_HPP__
# define __CHARACTER_HPP__

#include <iostream>
#include "AMateria.hpp"
#include "ICharacter.hpp"

#define MATERIAMAX	4

class Character : public ICharacter {

	private:
		std::string		_name;
		AMateria		*_inventory[MATERIAMAX];

	public:
		Character();
		Character( Character const & other );
		Character & operator=( Character const & rhs );
		~Character();

		std::string const & getName() const;

		void equip(AMateria* m);
		void unequip(int idx);
		void use(int idx, ICharacter& target);

};
