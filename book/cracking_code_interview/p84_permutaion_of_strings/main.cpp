
#include <iostream>
#include <string>
#include <vector>

using namespace std;

void make_string(vector<string>* storage, const string& str)
{
    for (auto j: str)
    {
        for (int i=0; i<str.length()+1; ++i)
        {
            string tmp = str;
            tmp.insert(i, 1, j);
            storage->push_back(tmp);
        } 
    }

}

int main()
{
    string str = "ab";   
    vector<string> storage; 

    make_string(&storage, str);

    for (auto i: storage)
        cout << i << endl;

    return 0;
}
