
#include <iostream>
#include <iomanip>

int main()
{
    double a, b;

    std::cin >> a >> b;
    
    std::cout << std::fixed <<  static_cast<long long>(a)/static_cast<long long>(b) << ' ' << static_cast<long long>(a) % static_cast<long long>(b) << ' ' << std::setprecision(15) << a * (1.0 / b) <<  std::endl;

    return 0;
}
