#ifndef CONTACT_HPP
# define CONTACT_HPP

#include "inc_phonebook.hpp"

class Contact
{
	private:
		std::string	name;
		std::string	firstname;
		std::string	nickname;
		std::string	phonenumber;
		std::string	secret;
	public:
		Contact();
		Contact(Contact &contact);
		Contact(std::string fn, std::string n, std::string nn, std::string pn, std::string s);
		~Contact();

		std::string	get_name(void);
		void	set_name(std::string str);
		std::string	get_firstname(void);
		void	set_firstname(std::string str);
		std::string	get_nickname(void);
		void	set_nickname(std::string str);
		std::string	get_phonenumber(void);
		void	set_phonenumber(std::string str);
		std::string	get_secret(void);
		void	set_secret(std::string str);
		void	print_info();
};

#endif