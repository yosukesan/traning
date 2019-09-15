
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
    ll a, b, c;
    cin >> a >> b >> c;

    if (a == b + c || b == a + c || c == a + b)
        cout << "Yes" << endl;
    else
        cout << "No" << endl;

    return 0;
}
