
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
    ll h, w, n;
    cin >> h >> w >> n;
    vector<ll> a(n);

    rep(j,0,h)     
    {
        rep(i,0,w)     
        {
            cout << i << ' ';   
        }
        cout << endl;
    }

    return 0;
}
