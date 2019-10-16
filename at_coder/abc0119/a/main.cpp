
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
    cin.tie(0);
    ios::sync_with_stdio(false);

    string s;
    cin >> s;

    int y = (s[0]-48)*1000 + (s[1]-48)*100 + (s[2]-48)*10 + s[3]-48;
    int m = (s[5]-48)*10 + (s[6]-48);
    int d = (s[8]-48)*10 + (s[9]-48);

    if (y<=2019 && m <=4 && d<=31)
        cout << "Heisei" << endl;
    else
        cout << "TBD" << endl;

    return 0;
}
