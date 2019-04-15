
#include <iomanip>
#include <iostream>

using namespace std;

int main()
{
    double t, x;
    cin >> t >> x;

    cout << setprecision(7) << t * (1.0/x) << endl;    

    return 0;
}
