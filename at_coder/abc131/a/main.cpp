
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
    string s;
    string result ("Good");
    cin >> s;

    for (ll i=1; i<s.size(); ++i)
    {
            if (s[i-1] == s[i])
            {
                    result = "Bad";
                    cout << result << endl;
                    return 0;
            }
    }
    cout << result << endl;


    return 0;
}
