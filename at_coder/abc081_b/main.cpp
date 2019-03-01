
#include<iostream>

using namespace std;

int check(const int num, int* arr)
{
	int is_stop = 0;

	for (int i=0; i<num; ++i)
	{
		is_stop |= arr[i] & 0x1;
		//cout << is_stop << endl;
	}

	return is_stop;
}

void div(const int num, int* arr)
{
	for (int i=0; i<num; ++i)
	{
		arr[i] >>= 1;
	}
}

int main()
{
	int num;
	int arr[200]; 
	int counter = 0;
	int is_stop;

	cin >> num;	

	for (int i=0; i<num; ++i)
	{
		cin >> arr[i];
	}

	while (true)
	{
		is_stop = check(num, &arr[0]);

		if (is_stop)
			break;

		++counter;
		div(num, &arr[0]);
	}

	cout << counter << endl;

	return 0;
}
