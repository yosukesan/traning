
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

    const ll off(-'a'+'A');

    string s1, s2, s3;
    cin >> s1 >> s2 >> s3;
    printf("%c%c%c\n", s1[0]+off, s2[0]+off, s3[0]+off);
    return 0;
}
