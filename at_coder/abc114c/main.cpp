
#include <iostream>
#include <string>
#include <set>

using namespace std;

int main()
{
    string in("");
    cin >> in;

    set<string> num_753;
    num_753.insert("357");
    num_753.insert("573");
    num_753.insert("753");
    num_753.insert("537");
    num_753.insert("375");
    num_753.insert("735");
    

    for (unsigned int i=0; i<in.size(); ++i)
    {
        for (auto j : num_753)
            cout << j << endl;
    }

    return 0;
}
