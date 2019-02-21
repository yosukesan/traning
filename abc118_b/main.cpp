
#include<iostream>

using namespace std;

class Score
{
	int value = 0;
public:
	void add(){++value;}
	int get(){return value;}
};

int main()
{
	int n, m, length, num;
	Score s[30];
	int sum = 0;

	cin >> n >> m;
	
	for (int i=0; i<n; ++i)
	{
		cin >> length;
		for (int j=0; j<length; ++j)
		{	
			cin >> num;
			s[num-1].add();
		}
	}	

	if (n != 1)
	{
		for (int i=0; i<n; ++i)
		{
			sum += (s[i].get() == n) ? 1 : 0;
		}
	}
	else
	{
		sum = length;
	}

	cout << sum << endl;

	return 0;
}
