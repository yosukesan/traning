
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

    if (n < 60)
        cout << "Bad" << endl;
    else if (60 <= n && n < 90)
        cout << "Good" << endl;
    else if (90 <= n && n < 100)
        cout << "Great" << endl;
    else
        cout << "Perfect" << endl;

    return 0;
}
