
#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;

int main()
{
    vector<string> str ({"test", "yao", "goo", "foo"});
    unordered_map<int, string> h;

    for (int i=0; i<str.size(); i++)
        h.insert({i,str[i]});

    return 0;
}
