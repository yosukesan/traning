
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

int main()
{
    cin.tie(0);
    ios::sync_with_stdio(false);

    ll n, k;
    ll r, s, p;
    cin >> n >> k;
    cin >> r >> s >> p;

    string stat;
    cin >> stat;

    ll score(0);

    rep(i,0,stat.size())
    {
        if (stat[i]=='r') score+=p;
        if (stat[i]=='s') score+=r;
        if (stat[i]=='p') score+=s;
    }

    cout << score << endl;

    return 0;
}
