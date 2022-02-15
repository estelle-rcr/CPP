/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erecuero <erecuero@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/15 17:17:13 by erecuero          #+#    #+#             */
/*   Updated: 2022/02/15 19:49:08 by erecuero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "NewSed.hpp"

/*
// Build the programme using the makefile:
// `make` or `make re`
//
// To clean the compilation files: `make clean` or `make fclean`
//
// There are two files included: a basic infile with a repetition of the word "Parameters" (alone on one line, twice on the same line, multiple times in a sentence) and an output file with an extract of a result.
//
// Try to replace the occurences of 'Parameters' from the first file with any word (capitalized helps find them) - it will replace the former output file:
// ./newsed "tests/infile" "Parameters" "TEST"
//
// Then you can try : deleting the output file and retry the former command, 
// Also try an empty file or string:
// ./newsed "tests/infile" "Parameters" ""
// Finally try changing the rights on the infile using: 
// chmod 000 tests/infile
*/

int	return_error(std::string str) {

	std::cout << str << std::endl;
	return 1;
}

int		checkArgs(char *av2, char *av3) {

	std::string		s1;
	std::string		s2;	

	s1 = av2;
	s2 = av3;
	if (s1.empty() || s2.empty()) 
	 	return return_error("Wrong args - empty");
	else if (s1.compare(s2) == 0)
		return return_error("No difference between the strings");
	else
		return 0;
}

char	*createOutfile(std::string outfile, int len) {
	
	char	buffer[4096];
	char	*filePtr;

	outfile.copy(buffer, len);
	filePtr = buffer;
	return filePtr;
}

char	*handleOutfile(char *infile) {

	std::string 	outfileName;
	char			*outfile;

	outfileName = infile;
	outfileName.append(".replace");
	outfile = createOutfile(outfileName, outfileName.length());
	return outfile;
}

int main( int ac, char **av ) {

	char			*infile;
	char			*outfile;
	std::ifstream	input;
	std::ofstream	output;

	if (ac != 4) 
		return return_error("Wrong number of args");
	if (checkArgs(av[2], av[3]) == 1)
		return 1;
	infile = av[1];
	outfile = handleOutfile(infile);
	input.open(infile, std::ios::in);
	if (!input.is_open())
		return return_error("Error: cannot open infile");
	output.open(outfile, std::ios::out & std::ios::trunc);
	if (!output.is_open())
		return return_error("Error: cannot open outfile");
	newSed(av[2], av[3], input, output);
	input.close();
	output.close();
	return 0;
}


/*
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



*/
