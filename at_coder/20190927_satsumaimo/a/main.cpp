
#include <iostream>
#include <string>
#include <algorithm>
#include <set>
#include <cmath>
#include <vector>

typedef long long ll;
const ll LL_MAX (1LL<<60);

#define rep(i,s,e) for(ll i=(s); i<(e); i++) 

using namespace std;

int main()
{
    ll x, a, b;
    cin >> x >> a>> b;

    if (abs(x-b) > abs(x-a))
        cout << 'A' << endl;
    else
        cout << 'B' << endl;

    return 0;
}
