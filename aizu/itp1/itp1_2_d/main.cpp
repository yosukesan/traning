
#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    double w, h, x, y, r;
    bool check_x(false), check_y(false), check_w(false), check_h(false);

    cin >> w >> h >> x >> y >> r;

    if (2*w >= 2*x)
        check_w = true;

    if (2*h >= 2*y)
        check_h = true;

    if (w - x >= r && x >= r)
        check_x = true;

    if (h - y >= r && y >= r)
        check_y = true;

    if (check_w && check_h && check_x && check_y)
        cout << "Yes" << endl;
    else
        cout << "No" << endl;

    return 0;
}
