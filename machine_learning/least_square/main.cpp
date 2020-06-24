
#include <iostream>
#include <tuple>

#include <armadillo>

class Regression
{
public:
    std::tuple<double, double> least_square(arma::vec& x, arma::vec& y)
    {
        const size_t n(x.size());
        const double sum_x (arma::sum(x));
        const double sum_y (arma::sum(y));
        const double neum = dot(x,y) - sum_y * (1.0/n) * sum_x;
        const double denm = arma::sum(dot(x,x)) - sum_x * (1.0/n) * sum_x;

        double a = neum * (1.0/denm);
        double b = sum_y * (1.0/n) - a * sum_x * (1.0/n);

        return std::tuple<double, double>(a, b);
    }
};

int main ()
{
    arma::vec x ({1,2,4,6,7});
    arma::vec y ({1,3,3,5,4});

    Regression reg;
    std::tuple<double, double> coef (reg.least_square(x, y));

    std::cout << std::get<0>(coef) << " " << std::get<1>(coef) << std::endl;
}
