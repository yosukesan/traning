
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

int main()
{
    cin.tie(0);
    ios::sync_with_stdio(false);

    ll n, m, k;
    cin >> n >> m >> k;
    queue<ll> a;
    queue<ll> b;
    rep(i,0,n){
        ll tmp;
        cin >> tmp;
        a.push(tmp);
    }
    rep(i,0,m){
        ll tmp;
        cin >> tmp;
        b.push(tmp);
    }

    ll cnt(0), accm(0);
    while (true)
    {
        
        if (a.empty() && b.empty())
            break;

        //cout << a.front() << ' ' << b.front() << endl;

        if (!a.empty() && !b.empty() && a.front() < b.front())
        {
                accm += a.front(), a.pop();
        }
        else if (!b.empty() && !a.empty() && a.front() >= b.front())
        {
                accm += b.front(), b.pop();
        }
        else if (!a.empty() && b.empty())
        {
                accm += a.front(), a.pop();
        }
        else if (a.empty() && !b.empty())
        {
                accm += b.front(), b.pop();
        }

        if (accm > k)
            break;

        cnt++;
        
        //cout << accm << ' ' << cnt << endl;
    }

    cout << cnt << endl;

    return 0;
}
