
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

    ll ab, bc, ca;
    cin >>ab>>bc>>ca;

    ll x = 0.5*(ab+bc+ca);

    cout << sqrt(x*(x-ab)*(x-bc)*(x-ca)) << endl;

    return 0;
}
