#include <iostream>

void	printChar(char a)
{
	std::cout << a;
}

void	makeNewStr(char **argv)
{
	int i;
	int j;

	i = 1;
	while (argv[i])
	{
		j = 0;
		while (argv[i][j])
		{
			if (argv[i][j] >= 97 && argv[i][j] <= 122)
			{
				argv[i][j] -= 32;
				printChar(argv[i][j]);
			}
			else
				printChar(argv[i][j]);
			j++;
		}
		i++;
	}
}

int main(int argc, char **argv)
{
	if (argc == 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
	else
		makeNewStr(argv);
	std::cout << std::endl;
	return (0);
}