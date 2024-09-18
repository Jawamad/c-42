#include "../inc/inc_phonebook.hpp"

Contact::Contact()
{
	set_firstname("");
	set_name("");
	set_nickname("");
	set_phonenumber("");
	set_secret("");
};

Contact::Contact(std::string fn, std::string n, std::string nn, std::string pn, std::string s)
{
	set_firstname(fn);
	set_name(n);
	set_nickname(nn);
	set_phonenumber(pn);
	set_secret(s);
}
Contact::Contact(Contact& co)
{
	set_firstname(co.get_firstname());
	set_name(co.get_name());
	set_nickname(co.get_nickname());
	set_phonenumber(co.get_phonenumber());
	set_secret(co.get_secret());
}
Contact::~Contact()
{
}

void	Contact::set_name(std::string str)
{
	name = str;
}
std::string	Contact::get_name(void)
{
	return name;
}

void Contact::set_firstname(std::string str)
{
	firstname = str;
}

std::string	Contact::get_firstname(void)
{
	return firstname;
}

std::string	Contact::get_nickname(void)
{
	return nickname;
}
void	Contact::set_nickname(std::string str)
{
	nickname = str;
}
std::string	Contact::get_phonenumber(void)
{
	return phonenumber;
}
void	Contact::set_phonenumber(std::string str)
{
	phonenumber = str;
}
std::string	Contact::get_secret(void)
{
	return secret;
}
void	Contact::set_secret(std::string str)
{
	secret = str;
}

void Contact::print_info()
{
	std::cout << "Firstname :" + firstname << std::endl;
	std::cout << "Last Name :" + name << std::endl;
	std::cout << "Nickname :" + nickname << std::endl;
	std::cout << "Phonenumber :" + phonenumber << std::endl;
	std::cout << "Darkest Secret :" + secret << std::endl;
}
