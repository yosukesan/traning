
#include <iostream>
#include <string>
#include <algorithm>
#include <set>
#include <cmath>
#include <vector>
#include <numeric>

typedef long long ll;
const ll LL_MAX (1LL<<60);

#define rep(i,s,e) for(ll i=(s); i<(e); i++) 

using namespace std;

int main()
{
    cin.tie(0);
    ios::sync_with_stdio(false);

    ll n;
    cin >> n;

    vector<ll> a(n);

    iota(a.begin(), a.end(), 1);

    ll neum(0), denm(n);

    for (auto i: a)
    {
        if (i % 2 != 0)
            neum++;
    }

    cout << neum * (1.0/n) << endl;

    return 0;
}
