
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
    string w;
    cin >> w;

    vector<ll> hash(26, 0);

    rep(i, 0, static_cast<ll>(w.size())) 
        hash[w[i]-97]++;

    bool is_b_num (true);
    rep(i, 0, 26) 
        if (hash[i] % 2 != 0)
            is_b_num = false;

    if (is_b_num)
        cout << "Yes" << endl;
    else
        cout << "No" << endl;

    return 0;
}
