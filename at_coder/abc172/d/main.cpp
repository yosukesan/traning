
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

//https://qiita.com/drken/items/a14e9af0ca2d857dad23#3-%E7%B4%84%E6%95%B0%E5%88%97%E6%8C%99
vector<long long> res;

size_t _mod(ll s, ll N) {
    for (long long i = s; i * i <= N; ++i) {
        if (N % i == 0) {
            res.push_back(i);
            // 重複しないならば i の相方である N/i も push
            if (N/i != i) res.push_back(N/i);
        }
    }

    // 小さい順に並び替える
    return res.size();
}

int main()
{
    cin.tie(0);
    ios::sync_with_stdio(false);

    ll n;
    cin >> n;

    ll accm(1), tmp;
    rep(i,2,n+1)
    {
        tmp = i * _mod(i-1, i);
        cout << tmp << endl;
        accm += tmp;
    }

    cout << accm << endl;

    return 0;
}
