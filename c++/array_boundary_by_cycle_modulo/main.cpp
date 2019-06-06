
#include <vector>
#include <iostream>
#include <numeric>

using namespace std;

int main()
{
    vector<int> arr(10);

    iota(arr.begin(), arr.end(), 100);

    for (int i=0; i<arr.size(); i++)
        cout << i % arr.size() << ": " << arr[i % arr.size()] << endl;

    return 0;
}
