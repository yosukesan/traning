
#include <iostream>

using namespace std;

int main()
{
    int a, b, c, x;
    int counter = 0;

    cin >> a >> b >> c >> x;

    for (int k=0; k<=a; ++k)    
    {
        for (int j=0; j<=b; ++j)    
        {
            for (int l=0; l<=c; ++l)    
            {
                counter += (k*500 + j*100 + l*50 == x)? 1 : 0;
            }
        }
    }

    cout << counter << endl;

    return 0;
}
