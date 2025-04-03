#include "phonebook_class.hpp"

PhoneBook::Contact::Contact()
{
}

PhoneBook::Contact::~Contact()
{
}

void	PhoneBook::Contact::display_contact()
{
	std::cout << "First name: " <<this->first_name << std::endl;
	std::cout << "Last name: " <<this->last_name << std::endl;
	std::cout << "Nickname: " <<this->nickname << std::endl;
	std::cout << "Phone n°: " <<this->phone << std::endl;
	std::cout << "Darkest secret: " <<this->darkest_secret << std::endl;
}

void	PhoneBook::Contact::fill_contact(std::string f_name, std::string l_name, std::string n_name, std::string num, std::string secret)
{
	this->first_name = f_name;
	this->last_name = l_name;
	this->nickname = n_name;
	this->phone = num;
	this->darkest_secret = secret;
}

void	PhoneBook::Contact::print_contact(int index)
{
	std::cout << index << "         " << "|";
	first_name.length() <= 10 ? pad_column(first_name) : truncate_column(first_name);
	last_name.length() <= 10 ? pad_column(last_name) : truncate_column(last_name);
	nickname.length() <= 10 ? pad_column(nickname) : truncate_column(nickname);
	std::cout << std::endl;
}

