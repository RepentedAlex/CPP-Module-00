#ifndef MAIN_H
#define MAIN_H

#include <algorithm>
#include <bitset>
#include <complex>
#include <deque>
#include <exception>
#include <fstream>
#include <functional>
#include <iomanip>
#include <ios>
#include <iosfwd>
#include <iostream>
#include <istream>
#include <iterator>
#include <limits>
#include <list>
#include <locale>
#include <map>
#include <memory>
#include <new>
#include <numeric>
#include <ostream>
#include <queue>
#include <set>
#include <sstream>
#include <stack>
#include <stdexcept>
#include <streambuf>
#include <string>
#include <typeinfo>
#include <utility>
#include <valarray>
#include <vector>

class PhoneBook
{
	public:
	PhoneBook();
	~PhoneBook();
	int		add_contact_to_phonebook();
	// int		get_contact(std::string index);
	void	search_contact_in_phonebook();

	private:
	int	num_contacts;
	class Contact
	{
		public:
		Contact();
		~Contact();
		void	display_contact();
		void	fill_contact(std::string f_name, std::string l_name, std::string n_name, std::string num, std::string secret);
		void	print_contact(int index);

		private:
		std::string first_name;
		std::string last_name;
		std::string nickname;
		std::string phone;
		std::string darkest_secret;
	};
	Contact contacts_[8];
};

void	pad_column(std::string str);
void	truncate_column(std::string str);

#endif //MAIN_H
