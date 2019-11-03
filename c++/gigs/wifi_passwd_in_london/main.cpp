
#include <iostream>
#include <cmath>

double f(const double x)
{
    return (x*x*x * cos(0.5*x) + 0.5) * sqrt(4.0-x*x);
}

int main()
{
    const double from(-2.0);
    const double to(2.0);
    const double dx(1E-7);
    double sum(0.0);
    double x1;

    for (double x=from; x<=to-dx; x+=dx)
    {
        sum += (f(x+dx)+f(x))*dx;
    }
    sum *= 0.5;

    printf("ans = %1.15f\n", sum);
    printf("pi  = %1.15f\n", atan(1.0)*4.0);
}
