
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
#include <tuple>

using ll = long long int;
using ul = unsigned long long int;
const ll LL_MAX (1LL<<60);
const ll MOD (1000000007);

#define rep(i,s,e) for(ll i=(s); i<(e); i++) 

using namespace std;

using T = tuple<ll,ll>;
using Graph = vector<vector<T>>;

int main()
{
    cin.tie(0);
    ios::sync_with_stdio(false);

    ll n, q;
    cin >> n >> q;
    vector<ll> a(n), s(q);

    rep(i,0,n)
        cin >> a[i];

    rep(i,0,q)
        cin >> s[i];

    rep(i,0,q)
    {
        priority_queue<ll> que;
        ll trial;
        rep(i,0,n)
        { 
            trial = gcd(s[i], a[i]);
            //cout << trial << endl;
            if (trial == 1)
            {
                cout << s[i] << endl;
                break;
            }
            que.push(trial);   
        }
        cout << que.top() << endl;
    }

    return 0;
}
