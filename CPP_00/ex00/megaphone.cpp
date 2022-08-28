#include <iostream>
int main (int argc, char *argv[])
{
	if (argc != 1)
	{
		for (int i = 1; i < argc; i++)
			for (int j = 0; argv[i][j] != '\0'; j++)
				if (argv[i][j] > 67 || argv[i][j] >= 122)
					std::cout << char (toupper(argv[i][j]));
				else
					std::cout << char (argv[i][j]);
		std::cout << std::endl;				
	}
	else
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *\n";
	return (0);
}