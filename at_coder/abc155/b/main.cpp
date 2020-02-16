
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

    ll n;
    cin >>n;

    bool can_enter(true);
    rep(i,0,n)
    {
        ll a;
        cin >> a;
        if (a%2==0)
        {
            if ((a%3==0) || (a%5==0)) can_enter=true;
            else can_enter = false;
        }
        if (!can_enter) break;
    }

    if (!can_enter)
        cout << "DENIED" << endl;
    else
        cout << "APPROVED" << endl;
    return 0;
}
