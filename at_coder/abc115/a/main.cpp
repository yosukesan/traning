
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

    ll d;
    cin >>d;

    string e;
    if (d==24)
        e="Eve";
    else if (d==23)
        e="Eve Eve";
    else if (d==22)
        e="Eve Eve Eve";

    cout << "Christmas " + e << endl;

    return 0;
}
