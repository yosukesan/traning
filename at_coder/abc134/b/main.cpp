
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

    if ((n % (2*d + 1)) == 0)
        cout << n / (2*d + 1)  << endl;
    else
        cout << n / (2*d + 1)+1  << endl;

    return 0;
}
