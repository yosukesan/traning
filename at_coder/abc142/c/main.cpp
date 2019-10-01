
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

    ll n;
    cin >>n;
    vector<ll> a(n);
    vector<ll> order(n);

    rep(i,0,n) cin>>a[i], a[i]--;

    rep(i,0,n){
        order[a[i]] = i;
    }

    rep(i,0,n)
        cout << ++order[i] << " ";
    cout << endl;
    

    return 0;
}
