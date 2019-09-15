
#include <iostream>
#include <string>
#include <algorithm>
#include <set>
#include <cmath>
#include <vector>

typedef long long ll;
const ll LL_MAX (1LL<<60);

#define rep(i,s,e) for(ll i=(s); i<(e); i++) 

using namespace std;

int main()
{
    string s;
    cin >> s;

    if (s == "Sunny")
        cout << "Cloudy" << endl;
    else if (s == "Cloudy")
        cout << "Rainy" << endl;
    else if (s == "Rainy")
        cout << "Sunny" << endl;

    return 0;
}
