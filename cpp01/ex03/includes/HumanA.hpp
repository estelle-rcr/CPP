/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erecuero <erecuero@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/14 14:20:06 by erecuero          #+#    #+#             */
/*   Updated: 2022/02/16 13:51:55 by erecuero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __HUMANA_HPP__
# define __HUMANA_HPP__

#include <stdio.h>
#include <iostream>
#include <string.h>
#include "Weapon.hpp"

class HumanA {

	public:

		HumanA( std::string name, Weapon &weapon );
		~HumanA();

		void	attack(void);

	private:

		std::string _name;
		Weapon 		&_weapon;

};

#endif
