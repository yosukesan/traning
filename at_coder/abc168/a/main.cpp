
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
#include <tuple>

using ll = long long int;
using ul = unsigned long long int;
const ll LL_MAX (1LL<<60);
const ll MOD (1000000007);

#define rep(i,s,e) for(ll i=(s); i<(e); i++) 

using namespace std;

using T = tuple<ll,ll>;
using Graph = vector<vector<T>>;

int main()
{
    cin.tie(0);
    ios::sync_with_stdio(false);

    ll n;
    cin >>n;

    string s (to_string(n));
    ll m = s[s.size()-1]-48;
    if (m==3)
        cout << "bon" << endl;
    else if (m==0 || m==1 || m==6 || m==8)
        cout << "pon" << endl;
    else 
        cout << "hon" << endl;

    return 0;
}
