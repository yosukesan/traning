
#include <iostream>
#include <string>

using namespace std;

int main()
{
    string s;
    cin >> s;

    //for (size_t i=0; i<s.size(); ++i)
    //    cout << s[i];

    for (size_t i=0; i<s.size(); i++)
    {
        if (s[i] == 'O')
            s[i] = 'A';
        else if (s[i] == 'A')
            s[i] = 'O';
    }

    for (size_t i=0; i<s.size(); i++)
        cout << s[i];

    return 0;
}
