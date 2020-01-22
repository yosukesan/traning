
#include <iostream>
#include <numeric>
#include <vector>

using namespace std;

int main()
{
    vector<int> v1(10);

    iota(v1.begin(), v1.end(), 0);

    for (auto i: v1)
        cout << i << ' ';

    cout << endl;

    v1.resize(11);

    const size_t len = v1.size()-1;
    for (size_t i=len; i>=1; i--)
    {
        v1[i] = v1[i-1];
    }
    v1[0] = 1;

    for (auto i: v1)
        cout << i << ' ';

    cout << endl;

    return 0;
}
