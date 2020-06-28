
#include <iostream>
#include <string>
#include <algorithm>
#include <set>
#include <cmath>
#include <vector>
#include <numeric>
#include <map>
#include <unordered_map>
#include <unordered_set>
#include <queue>

using ll = long long int;
using ul = unsigned long long int;
const ll LL_MAX (1LL<<60);
const ll MOD (1000000007);

#define rep(i,s,e) for(ll i=(s); i<(e); i++) 

using namespace std;

void printv(vector<ll>& v)
{
    for (auto e: v)
        cout << e;
    cout << endl;
}

int main()
{
    cin.tie(0);
    ios::sync_with_stdio(false);

    ll n;
    cin >>n;

    n = n % 30;

    vector<ll> c(6);
    iota(c.begin(),c.end(),1);
    rep(i,0,n)
    {
        ll j = i%5;
        swap(c[j],c[j+1]);
        //printv(c);
    }

    printv(c);

    return 0;
}
