#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

#include "inc_phonebook.hpp"

class Phonebook
{
	private:
		Contact book[8];
		int	index;
		int len;
	public:
		Phonebook(void);
		~Phonebook();

	int get_len();
	void	add_contact(Contact new_contact);
	Contact	&get_contact(int index);
};

#endif