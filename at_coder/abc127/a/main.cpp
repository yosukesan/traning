
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
    
    if (a >= 13)
        cout << b << endl;
    else if(a >= 6 && a < 13)
        cout << b/2 << endl;
    else if(a < 6)
        cout << 0 << endl;

    return 0;
}
