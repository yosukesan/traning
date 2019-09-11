
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
    ll x1[2], x2[2], x3[2], x4[2];

    cin >> x1[0] >> x1[1] >> x2[0] >> x2[1];

    ll diff_x = x2[0] - x1[0];
    ll diff_y = x2[1] - x1[1];

    x3[0] = x2[0] - diff_y;
    x3[1] = x2[1] + diff_x;

    x4[0] = x1[0] - diff_y;
    x4[1] = x1[1] + diff_x;
    
    
    cout << x3[0] << ' ' << x3[1] << ' ' << x4[0] << ' ' << x4[1] << endl;  

    return 0;
}
