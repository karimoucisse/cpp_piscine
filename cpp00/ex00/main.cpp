#include <stdio.h>
#include <iostream>

int gl = 4;

int ret (void) {return 4; };

namespace foo {
	int gl = 6;
	int ret (void) {return 10; };
}

namespace bar {
	int gl = 0;
	int ret (void) {return 2; };
}

int main(int ac, char **av)
{
	if(ac == 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
	else{

		for(int i = 1; av[i]; i++)
		{
			for (int j = 0; av[i][j]; j++)
			{
				char c = toupper(av[i][j]);
				std::cout << (char)toupper(c);
			}
		}
	}
	std::cout << std::endl;
}
