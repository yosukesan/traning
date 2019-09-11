
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
    ll n, k;
    cin >> n >> k;

    ll count(0);
    rep(i, 1, n+1) 
    {
        rep(j, 1, n+1) 
        {
            //cout << j << endl;
            
            if ((i+j) % k != 0)
                continue;

            rep(l, 1, n+1) 
            {
                //if (((i+j) % k == 0) &&((j+l) % k == 0) && ((l+i) % k == 0))                
                if (((j+l) % k == 0) && ((l+i) % k == 0))                
                    count++;
            }
        }
    }

    cout << count << endl;

    return 0;
}
