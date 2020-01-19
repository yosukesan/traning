
#include <iostream>
#include <string>
#include <algorithm>
#include <set>
#include <cmath>
#include <vector>
#include <numeric>
#include <unordered_map>
#include <unordered_set>
#include <queue>

typedef long long ll;
const ll LL_MAX (1LL<<60);
const ll MOD (1000000007);

#define rep(i,s,e) for(ll i=(s); i<(e); i++) 

using namespace std;

int main()
{
    cin.tie(0);
    ios::sync_with_stdio(false);

    ll n;
    cin >> n;
    ll cnt(0);

    rep(i,1,n+1)
    {
        string a (to_string(i));             
        ll na (a.size()-1);
        rep(j,1,n+1)
        {
            string b (to_string(j));             
            if (a[0]==b[b.size()-1] && b[0] == a[na])
                cnt++;
        }
    }

    cout << cnt << endl;

    return 0;
}
