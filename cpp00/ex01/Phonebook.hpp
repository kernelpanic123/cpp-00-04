#ifndef PHONEBOOK_h
# define PHONEBOOK_H

#include "Contact.hpp"

class Phonebook
{

private:

	Contact _contact[8];
	int		_index;
	int		_nb_contact;

public:

	Phonebook(void);
	~Phonebook(void);

	void add(void);
	void search(void);
};

#endif
