
#include <iostream>
#include <string>
#include <algorithm>
#include <set>
#include <cmath>
#include <vector>

typedef long long ll;

using namespace std;

const string HASH = string(1, '#');

ll dfs_helper(vector<string>& s, ll&h, ll&w, ll i, ll j, ll& direction, ll& count)
{
    if (i < 0 && i>=h)
        return count;

    if (j < 0 && i>=w)
        return count;

    if (s[i+j*w] == HASH)
            count++;

    ll x, y;
    x = i;
    y = j;

    if (direction = -1)
        x = i-1;

    if (direction = +1)
        x = i+1;

    if (direction = -w)
        y = y - w;

    if (direction = +w)
        y = y + w;

    return dfs_helper(s, w, h, x, y, direction, count);
}

ll dfs(vector<string>& s, ll& w, ll& h, ll i, ll j)
{
    ll count (0);;
    ll sum (0);

    count = 0;
    sum += dfs_helper(s, w, h, i-1, j, -1, count);

    count = 0;
    sum += dfs_helper(s, w, h, i+1, j, +1, count);

    count = 0;
    sum += dfs_helper(s, w, h, i, j-1, -w, count);

    count = 0;
    sum += dfs_helper(s, w, h, i, j+1, +w, count);

    return sum;
}

int main()
{
    ll h, w;
    string tmp;
    vector<string> s;
    cin >> h >> w;

    for (ll i=0; i<h*w; i++)
            cin >> tmp, s.push_back(tmp);

    for (ll i=0; i<h; i++)
    {
        for (ll j=0; j<w; j++)
        {
            if (s[j+i*w] != HASH)
            {
                cout << dfs(s, w, h, i, j) << endl; 
            }
        }
    }


    return 0;
}
