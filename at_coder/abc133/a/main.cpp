
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
    ll n, a, b, ans;
    cin >> n >> a >> b;

    ans = (n * a < b) ? n*a : b;

    cout << ans << endl;

    return 0;
}
