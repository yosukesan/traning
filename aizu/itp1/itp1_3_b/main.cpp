
#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int a;

    for (int i=0; ; i++)
    {
        cin >> a;

        if (a == 0)
            break; 
    
        cout << "Case "  << i+1 << ": " << a << endl;    
    }

    return 0;
}
