
#include <iostream>

template <typename T>
class Matrix
{
    size_t _col;
    size_t _row;
    T* _elem;

public:
    Matrix operator=(const Matrix& m);
    Matrix operator+(const Matrix& m);
    Matrix operator-(const Matrix& m);
    Matrix operator*(const Matrix& m);
    explicit Matrix(const Matrix& m);
    Matrix();
    ~Matrix();
    explicit Matrix(const size_t& row, const size_t& column);
};

template <typename T>
Matrix<T>::Matrix(const size_t& row, const size_t& column)
: _col(column), _row(row)
{

}

template <typename T>
Matrix<T>::~Matrix()
{
}

template <typename T>
Matrix<T> operator+(const Matrix<T>& m1, const Matrix<T>& m2)
{
    Matrix tmp(3,3);

    for (auto i, j: m1, m2)
        tmp = i + j; 
}

template <typename T>
Matrix Matrix<T>::operator=(const Matrix& m)
{
    return m;
}

//template <> class Matrix<double>;

int main()
{
    Matrix<double> m1(3, 3);
    Matrix<double> m2(3, 3);
    Matrix<double> m3(3, 3);

    m3 = m1 + m2;

    return 0;
}
