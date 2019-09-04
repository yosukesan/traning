
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
    ll n, num(0);
    cin >> n;

    for (ll i=1; i<=n; i++)
        num += i;

    cout << num << endl;
        

    return 0;
}
