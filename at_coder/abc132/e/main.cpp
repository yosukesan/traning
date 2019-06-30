
#include <iostream>
#include <string>
#include <algorithm>
#include <set>
#include <cmath>
#include <vector>

typedef long long ll;

using namespace std;

int main()
{
    ll n, m;
    ll s, t;
    
    cin >> n >> m;

    vector<vector<ll>> g(m);

    ll tmp[2];
    for (ll i=0; i<m; i++)
    {
        cin >> tmp[0] >> tmp[1]; 
        g.at(i).push_back(tmp[0]-1);
        g.at(i).push_back(tmp[1]-1);
    }

    cin >> s >> t;

    ll counter (0);
    for (ll j=0; j<n*m; j++)
    {
        vector<bool> visited(n, false);

        ll curr = s-1;
        ll hops (0);
        //while (curr != t-1 || hops > 6)
        while (hops < 6)
        {
            visited[curr] = true;        
            if (visited[g.at(curr)[1]] != true)
                curr = g.at(curr)[1];

            cout << curr << endl;

            hops++; 
        }

        if (hops == 6 && curr == t)
            counter++;
    }

    cout << counter << endl;

    return 0;
}
