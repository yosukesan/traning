
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
	int num, tmp;

	cin >> num;
    vector<int> a;

	for (int i=0; i<num; ++i)
	{
		cin >> tmp;
        a.push_back(tmp);
	}

	for (int i=0; i<num; ++i)
	{
        cout << a[i] << endl;
    }

	return 0;
}
