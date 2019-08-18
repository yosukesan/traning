
#include <iostream>
#include <string>
#include <algorithm>
#include <set>
#include <cmath>
#include <vector>

typedef long long ll;

using namespace std;

int main()
{
    ll a;
    string s;
    cin >> a >> s;

    if (a >= 3200)
        cout << s << endl;
    else
        cout << "red" << endl;

    return 0;
}
