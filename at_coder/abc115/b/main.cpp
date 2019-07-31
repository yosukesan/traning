
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
    ll n;

    cin >> n;

    vector<float> p(n);

    for (auto &i: p)
        cin >> i;

    sort(p.begin(), p.end(), greater<ll>());

    float sum = p[0]*0.5;

    for (ll j=1; j<n; j++)
    {
        sum += p[j];
    }

    cout << floor(sum) << endl;

    return 0;
}
