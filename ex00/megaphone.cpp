#include <iostream>

using namespace std;

/// String to uppercase
/// @param str The string to put in upper case.
void	string_to_uppercase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		str[i] = std::toupper(str[i]);
		i++;
	}
}

/// Main function
/// @param argc The number of arguments passed to the program.
/// @param argv The arguments passed to the program.
/// @return 0 on success
int main(int argc, char *argv[])
{
	int		i;

	if (argc == 1)
	{
		cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << endl;
	}
	else if (argc >= 2)
	{
		i = 1;
		while (i < argc)
		{
			string_to_uppercase(argv[i]);
			cout << argv[i];
			i++;
		}
		cout << endl;
	}
	return (0);
}
