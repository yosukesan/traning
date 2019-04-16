
#include <iostream>
#include <vector>

int main()
{
	int a, b;
	auto glambda = [](const int& a, const int& b) {return a < b;};
	std::cout << glambda(-1, 1) << std::endl;

	std::vector<int> arr;
	arr.push_back(9);
	arr.push_back(49);
	auto test = [](const std::vector<int>& arr) {for (auto i : arr ){std::cout << i << std::endl;} };
	test(arr);
	
	return 0;
}
