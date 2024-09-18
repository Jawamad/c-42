#include "../inc/inc_phonebook.hpp"

std::string user_input(std::string message)
{
	std::string input;

	std::cout << message << std::endl;
	std::getline(std::cin, input);
	while (input.empty())
	{
		std::cout << "empty entry!" << std::endl;
		std::cout << message << std::endl;
		std::getline(std::cin, input);
	}
	return input;
}

void	 add(Phonebook *book)
{
	Contact new_contact;
	new_contact.set_firstname(user_input("Firstname :"));
	new_contact.set_name(user_input("Name :"));
	new_contact.set_nickname(user_input("Nickname :"));
	new_contact.set_phonenumber(user_input("Phonenumber :"));
	new_contact.set_secret(user_input("Darkest Secret :"));
	book->add_contact(new_contact);
}

std::string format_str(std::string str)
{
	if (str.length() > 10)
		return str.substr(0, 9) + ".";
	return str;
}
int	conv_str(std::string str)
{
	int	number;
	std::istringstream iss(str);
	iss >> number;
	if (iss.fail())
		return (-1);
	return number;
}

void search(Phonebook book)
{
	std::string input;
	Contact contact;
	int	index = 0;

	std::cout	<< std::setw(10) << std::right << "Index" << "|"
				<< std::setw(10) << std::right << "First Name" << "|"
				<< std::setw(10) << std::right << "Last Name" << "|"
				<< std::setw(10) << std::right << "Nickname" << std::endl;
	std::cout << "---------------------------------------------" << std::endl;
	for (int i = 0; i < book.get_len(); i++)
	{
		contact = book.get_contact(i);
		std::cout	<< std::setw(10) << std::right << i << "|"
					<< std::setw(10) << std::right << format_str(contact.get_firstname()) << "|"
					<< std::setw(10) << std::right << format_str(contact.get_name()) << "|"
					<< std::setw(10) << std::right << format_str(contact.get_nickname()) << std::endl;
	}
	while (index != 8)
	{
		input = user_input("Please specify the index of the user to display (8 for exit) :");
		index = conv_str(input);
		if (index > 8 || index < 0)
			std::cout << "INVALID index enter 8 for exit" << std::endl;
		else if (index == 8)
			break;
		else
			book.get_contact(index).print_info();
	}
}

int main()
{
	std::string input;
	Phonebook book;
	while (input != "EXIT")
	{
		input = user_input("welcome to your phonebook. What do you want to do? SEARCH, ADD, EXIT ?");
		if (input == "ADD")
		{
			add(&book);
			std::cout << "contact added!" << std::endl;
		}
		else if (input == "SEARCH")
		{
			search(book);
		}
	}
	return(0);
}
