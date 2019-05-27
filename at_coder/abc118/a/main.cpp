
#include <iostream>

using namespace std;

int main()
{
	int num1, num2;

	cin >> num1 >> num2;

	if (num2 % num1 != 0)
	{
		cout << num2 - num1 << endl;
	}
	else
	{
		cout << num2 + num1 << endl;
	}

	return 0;
}
