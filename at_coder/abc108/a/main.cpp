
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

    n++;

    ll sum(0);
     rep(i, 1, n)
     { 
        rep(j, 1, n)
         {
            if (i % 2 == 0 && j % 2 == 1)
                sum++;
                //cout << i << ' ' << j << endl, sum++;   

            //if (j % 2 == 0 && i % 2 == 1)
            //    cout << i << ' ' << j << endl, sum++;   
         }
     }

    cout << sum << endl;

    return 0;
}
