/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   NewSed.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erecuero <erecuero@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/15 17:29:21 by erecuero          #+#    #+#             */
/*   Updated: 2022/02/18 16:50:13 by erecuero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "NewSed.hpp"

void	newSed(std::string s1, std::string s2, std::ifstream &input, std::ofstream &output)
{
	std::string	str;
	std::string	newStr;
	std::size_t	found;

	while (getline(input, str))
	{
		while ((found = str.find(s1)) != std::string::npos) {
			newStr = str.substr(0, found);
			newStr.insert(found, s2);
			newStr.append(str, found + s1.length(), str.length());
			str = newStr;
		}
		output << str << std::endl;
	}
}
