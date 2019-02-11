
#include <iostream>

int main()
{
	auto x = 3;
	std::cout << x << std::endl;
	{
		std::cout << x << std::endl;
		auto x = 4;
		std::cout << x << std::endl;
	}
	std::cout << x << std::endl;

	return 0;
}
