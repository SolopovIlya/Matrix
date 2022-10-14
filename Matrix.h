#include <iostream>

#ifndef NEW_MATRIX_H
#define NEW_MATRIX_H


class DArray{
    int size1 = 0;
    int size2 = 0;
    double **arr;
public:
    DArray operator *(int x);
    DArray operator *(DArray &other);
    DArray operator +(const DArray &other);
    DArray operator -(const DArray &other);
    DArray& operator =(const DArray &other);
    friend std::ostream& operator<<(std::ostream &os, DArray &a);
    bool operator ==(const DArray &other);
    bool operator !=(const DArray &other);
    bool isNull();
    double operator() (int i, int j) const;
    double & operator() (int i, int j);
    void size();
    explicit DArray(int Size1 = 5, int Size2 = 5, bool Null = false);
    DArray submatrix(int cols, int rows);
    DArray(const DArray &other);
    DArray(const DArray &other, int Rows, int Cols);
    ~ DArray();
};


#endif //NEW_MATRIX_H
