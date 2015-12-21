#include <iostream>
#include "Sales_item.h"
int main()
{
	Sales_item book;
	while (std::cin >> book)
	{
		std::cout << "ISBN  number   total price     average price" << std::endl;
		std::cout << book;
	}
	return 0;
}