
#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main()
{
    vector<int> a(3); 

    for (auto &i : a)
        cin >> i;

    sort(a.begin(), a.end());

    cout << a[0] << ' ' << a[1] << ' ' << a[2] << endl;

    //cout << endl;

    return 0;
}
