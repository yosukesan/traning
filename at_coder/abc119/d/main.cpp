
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
    cin.tie(0);
    ios::sync_with_stdio(false);

    ll a,b,q;
    cin >>a,b,q;
    vector<ll> s(a,0);
    vector<ll> t(b,0);
    vector<ll> x(q,0);
    rep(i,0,a) cin>> s[i];
    rep(i,0,b) cin>> t[i];
    rep(i,0,q) cin>> x[i];
    return 0;
}
