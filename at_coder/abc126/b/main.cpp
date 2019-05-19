
#include <iostream>
#include <string>
#include <algorithm>
#include <set>

typedef long long ll;

using namespace std;

int main()
{
    char c[4];
    int num[4];
 
    for (ll i=0; i<4; ++i) 
        cin >> c[i];
 
    for (ll i=0; i<4; ++i) 
        num[i] = c[i] - '0';

    if ((num[0]*10 + num[1] == 0) || (num[2]*10 + num[3] == 0) || (((num[2]*10 + num[3]) > 12) && ((num[0]*10 + num[1]) > 12)) )
    {
        cout << "NA" << endl;
    }
    else if ( ((num[0]*10 + num[1] <= 12) && (num[2]*10 + num[3] <= 99)) && ((num[0]*10 + num[1] <= 99) && (num[2]*10 + num[3] <= 12)) )
    {
        cout << "AMBIGUOUS" << endl;
    }
    else if ((num[0]*10 + num[1] <= 12) && (num[2]*10 + num[3] <= 99))
    {
        cout << "MMYY" << endl;
    }
    else if ((num[0]*10 + num[1] <= 99) && (num[2]*10 + num[3] <= 12))
    {
        cout << "YYMM" << endl;
    }
    
    return 0;
}
