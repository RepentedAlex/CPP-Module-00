#include <iterator>
#include <string>
#include <iostream>

/// Main function
/// @param argc The number of arguments passed to the program.
/// @param argv The arguments passed to the program.
/// @return 0 on success
int main(int argc, char *argv[])
{
	if (argc == 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
	else
		for (int i = 1; i < argc; i++)
		{
			std::string input = std::string(argv[i]);
			for (size_t j = 0; j < input.length(); j++)
				std::cout << static_cast<char>(std::toupper(input[j]));
		}
	std::cout << std::endl;
	return (0);
}
