
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
    ll a, b;
    cin >> a >> b;

    for (ll i=0; i<=20; i++)
    {
        //cout << "test" << a*i - (i-1) << endl;
        if (a*i-(i-1) >= b)
        {
            cout << i << endl;
            return 0;
        }
    }

    return 0;
}
