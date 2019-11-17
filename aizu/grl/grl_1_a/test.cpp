
#include <queue>
#include <iostream>

using namespace std;

int main()
{
    priority_queue<int, vector<int>, greater<int>> q;
    q.push(4);
    q.push(10);
    q.push(3);

    while (!q.empty())
    {
        cout << q.top() << endl;
        q.pop();
    }

    return 0;
}
