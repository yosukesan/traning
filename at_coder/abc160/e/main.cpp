
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
    priority_queue<ul> p;
    priority_queue<ul> q;
    priority_queue<ul> r;

    rep(i,0,a)
    {
        ul pp;
        cin >> pp;
        p.push(pp);
    }
    rep(i,0,b)
    {
        ul qq;
        cin >> qq;
        q.push(qq);
    }
    rep(i,0,c)
    {
        ul rr;
        cin >> rr;
        r.push(rr);
    }

    ul ans(0);

    rep(i,0,x)
    {
        ul tx = p.top();
        ul tr = r.top();

        if (tx > tr)
            ans += tx, p.pop();
        else
            ans += tr, r.pop();
    }

    rep(i,0,y)
    {
        ul ty = q.top();
        ul tr = r.top();

        if (ty > tr)
            ans += ty, q.pop();
        else
            ans += tr, r.pop();
    }

    cout << ans << endl;

    return 0;
}
