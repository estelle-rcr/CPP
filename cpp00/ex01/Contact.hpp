#ifndef CONTACT_CLASS_H
# define CONTACT_CLASS_H

#include "PhoneBook.hpp"

class Contact {

public:

	Contact();
	~Contact();

	static int	getNbInst( void );
	static int	setAttributes( void );
	static int	setAttributes( void );

private:
	static int	_nbInst;
	std::string _firstName, _lastName, _nickName, _darkestSecret;
	int	 _phoneNb;
};

#endif