/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   NewSed.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erecuero <erecuero@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/15 17:29:21 by erecuero          #+#    #+#             */
/*   Updated: 2022/02/15 18:51:55 by erecuero         ###   ########.fr       */
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


/*


	std::string::size_type	pos;
	std::string				tmp;
	std::string				line;

	(void)s2;
	while (getline(input, tmp))
	{
		if (tmp.find(s1) == std::string::npos)
		{
			output << tmp << std::endl;
		}
		else
		{
			pos = 0;
			while ((pos = tmp.find(s1, pos)) != std::string::npos)
			{
				line = tmp.substr(0, pos);
				line = line.insert(pos, s2);
				line.append(tmp.substr(pos + s1.length(), tmp.length()));
				tmp = line;
			}
			output << tmp << std::endl;
		}
	}


*/
