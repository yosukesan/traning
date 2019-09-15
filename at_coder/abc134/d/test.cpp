
#include <iostream>

using namespace std;

int main()
{
    int i, j;

    const int N=9;

    for (j=N; j>0; j--)
    {
        for (i=j; i<N; i+=j)
            cout << i << ' ';
        cout << endl;
    }
    return 0;
}
