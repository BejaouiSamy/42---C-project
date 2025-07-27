#include <iostream>
#include <string>

void	PrintUpper(std::string str)
{
	int i;

	i = 0;
	while (str[i])
	{
		if (str[i] >= 'a' && str[i] <= 'z')
			str[i] -= 32;
		std::cout << str[i];
		i++;
	}
}

class UpperCase 
{
	public:
		std::string str;
		UpperCase(const std::string& s = "") : str(s) {}
		void PrintUp()
		{
			PrintUpper(str);
		}
};



int main(int ac, char **av)
{
	int i;

	i = 1;
	if (ac >= 2)
	{
		while (i < ac)
		{
			UpperCase upperStr(av[i]);
			upperStr.PrintUp();
			i++;
		}
	}
	std::cout << std::endl;
	return (0);
}
