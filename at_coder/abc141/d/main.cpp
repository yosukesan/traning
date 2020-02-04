
#include <iostream>
#include <string>
#include <algorithm>
#include <set>
#include <cmath>
#include <vector>
#include <queue>

typedef long long ll;
const ll LL_MAX (1LL<<60);

#define rep(i,s,e) for(ll i=(s); i<(e); i++) 

using namespace std;

int main()
{
    ll n, m;
    cin >> n >> m;

    //vector<ll> a(n);
    //rep(i, 0, n) cin >> a[i];
    priority_queue<ll> a;
    rep(i, 0, n)
    {
        ll b;
        cin >> b;
        a.push(b);
    }

    rep(i,0,m)
    {
        ll t = a.top()/2;
        a.pop();
        a.push(t);
    }
    
    ll ans;
    while (!a.empty())
        ans+=a.top(), a.pop();

    cout << ans <<endl;
        
    return 0;
}
