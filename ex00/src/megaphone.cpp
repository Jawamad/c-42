
#include <iostream>

void str_toupper(std::string str)
{
	for (int i = 0; str[i]; i++)
		str[i] = std::toupper(str[i]);
}

void	arg(char **argv)
{
	for (int i = 1; argv[i]; i++)
	{
		str_toupper(argv[i]);
		std::cout << argv[i];
	}
}
void	no_arg()
{
	std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
}

int main(int argc, char **argv)
{
	argc > 1 ? arg(argv) : no_arg();
	std::cout << std::endl;
	return 0;
}
