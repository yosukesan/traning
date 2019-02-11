
#include <iostream>
#include <string>

int main()
{
	using namespace std::string_literals;

	// string
	//std::cout << 1 + "error"s; this fails
	std::cout << "error"s;

	// char
	std::cout << 1 + "error";

	return 0;
}
