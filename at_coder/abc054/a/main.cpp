
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

    ll a, b;
    cin >> a >> b;

    if (a==1 && b !=1)
    {
        cout << "Alice" << endl;
        return 0;
    }
    else if (a!=1 && b ==1)
    {
        cout << "Bob" << endl;
        return 0;
    }
    else if (a==1 && b ==1)
    {
        cout << "Draw" << endl;
        return 0;
    }

    if (a==b)
        cout << "Draw" << endl;
    else if (a>b) 
        cout << "Alice" << endl;
    else
        cout << "Bob" << endl;

    return 0;
}
