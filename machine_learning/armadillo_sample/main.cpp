
#include <iostream>

#include <armadillo>

int main ()
{
    arma::vec a  = arma::linspace(0, 5, 6);
    arma::vec b  = arma::linspace(-9, -4, 6);

    std::cout << a << std::endl;
    std::cout << b << std::endl;

    std::cout << arma::dot(a, b) << std::endl;
}
