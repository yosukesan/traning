
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
    ll n, d;

    cin >> n >> d;

    vector<vector<ll>> x(n);

    for (ll i=0; i<n; ++i)
    {
        for (ll j=0; j<d; ++j)
        {
            ll tmp;
            cin >> tmp; x.at(i).push_back(tmp);
        }
    }

    ll counter (0);
    for (ll i=0; i<n; i++)
    {
        double sum (0);
        for (ll k=i+1; k<n; k++)
        {
                for (ll j=0; j<d; ++j)
                {
                    sum += pow(x.at(i)[j] - x.at(k)[j], 2);     
                }
                sum = sqrt(sum);

                if (floor(sum) == ceil(sum))
                    counter++;
        }
    }

    cout << counter << endl;

    return 0;
}
