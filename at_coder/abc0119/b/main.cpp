
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
    cin.tie(0);
    ios::sync_with_stdio(false);

    ll n;
    cin >>n;
    vector<double> x(n,0.0);
    vector<string> u(n);
    rep(i,0,n) cin >> x[i] >> u[i]; 

    double sum(0.0);
    rep(i,0,n) 
    {
        if(u[i] == "BTC")
            sum+=x[i]*380000;
        else
            sum+=x[i];
    }

    cout << sum << endl;

    return 0;
}
