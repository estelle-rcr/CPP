/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erecuero <erecuero@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/15 17:17:13 by erecuero          #+#    #+#             */
/*   Updated: 2022/02/15 17:40:50 by erecuero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "NewSed.hpp"

int main( int ac, char *av ) {

	std::fstream	input;
	std::fstream	output;
	std::string		infile;
	std::string		outfile;

	if (ac != 4) {
		std::cout << "Wrong number of args" << std::endl;;
		return 1;
	}
	infile = av[1];
	input.open(infile, std::ios::in);
	if (input.fail())
	{
		std::cout << "Error: cannot open infile " << std::endl;
		return (EXIT_FAILURE);
	}
	outfile = infile + ".replace";
	output.open(outfile, std::ios::out | std::ios::trunc);
	if (output.fail())
	{
		std::cout << "Error: cannot create outfile " << std::endl;
		return (EXIT_FAILURE);
	}
	newSed(argv[2], argv[3], input, output);
}



   newfile.open("tpoint.txt",ios::out);  // open a file to perform write operation using file object
   if(newfile.is_open()) //checking whether the file is open
   {
      newfile<<"Tutorials point \n";   //inserting text
      newfile.close();    //close the file object
   }
   newfile.open("tpoint.txt",ios::in); //open a file to perform read operation using file object
   if (newfile.is_open()){   //checking whether the file is open
      string tp;
      while(getline(newfile, tp)){ //read data from file object and put it into string.
         cout << tp << "\n"; //print the data of the string
      }
      newfile.close(); //close the file object.
   }
