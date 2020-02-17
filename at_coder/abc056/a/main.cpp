
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

    string a, b;
    cin >> a >> b;

    if (a=="H" && b=="H")   
        cout << "H" << endl;
    if (a=="H" && b=="D")   
        cout << "D" << endl;
    if (a=="D" && b=="D")   
        cout << "H" << endl;
    if (a=="D" && b=="H")   
        cout << "D" << endl;
 
    return 0;
}
