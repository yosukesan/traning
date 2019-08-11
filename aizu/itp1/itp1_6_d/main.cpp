
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
    cin >> n >> m;
    //cout << n << ' ' << m << endl;

    vector<vector<ll>> matrix(n, vector<ll>(m));
    vector<ll> vec(m);
    vector<ll> ans(n);

    for (ll j=0; j<n; j++)
    {
        for (ll i=0; i<m; i++)
        {
            cin >> matrix[j][i];
        }
    }

    for (ll j=0; j<m; j++)
    {
        cin >> vec[j];
        //cout << vec[j] << endl;
    }

    for (ll j=0; j<n ; j++)
    {
        for (ll i=0; i<m; i++)
        {
            ans[j] += matrix[j][i] * vec[i];
            //cout << matrix[j][i] << ' ' << vec[i] << endl;
            //cout << ans[j] << endl;
        }
    }

    for (ll j=0; j<n; j++)
    {
        cout << ans[j] << endl;
    }

    return 0;
}
