
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
    ll n, m, l;

    cin >> n >> m >> l;

    if (n != l)
        cerr << "Error: n and l are different" << endl;

    vector<vector<ll>> a(n, vector<ll>(m));
    vector<vector<ll>> b(m, vector<ll>(l));
    vector<vector<ll>> c(n, vector<ll>(l));

    for (ll j=0; j<n; j++)
    {
        for (ll i=0; i<m; i++)
        {
            cin >> a[j][i];
        }
    }

    for (ll j=0; j<m; j++)
    {
        for (ll i=0; i<l; i++)
        {
            cin >> b[j][i];
        }
    }

    /*
    for (ll j=0; j<n; j++)
    {
        for (ll i=0; i<m; i++)
        {
            cout<< a[j][i] << ' ';
        }
        cout << endl;
    }

    for (ll j=0; j<m; j++)
    {
        for (ll i=0; i<l; i++)
        {
            cout << b[j][i] << ' ';
        }
        cout << endl;
    }
    */

    for (ll k=0; k<n; k++)
    {
        for (ll j=0; j<n; j++)
        {
            for (ll i=0; i<m; i++)
            {
                c[j][k] +=  a[j][i] * b[i][k];
            }
        }
    }
    
    for (ll k=0; k<n; k++)
    {
        for (ll j=0; j<n; j++)
        {
            cout << c[k][j] << ' ';
        }
        cout << endl;
    }

    return 0;
}
