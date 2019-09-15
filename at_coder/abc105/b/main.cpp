#include <iostream>
#include <string>
#include <algorithm>
#include <set>
#include <cmath>
#include <vector>
 
typedef long long ll;
 
using namespace std;
 
int main()
{
    ll n;
    cin >> n;

    bool flag = false;
 
    for (ll i=7; i<=100; i+=7)
    {
        for (ll j=4; j<=100; j+=4)
        {
            //cout << i << ' ' << j << endl;
            if (i + j == n)
            {
                flag = true;
            }
        }
    }
    if (flag) cout << "Yes" << endl;
    else cout << "No" << endl;
 
    return 0;
}
