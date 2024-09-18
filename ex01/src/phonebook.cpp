#include "../inc/inc_phonebook.hpp"

Phonebook::Phonebook(void)
{
	index = 0;
	len = 8;
}
Phonebook::~Phonebook(){}

void Phonebook::add_contact(Contact new_contact)
{
	book[index] = new_contact;
	index = (index + 1) % 8;
}

Contact& Phonebook::get_contact(int index)
{
	return(book[index]);
}
int Phonebook::get_len()
{
	return (len);
}