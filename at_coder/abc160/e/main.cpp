
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

//using ul = long long int;
using ul = unsigned long long int;
const ul LL_MAX (1LL<<60);
const ul MOD (1000000007);

#define rep(i,s,e) for(ul i=(s); i<(e); i++) 

using namespace std;

using T = tuple<ul,ul>;
using Graph = vector<vector<T>>;

int main()
{
    cin.tie(0);
    ios::sync_with_stdio(false);

    ul x,y,a,b,c;
    cin >>x >>y>> a>> b>> c;
    vector<ul> p(a);
    vector<ul> q(b);
    vector<ul> r(c);
    priority_queue<ul> v;

    rep(i,0,a)
        cin >> p[i];

    rep(i,0,b)
        cin >> q[i];

    rep(i,0,c)
        cin >> r[i];

    sort(p.begin(), p.end(), greater<ul>());
    sort(q.begin(), q.end(), greater<ul>());
    sort(r.begin(), r.end(), greater<ul>());

    rep(i,0,x)    
        v.push(p[i]);

    rep(i,0,y)    
        v.push(q[i]);

    rep(i,0,c)    
        v.push(r[i]);

    ul ans(0);
    rep(i, 0, x+y)
        ans += v.top(), v.pop();

    cout << ans << endl;

    return 0;
}
