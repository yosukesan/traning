
#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main()
{
    double r;
    const double PI = atan(1.0) * 4.0;
    cin >> r;

    cout << fixed << setprecision(15) << r * r * PI << ' ' << 2 * r * PI << endl;
} 
