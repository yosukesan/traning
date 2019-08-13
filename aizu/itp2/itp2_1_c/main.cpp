
#include <iostream>
#include <string>
#include <algorithm>
#include <set>
#include <cmath>
#include <vector>
#include <list>

typedef long long ll;

using namespace std;

int main()
{
    ll n;
    cin >> n;

    list<ll> lst;

    ll op, tmp;
    auto it (lst.end());
    for (ll i=0; i<n; i++)
    {
        cin >> op;

        switch (op)
        {
            case 0:
            {
                cin >> tmp;
                lst.insert(it, tmp);
                //it++;
                break;
            }
            case 1:
            {
                cin >> tmp;
                if (tmp > 0)
                    while (tmp != 0) tmp--, it++;
                else
                    while (tmp != 0) tmp++, it--;
                break;
            }
            case 2:
            {
                lst.erase(it);
                //it++;
                break;
            }
        }
    }

    for (auto k: lst)
        cout << k << endl;

    return 0;
}
