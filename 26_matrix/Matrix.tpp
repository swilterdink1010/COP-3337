#include "Matrix.hpp"
#include <stdexcept>
#include <iostream>
#include <iomanip>
#include <fstream>

template <typename T>
Matrix<T>::Matrix(int rows, int cols) : rows(rows), cols(cols) {
    if (rows <= 0 || cols <= 0) {
        rows = 0;
        cols = 0;
        throw std::logic_error("Rows and columns must be greater than 0");
    }

    data = new T*[rows];
    for (int i = 0; i < rows; i++) {
        data[i] = new T[cols];

        for (int j = 0; j < cols; j++) {
            data[i][j] = T();
        }
    }
}

template <typename T>
void Matrix<T>::print() const {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            std::cout << std::left << std::setw(6) << data[i][j];
        }
        std::cout << std::endl;
    }
}

template <typename T>
Matrix<T>::~Matrix() {
    for (int i = 0; i < rows; i++) {
        delete[] data[i];
    }
    delete[] data;
}

template <typename T>
Matrix<T> Matrix<T>::load(const char* filename) {
    std::ifstream in(filename);
    if (!in) {
        throw std::invalid_argument("Cannot read file");
    }

    int r, c;
    in >> r >> c;
    Matrix<T> m(r, c);

    for (int i = 0; i < m.rows; i++) {
        for (int j = 0; j < m.cols; j++) {
            in >> m.data[i][j];
        }
    }

    in.close();
    return m;
}