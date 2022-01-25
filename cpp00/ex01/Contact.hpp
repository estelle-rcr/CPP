#ifndef CONTACT_CLASS_H
# define CONTACT_CLASS_H

class Contact {

public:

	Contact();
	~Contact();

	static int	getNbInst( void );
	int	setAttributes( void );
	int	getAttributes( void ) const;

private:
	static int	_nbInst;
	std::string _firstName, _lastName, _nickName, _darkestSecret;
	int	 _phoneNb;
};

#endif