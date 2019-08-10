
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
    ll a, b;
    cin >> a >> b;

    vector<ll> ans(3);

    ans[0] = a + b;
    ans[1] = a - b;
    ans[2] = a * b;

    sort(ans.begin(), ans.end(), greater<ll>());    

    cout << ans[0] << endl;

    return 0;
}
