
#include <iostream>
#include <vector>

using namespace std;

/*
            1
        1       1
    1       2       1 
1       3       3       1
 */

int pascal_tria(int level, int lat)
{
    if (level <= 2)
        return 1;

    if (lat<1)
        lat = 1;

    if (lat>level)
        lat = level;

    if (lat == 1 || lat == level)
        return 1;

    return pascal_tria(level-1, lat-1) + pascal_tria(level-1, lat);
}

int main ()
{
    int n;
    cin >> n;
  
    for (int i=1; i<=n; i++)
    {
        for (int j=1; j<=i; j++)
        {
            cout << " " << pascal_tria(i,j);
        }
        cout << endl;
    }
 
    /* 
    cout << pascal_tria(1, 1) << endl;

    cout << pascal_tria(2, 1) << endl;
    cout << pascal_tria(2, 2) << endl;

    cout << pascal_tria(3, 1) << endl;
    cout << pascal_tria(3, 2) << endl;
    cout << pascal_tria(3, 3) << endl;

    cout << pascal_tria(4, 3) << endl;
    */

    return 0;
}
