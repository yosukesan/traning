
#include <iostream>

using namespace std;

int main()
{
    int n(3);
    for (int s=0; s<(1<<n); s++)
    {
        for (int i=0; i<n; i++)
            if (s>>i && 1)
                cout << s << endl;
    }
}
