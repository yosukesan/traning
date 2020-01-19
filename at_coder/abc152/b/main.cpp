
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
const ll MOD (1000000007);

#define rep(i,s,e) for(ll i=(s); i<(e); i++) 

using namespace std;

int main()
{
    cin.tie(0);
    ios::sync_with_stdio(false);

    char a, b;
    cin >> a >> b;

    string strb;
    rep(i,0,a-'0')
        strb += b;

    string stra;
    rep(i,0,b-'0')
        stra += a;

    if (stra > strb)
        cout << strb << endl;
    else
        cout << stra << endl;

    return 0;
}
