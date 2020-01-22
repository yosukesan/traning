
#include <iostream>
#include <unordered_set>
#include <vector>

using namespace std;

int main()
{
    vector<int> a ({6,7,4,-9,2});
    unordered_set<int> b;

    for (auto i: a)
        b.insert(i);

    if (b.find(2)!=b.end())
        cout << "found" << endl;
    else
        cout << "not found" << endl;

    return 0;
}
