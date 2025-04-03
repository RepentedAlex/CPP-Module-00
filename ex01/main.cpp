#include "phonebook_class.hpp"

void	pad_column(std::string str)
{
	size_t pad = 10 - str.length();

	std::cout << str;
	for (size_t i = 0; i < pad; i++)
		std::cout << ' ';
	std::cout << "|";
}

void	truncate_column(std::string str)
{
	for (int i = 0; i < 9; i++)
		std::cout << str[i];
	std::cout << ".|";
}

int		main()
{
	std::string	buffer;
	PhoneBook phone_book;

	while (true)
	{
		std::cout << "Enter one of the following commands : ADD, SEARCH or EXIT: " << std::endl;
		std::getline(std::cin, buffer);
		if (buffer == "ADD")
			phone_book.add_contact_to_phonebook();
		else if (buffer == "SEARCH")
			phone_book.search_contact_in_phonebook();
		else if (buffer == "EXIT")
			break ;
	}

	return (0);
}
