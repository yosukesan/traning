
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

ll gcd(ll a, ll b)
{
    if (a < b)
        swap(a, b); 

    ll tmp = b;
    a = a % b;
    b = a;
}

int main()
{
    ll a, b, k;
    cin >> a >> b >> k;
    return 0;
}
