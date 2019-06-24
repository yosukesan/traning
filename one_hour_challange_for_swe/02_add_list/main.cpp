
#include <iostream>
#include <string>
#include <list>

using namespace std;

int main()
{
    list<string> s1, s2;
    list<string> ans;
    s1.push_back("a");
    s1.push_back("b");
    s1.push_back("c");

    s2.push_back("1");
    s2.push_back("2");
    s2.push_back("3");

    if (s1.size() != s2.size())
        return 1;

    while (0 != s1.size())
    {
        ans.push_back(*(s1.begin()));
        ans.push_back(*(s2.begin()));
        s1.pop_front();
        s2.pop_front();
    }

    while (0 != ans.size())
    {
        cout << *(ans.begin()) << " ";
        ans.pop_front();
    }

    cout << endl;

    return 0;
}
