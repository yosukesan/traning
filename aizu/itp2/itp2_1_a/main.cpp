
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

    vector<ll> a;

    ll op, tmp;
    for (ll i=0; i<n; i++)
    {
        cin >> op;

        //for (auto k: a)
        //    cout << k << ' ';
        //cout << endl;

        switch(op)
        {
            case 0:
                cin >> tmp;
                a.push_back(tmp);
                break;
            case 1:
                cin >> tmp;
                cout << a[tmp] << endl;
                break;
            case 2:
                a.pop_back();
                break;
        }
    }

    return 0;
}
