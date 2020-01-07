
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

    string s;
    cin >>s;

    if (s.size() == 1) 
    {
        cout << 0 << endl;
        return 0;
    }
   
    ll cnt(0);
    rep(i,0,s.size()-1)
        if (s[i+1] == s[i]){cnt++; s[i+1] = (s[i]-'0') ? '0' : '1';}

    cout << cnt << endl;
    
    return 0;
}
