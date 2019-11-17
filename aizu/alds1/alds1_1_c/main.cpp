
#include <iostream>
#include <string>
#include <algorithm>
#include <set>
#include <cmath>
#include <vector>
#include <numeric>

typedef long long ll;

using namespace std;

void make_prim_num(vector<ll>* prims, const ll& max_num)
{
    ll len (max_num);
    vector<bool> is_prime(len, true);

    for (ll i=2; i<len; i++)
    {
        if (is_prime[i])
        {
            for (ll j=2*i; j<len; j+=i)
                    is_prime[j] = false;

            prims->push_back(i);
        }
    }
}

int main()
{
    ll n;
    cin >> n;

    vector<ll> a(n);

    for (auto &i: a) cin >> i;

    ll limit (-9999999999);
    for (auto i: a)
    {
        limit = max(limit, i);
    }

    vector<ll> prims;
    make_prim_num(&prims, limit+1);

    //for (auto i: prims)
    //{
    //    cout << i << endl; 
    //}

    ll j=0, k=0, count(0);
    while (a[j] && prims[k]) 
    {
        if (a[j] == prims[k])
        {
            //cout << a[j] << endl;
            j++, k++, count++;
        }
        else
            j++;
    }

    cout << count << endl;

    return 0;
}
