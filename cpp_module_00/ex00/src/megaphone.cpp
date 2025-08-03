#include <string>
#include <iostream>

int main(int ac, char **av)
{
	int i;
	int j;

	i = 1;
	if (ac >= 2)
	{
		while (av[i])
		{
			j = 0;
			while (av[i][j])
			{
				std::cout << static_cast <char>(std::toupper(av[i][j]));
				j++;
			}
			i++;
		}
	}
	std::cout << std::endl;
	return (0);
}