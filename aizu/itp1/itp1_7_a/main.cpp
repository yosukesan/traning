
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
    ll m, f, r;
    ll scores[60][3] = {0};

    ll i(0);
    while (cin >> m >> f >> r)
    {
        scores[i][0] = m;    
        scores[i][1] = f;    
        scores[i][2] = r;    
        i++;

        if (m == -1 && f == -1 && r == -1)
            break;
    }

    const ll n(i);
    char result;
    for (ll j=0; j<n; j++)
    {
        m = scores[j][0];
        f = scores[j][1];
        r = scores[j][2];

        if (m == -1 && f == -1 && r == -1)
            break;

        //cout << m << ' ' << f  << ' ' << r << endl;

        if (m == -1 || f == -1 || m+f < 30)
            result = 'F';
        else if (m + f >= 80)
            result = 'A';
        else if (m + f >= 65 && m + f < 80)
            result = 'B';
        else if (m + f >= 50 && m + f < 65)
            result = 'C';
        else if (m + f >= 30 && m + f < 50)
        {
            if (r >= 50)
                result = 'C';
            else
                result = 'D';
        }
    
        cout << result << endl;
    }


    return 0;
}
