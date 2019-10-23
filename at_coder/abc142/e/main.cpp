
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

struct Shop
{
    ll a, b;
    vector<ll> c;
};

bool operator<(const Shop&a, const Shop& b)
{
    if (a.a < b.a)
        return true;

    return false;
}

int main()
{
    cin.tie(0);
    ios::sync_with_stdio(false);

    ll n, m;
    cin >> n >> m;

    vector<Shop> s(m); 
    ll tmp;
    rep(i,0,m) 
    {
        cin >> s[i].a >> s[i].b;
        rep(j,0,s[i].b) cin >> tmp, s[i].c.push_back(--tmp);     
    }



    cout << _min << endl;

    return 0;
}
