#include "iter.hpp"

template <typename T>
void printer1(T  &x)
{
	std::cout << x << " ";
}

template <typename T>
void printer2(T const &x)
{
	std::cout << x << " ";
}

int main(void)
{
	int array1[] = {0, 1, 2, 3, 4};
	std::cout << "Array1 =>" << std::endl;
	std::cout << "Printer1: ";
	iter(array1, 5, printer1);
	std::cout << "\nPrinter2: ";
	iter(array1, 5, printer2);

	std::string array2[4] = {"Joe", "Eve", "Jeanne", "pedro"};
	std::cout << "\nArray2 =>" << std::endl;
	std::cout << "Printer1: ";
	iter(array2, 4, printer1);
	std::cout << "\nPrinter2: ";
	iter(array2, 4, printer2);
	std::cout << std::endl;
	return 0;
}
