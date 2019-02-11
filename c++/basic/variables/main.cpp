
#include <iostream>
#include <string>

int main()
{
	using namespace std::string_literals;	

	auto answer = 43;
	std::cout << answer << "\n"s;

	auto pi = 3.14;
	std::cout << pi << "\n"s;

	auto question = "Life\n"s;
	std::cout << question;

	auto a = 1; // substitution
	auto b(2); // initialisation
	auto c{3};
	std::cout << a << " "s << b << " "s << c << std::endl;

	return 0;
}
