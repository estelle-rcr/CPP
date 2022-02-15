/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erecuero <erecuero@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/14 14:20:11 by erecuero          #+#    #+#             */
/*   Updated: 2022/02/14 17:37:49 by erecuero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __WEAPON_HPP__
# define __WEAPON_HPP__

#include <stdio.h>
#include <iostream>
#include <string.h>

class Weapon {

private:

	std::string _type;

public:

	Weapon( std::string type );
	~Weapon();

	std::string const & getType( void );
	std::string const & setType( std::string newType );
};

#endif