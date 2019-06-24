
#include <iostream>
#include <list>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

bool mycomp (const char& a, const char& b)
{return a > b;}

int main()
{
    list<int> nums;

    nums.push_back(50);
    nums.push_back(2);
    nums.push_back(1);
    nums.push_back(9);

    string s;
    while (0 != nums.size())
    {
        s += to_string(*(nums.begin()));
        nums.pop_front();
    }

    sort(s.begin(), s.end(), mycomp); 

    for (auto i: s)
        cout << i;

    cout << endl;

    return 0;
}
