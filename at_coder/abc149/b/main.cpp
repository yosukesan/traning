
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

    ll a, b, k;
    cin >>a >> b >> k;

    if (a<=k)
    {
	k-=a;
	a = 0;
    }
    else
    {
	ll tmp = a;
	a-=k;
	k=(k<tmp)?0:k-tmp;
    }

    //cout << a << ' ' << b << ' ' << k << endl;

    if (b<k)
	b = 0;
    else	
	b -= k;
	
    cout << a << ' ' << b << endl;

    return 0;
}
