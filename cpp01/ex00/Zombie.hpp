/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erecuero <erecuero@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/11 17:54:59 by erecuero          #+#    #+#             */
/*   Updated: 2022/02/11 19:16:42 by erecuero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __ZOMBIE_HPP__
# define __ZOMBIE_HPP__

#include <stdio.h>
#include <iostream>


class Zombie {

private:

	std::string _name;

public:

	Zombie( std::string input );
	~Zombie();

	void announce( void );

};

	Zombie* newZombie( std::string name );
	void randomChump( std::string name );

#endif
