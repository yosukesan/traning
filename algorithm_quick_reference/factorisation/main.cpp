
#include <iostream>
#include <vector>

using namespace std;

vector<int> factorise(const int&& n)
{
    vector<int> ans;

    for (int i=1; i*i<=n; i++)
    {
        if (n%i == 0)
            ans.push_back(i);
    }

    return ans;
}

int main()
{
    for (auto i: factorise(258))
        cout << i << endl;
    return 0;
}
