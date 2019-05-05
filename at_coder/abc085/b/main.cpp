
#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    int n;
    int d[110] = {0};  

    cin >> n;

    for (int i=0; i<n; ++i)
        cin >> d[i];

    sort(&d[0], &d[n], greater<int>()); 

    //for (int i=0; i<n; ++i)
    //    cout << d[i];

    int count = 1;
    for (int i=1; i<n; ++i)
    {
        if (d[i] < d[i-1])
            ++count;
    }    

    cout << count << endl;

    return 0;
}
