
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
    ll n;
    cin >> n;

    vector<vector<ll>> a(4, vector<ll>(n+2, -1));

    rep(i,1,3)
        rep(j,1,n+1) cin >> a[i][j];

    //rep(i,0,4)
    //{
    //    rep(j,0,n+1) cout << a[i][j] << ' ';
    //    cout << endl;
    //}
    

    ll i(2), j(n);
    ll s(0);
    while (true)
    {
        s += a[i][j];

        //cout << a[i][j] << endl; 
        //cout << i << ' ' << j << endl; 

        if (s+a[i-1][j] > s+a[i][j-1])
            i--;
        else if (s+a[i][j-1] > s+a[i-1][j])
            j--;
        else if (s+a[i-1][j] > s+a[i][j])
            i--;
        else
            j--;

        if (i == 1 && j == 1)
            break;
    }
    
    cout << s+a[1][1] << endl;

    return 0;
}
