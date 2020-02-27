
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

    vector<ll> a(3);
    cin >> a[0] >> a[1] >> a[2];

    sort(a.begin(), a.end(), greater<ll>());

    ll cnt(0);
    
    while (a[0]>a[1]) a[1] += 2, cnt++;
    while (a[0]>a[2]) a[2] += 2, cnt++;

    if (a[0] != a[1] || a[1] != a[2])
    {
        a[1] -=2, cnt--;
        a[2] -=2, cnt--;
    }

    if (a[0] == a[1] && a[1] == a[2])
        goto fin;

    sort(a.begin(), a.end(), greater<ll>());


    if (a[0]>a[1] && a[1] == a[2])  
        cnt++, a[1]++, a[2]++;
    else
        cnt+=3;
    //{
    //    cnt++, a[2]+=2;
    //    cnt++, a[0]++, a[1]++; 
    //    cnt++, a[1]++, a[2]++;
    //}

fin:


    //for (auto i: a)
    //    cout << ' ' << i;
    //cout << endl;

    cout << cnt << endl; 

    return 0;
}
