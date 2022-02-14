/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erecuero <erecuero@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/14 12:01:56 by erecuero          #+#    #+#             */
/*   Updated: 2022/02/14 12:25:19 by erecuero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __ZOMBIE_HPP__
# define __ZOMBIE_HPP__

#include <stdio.h>
#include <iostream>
#include <string.h>


class Zombie {

private:

	std::string _name;

public:

	Zombie();
	~Zombie();

	void	setName( std::string name );
	void	announce( void );

};

Zombie* zombieHorde( int N, std::string name );

#endif
