
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
    ll w, h, x, y;
    cin >> w >> h >> x >>y;

    ll multi_case (0);
    double a[4] = {0.0f};
    double ans, ans_x, ans_y;

    if (w == h && x == y) multi_case = 1; 

    if (x != h)
        a[0] = x * h;

    if (w-h != h)
        a[1] = (w - x) * h;

    if (w != y)
        a[2] = w * y;

    if (w != h-y)
        a[3] = w * (h - y);

    //for (ll j=0; j<4; ++j)
    //    cout << a[j] << endl;

    // -----
    if (x != 0 && y != 0 ) 
    {
        if (a[0] < a[1])
            ans_x = a[0];
        else
            ans_x = a[1];

        if (a[2] < a[3])
            ans_y = a[2];
        else
            ans_y = a[3];

        if (ans_x > ans_y)
            ans = ans_x;
        else
            ans = ans_y;
    }
    else
    {
        sort(a, a+4, greater<ll>());
        ans = a[0];
    }
   
    if (w-x == 0 && h-y == 0)
    {
        sort(a, a+4, greater<ll>());
        ans = a[0];
    }

    cout << ans << ' ' << multi_case;

    return 0;
}
