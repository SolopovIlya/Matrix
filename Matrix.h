#ifndef NEW_MATRIX_H
#define NEW_MATRIX_H
#include <iostream>
#include <ctime>


class Matrix{
    int size1 = 0;
    int size2 = 0;
    double **arr;
public:
    Matrix operator *(int x);
    Matrix operator *(Matrix &other);
    Matrix operator +(const Matrix &other);
    Matrix operator -(const Matrix &other);
    Matrix& operator =(const Matrix &other);
    friend std::ostream& operator<<(std::ostream &os, Matrix &a);
    bool operator ==(const Matrix &other);
    bool operator !=(const Matrix &other);
    bool isNull();
    double operator() (int i, int j) const;
    double & operator() (int i, int j);
    void size();
    explicit Matrix(int Size1 = 5, int Size2 = 5, bool Null = false);
    Matrix submatrix(int cols, int rows);
    Matrix(const Matrix &other);
    Matrix(const Matrix &other, int Rows, int Cols);
    ~Matrix();

};


#endif //NEW_MATRIX_H
