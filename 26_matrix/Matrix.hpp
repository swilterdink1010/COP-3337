#ifndef MATRIX_HPP
#define MATRIX_HPP

template <typename T>
class Matrix {
public:
    Matrix(int rows = 1, int cols = 1);
    Matrix(const Matrix<T>& other);
    ~Matrix();

    Matrix<T>& operator=(const Matrix<T>& other);
    Matrix<T>& operator+(const Matrix<T>& other);

    static Matrix<T> load(const char* filename);

    void print() const;

private:
    T** data;
    int rows, cols;
};

#include "Matrix.tpp"

#endif