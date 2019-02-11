
#include <iostream>
#include <string>

int main()
{
	using namespace std::string_literals;

	auto print = [](auto x)
	{
		std::cout << x << "\n"s;
	};

	print(123);


	auto f = [](){std::cout << "f is called" << std::endl;};
	f();
	[](){}();

	return 0;
}
