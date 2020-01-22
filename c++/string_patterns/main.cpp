
#include<iostream>
#include<string>
#include <typeinfo>

using namespace std;

int main()
{
    string str("abc");

    string ss = str;

    for (int i=str.size(); i>=0; i--)
    {
        string t (str[i],1);
        ss.insert(i, t);
    }

    cout << ss << endl;

    return 0;
}
