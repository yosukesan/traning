
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

string str_lower(string& str)
{
    string res;
    for (auto c: str)
        res+=tolower(c); 

    return res;
}

int main()
{
    cin.tie(0);
    ios::sync_with_stdio(false);

    string s, t;
    cin >> s >> t;
  
    if (s == t) 
        cout << "same" << endl;
    else if (str_lower(s)==str_lower(t)) 
        cout << "case-insensitive" << endl;
    else 
        cout << "different" << endl;

    return 0;
}
