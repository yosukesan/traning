
#include <iostream>
#include <string>
#include <algorithm>
#include <set>
#include <cmath>
#include <vector>

typedef long long ll;

using namespace std;

typedef struct data
{
    ll id, score;
    string name;
} data_t;

int main()
{
    ll n;
    string ss;
    ll va; 

    cin >> n;
    vector<data_t> t(n);

    for (ll i=0; i<n; ++i)
    {
        cin >> ss >> va;
        t[i].id = i;
        t[i].name = ss;
        t[i].score = va;
    }

    for (ll i=0; i<n; i++) 
    {
        for (ll j=i; j<n; j++)
        {
            if (t[i].name > t[j].name)
            {
                swap(t[i].name, t[j].name);
                swap(t[i].id, t[j].id);
                swap(t[i].score, t[j].score);
            }

            if (t[i].name == t[j].name)
            {
                if (t[i].score < t[j].score)
                {
                    swap(t[i].id, t[j].id);
                    swap(t[i].score, t[j].score);
                }
            }
        }
    }

    for (ll i=0; i<n; ++i)
    {
        cout << t[i].id+1 << endl;
        //cout << t[i].name << t[i].score << endl;
    }

    return 0;
}
