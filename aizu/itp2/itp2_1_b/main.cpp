
#include <iostream>
#include <string>
#include <algorithm>
#include <set>
#include <cmath>
#include <vector>
#include <deque>

typedef long long ll;

using namespace std;

int main()
{
    ll n;
    cin >> n;

    deque<ll> q;

    ll op, dest, tmp;
    for (ll i=0; i<n; i++)
    {
        cin >> op;

        switch (op)
        {
            case 0:
            {
                cin >> dest;
                cin >> tmp;
                switch (dest)
                {
                    case 0:
                        q.push_front(tmp);
                        break;
                    case 1:
                        q.push_back(tmp);
                        break;
                }
                break;
            }
            case 1:
                cin >> dest;
                cout << q[dest] << endl;
                break;
            case 2:
                cin >> dest;
                switch (dest)
                {
                    case 0:
                        q.pop_front();
                        break;
                    case 1:
                        q.pop_back();
                        break;
                }
                break;
        }
    }

    return 0;
}
