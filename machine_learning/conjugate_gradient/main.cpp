
#include <iostream>

#include <armadillo>

class LinearSolvers
{
    size_t _iter_max;
    double _eps;

public:
    LinearSolvers(){}

    LinearSolvers(const size_t& iter_max, const double& eps)
    : _iter_max(iter_max),
    _eps(eps)
    {}

    constexpr size_t iter_max(){return _iter_max;}
    constexpr double eps(){return _eps;}

    void BiCGSTAB(arma::vec& x, arma::mat& A, arma::vec&b)
    {
        const int enable_norm2(2);
        arma::vec r = b - A*x;    
        arma::vec p(r.size(), arma::fill::zeros);
        arma::vec v(r.size(), arma::fill::zeros);
        arma::vec r0 = r;

        arma::vec h, s, t; 
        double rho(1.0), rho_(0.0), alpha(1.0), omega(1.0), beta(0.0); 
        for (size_t k=0; k<iter_max(); k++)
        {
            rho_ = rho;
            rho = dot(r0, r);
            beta = (rho /rho_) * (alpha /omega);
            p = r + beta * (p - omega * v);
            v = A*p;
            alpha = rho / dot(r0, v);
            h = x + alpha * p; 

            if (norm(b-A*h,enable_norm2) <eps())
            {
                x = h;
                return;
            }

            s = r - alpha * v; 
            t = A*s;
            omega = dot(t,s) / dot(t, t);
            x = h + omega * s;

            if (norm(x,enable_norm2)<eps())
                return;

            r = s - omega * t;
        }
    }

    void conjugate_gradient(arma::vec& x, arma::mat& A, arma::vec& b)
    {
        const int enable_norm2(2);
        arma::vec r = b - A*x;    
        arma::vec p = r;

        double alpha(0), beta(0);
        arma::vec rr;

        for (size_t k=0; k<iter_max(); k++)
        {
            alpha = dot(r,p) / dot(p, A*p);
            x += alpha * p;
            rr = r;
            r -= alpha * A*p;
            
            if (norm(r,enable_norm2)<eps()) 
                return;
    
            beta = dot(r,r) / dot(rr,rr);          
            p = r + beta * p;
        }
    }
};

int main ()
{
    arma::vec x({2.0, 1.0});
    arma::vec b({1.0, 2.0});
    arma::mat A({{4.0, 1.0}, {1.0, 3.0}});

    std::cout << "A=\n" << A << std::endl;
    std::cout << "b=\n" << b << std::endl;

    LinearSolvers linsolve(x.size(), 1.0e-6);
    //linsolve.conjugate_gradient(x, A, b);
    linsolve.BiCGSTAB(x, A, b);

    std::cout << "x=\n" << x << std::endl;
    std::cout << "check= (should be equal to vector b)\n" << A*x << std::endl;

    return 0;
}
