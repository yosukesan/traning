
#include<iostream>

using namespace std;

int main()
{
	int num1, num2;
	cin >> num1 >> num2;

	if ((num1 * num2) % 2 == 1)
	{
		cout << "Odd" << endl;
	}
	else
	{
		cout << "Even" << endl;
	}

	return 0;
}
