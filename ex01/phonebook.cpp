#include "phonebook_class.hpp"

PhoneBook::PhoneBook()
{
	this->num_contacts = 0;
}

PhoneBook::~PhoneBook()
{
}

int		PhoneBook::add_contact_to_phonebook()
{
	std::string f_name, l_name, n_name, number, secret;
	int	modulo_num_contacts = this->num_contacts % 8;

	std::cout << "Enter first name: ";
	std::getline(std::cin, f_name);
	std::cout << "Enter last name: ";
	std::getline(std::cin, l_name);
	std::cout << "Enter nickname: ";
	std::getline(std::cin, n_name);
	std::cout << "Enter number: ";
	std::getline(std::cin, number);
	std::cout << "Enter darkest secret: ";
	std::getline(std::cin, secret);

	this->contacts_[modulo_num_contacts].fill_contact(f_name, l_name, n_name, number, secret);
	this->num_contacts++;
	return 0;
}

void	PhoneBook::search_contact_in_phonebook()
{
	std::string	buffer;
	int			index = -1;
	int			contacts_to_display = this->num_contacts;

	if (contacts_to_display > 8)
		contacts_to_display = 8;
	for (int i = 0 ; i < contacts_to_display ; i++)
		contacts_[i].print_contact(i);

	std::cout << "Enter index of the contact you want to inspect:" << std::endl;
	std::getline(std::cin, buffer);

	if (buffer.length() > 1 || buffer[0] < '0' || buffer[0] > '9')
		return ;
	
	index = buffer[0] - 48;
	if (index >= 0 && index < contacts_to_display)
		this->contacts_[index].display_contact();
}
