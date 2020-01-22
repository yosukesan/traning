
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

#define rep(i,s,e) for(ll i=(s); i<(e); i++) 

using namespace std;

ll f(ll n)
{
    if (n%2==0) return n/2;
    else return 3*n+1;
}

int main()
{
    cin.tie(0);
    ios::sync_with_stdio(false);

    ll s;
    cin >> s;

    rep(i,0,10) 
    {
        cout << s << endl;
        s = f(s);
    }

    return 0;
}
