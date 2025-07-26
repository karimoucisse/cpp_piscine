#include "Array.hpp"

int main(void)
{
	try
	{
		Array<std::string> a;
		std::cout << a[5] << std::endl;
		return 0;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
}
