
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

    string t;
    cin >> t;

    ll score(0);

    rep(i,0,t.size())
    {
        if (0<=i-k && t[i] == t[i-k])      
        {
            t[i] = '-';
            continue;
        }

        ll pnt(0);
        if (t[i]=='r') pnt=p;
        else if (t[i]=='s') pnt=r;
        else pnt=s;
    
        score += pnt;
    
        //cout << t[i-k] << ' ' << score << endl;
    }

    cout << score << endl;

    return 0;
}
