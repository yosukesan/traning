
#include <iostream>

using namespace std;

int main()
{
	int arr = 0;
	int arr2[3];
	int num = 0;

	cin >> arr;

	for (int i=0; i<3; ++i)
	{
		arr2[i] = arr & 0x1;
		arr = arr>>1; 
	}

	for (int i=0; i<3; ++i)
	{
		num += arr2[i];
		//cout << arr2[i];
	}

	cout << num << endl;	

	return 0;
}
