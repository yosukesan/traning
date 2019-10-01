
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

    //rep(i,0,m) 
    //{
    //    cout << s[i].a << ' ' << s[i].b << endl;
    //    rep(j,0,s[i].b) cout << s[i].c[j] << ' ';     
    //    cout << endl;
    //}

    vector<bool> can_open(n, false);

    sort(s.begin(), s.end());

    //vector<vector<ll>> dp (1E+3+10, vector<ll>(1E+5+10, LL_MAX));
    ll _min(LL_MAX); 
    rep(k,0,m) 
    {
        ll cost(0); 
        rep(i,0,m) 
        {
            bool changed(false);
            rep(j,0,s[i].b)
            {
                if (can_open[s[i].c[j]] == false)
                    changed = true;

                can_open[s[i].c[j]] = true;
            }

            if (changed)
                cost += s[i].a;
        }
        if (cost != 0)
            _min = min(_min, cost);
    }

    rep(i,0,n)
        if (can_open[i] != true)
        {
            cout << -1 << endl;
            return 0;
        }

    cout << _min << endl;

    return 0;
}
