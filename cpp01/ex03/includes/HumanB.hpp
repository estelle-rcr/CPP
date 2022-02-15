/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erecuero <erecuero@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/14 14:20:08 by erecuero          #+#    #+#             */
/*   Updated: 2022/02/14 23:34:12 by erecuero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __HUMANB_HPP__
# define __HUMANB_HPP__

#include <stdio.h>
#include <iostream>
#include <string.h>
#include "Weapon.hpp"

class HumanB {

private:

	std::string	_name;
	Weapon		*_weapon;

public:

	HumanB( std::string name );
	~HumanB();

	void	attack( void );
	void	setWeapon( Weapon &weapon );
};

#endif
