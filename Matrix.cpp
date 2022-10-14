//
// Created by solopov on 14.09.2022.
//

#include "Matrix.h"


Matrix::~Matrix(){
    if(size1 > 0) {
        for (int i = 0; i < size1; ++i){
            delete[] arr[i];
        }
        delete[] arr;
    }
}

Matrix::Matrix(const Matrix &other) {
    size1 = other.size1;
    size2 = other.size2;
    arr = new double *[size1];

    for (int i = 0; i < size1; ++i){
        arr[i] = new double [size2];
    }
    for (int i = 0; i < size1; ++i){
        for (int j = 0; j < size2; ++j){
            arr[i][j] = other.arr[i][j];
        }
    }

}

Matrix::Matrix(int Size1, int Size2, bool Null) {
    if(Size1 <= 0) {
        throw -1;
    } else if(Null){
        size1 = Size1;
        size2 = Size2;
        arr = new double *[size1];

        for (int i = 0; i < size1; ++i){
            arr[i] = new double [size2];
        }
        for (int i = 0; i < size1; ++i){
            for (int j = 0; j < size2; ++j){
                arr[i][j] = double(0);
            }
        }
    } else {
        size1 = Size1;
        size2 = Size2;
        arr = new double *[size1];

        for (int i = 0; i < size1; ++i){
            arr[i] = new double [size2];
        }
        for (int i = 0; i < size1; ++i){
            for (int j = 0; j < size2; ++j){
                arr[i][j] = double(rand() % 100)/10;
            }
        }
    }
}

Matrix& Matrix::operator=(const Matrix &other) {
    for (int i = 0; i < size1; ++i){
        delete[] arr[i];
    }
    delete[] arr;

    size1 = other.size1;
    size2 = other.size2;
    arr = new double *[size1];

    for (int i = 0; i < size2; ++i){
        arr[i] = new double [size2];
    }
    for (int i = 0; i < size1; ++i) {
        for (int j = 0; j < size2; ++j) {
            arr[i][j] = other.arr[i][j];
        }
    }
    return *this;
}

Matrix Matrix::operator+(const Matrix &other) {
    Matrix a;
    a.size1 = other.size1;
    a.size2 = other.size2;
    a.arr = new double *[size1];

    for (int i = 0; i < size1; ++i){
        a.arr[i] = new double [size2];
    }
    for (int i = 0; i < size1; ++i) {
        for (int j = 0; j < size2; ++j) {
            a.arr[i][j] = arr[i][j] + other.arr[i][j];
        }
    }
    return a;
}

Matrix Matrix::operator*(int x) {
    Matrix a;
    a.size1 = size1;
    a.size2 = size2;
    a.arr = new double *[a.size1];
    for (int i = 0; i < a.size1; ++i){
        a.arr[i] = new double [a.size2];
    }
    for (int i = 0; i < a.size1; ++i) {
        for (int j = 0; j < a.size2; ++j) {
            a.arr[i][j] = arr[i][j] * x;
        }
    }
    return a;
}

double Matrix::operator()(int i, int j) const {
    if(j>=0 && j<size1){
        if(i>=0&&1<size2){
            return arr[j][i];
        }
    } else throw -1;
}

double &Matrix::operator()(int i, int j) {
    if(j>=0 && j<size1){
        if(i>=0&&1<size2){
            return arr[j][i];
        }
    } else throw -1;
}

Matrix Matrix::operator-(const Matrix &other) {
    Matrix a;
    a.size1 = other.size1;
    a.size2 = other.size2;
    a.arr = new double *[size1];
    for (int i = 0; i < size1; ++i){
        a.arr[i] = new double [size2];
    }
    for (int i = 0; i < size1; ++i) {
        for (int j = 0; j < size2; ++j) {
            a.arr[i][j] = arr[i][j] - other.arr[i][j];
        }
    }
    return a;
}

bool Matrix::operator==(const Matrix &other) {
    if(size1 == other.size1){
        if(size2 == other.size2){
            bool flag = true;
            for(int i = 0; (i < size1)&&(flag); ++i){
                for(int j = 0; (j < size2)&&(flag); ++j){
                    flag = arr[i][j] == other.arr[i][j];
                }
                return flag;
            }
        }
    }
    return false;
}

bool Matrix::operator!=(const Matrix &other) {
    return !(*this==other);
}

Matrix Matrix::operator*(Matrix &other) {
    if(this->size2 == other.size1) {
        Matrix a(this->size1, other.size2);
        for (int i = 0; i < a.size1; ++i) {
            for (int j = 0; j < a.size2; ++j) {
                int x = 0;
                for (int r = 0; r < this->size2; ++r) {
                    x += this->arr[i][r] * other.arr[r][j];
                }
                a.arr[i][j] = x;
            }
        }
        return a;
    } throw -1;
}

void Matrix::size() {
    std::cout<<"Rows: "<<size1<<"Columns: "<<size2<<std::endl;
}

Matrix::Matrix(const Matrix &other, int Rows, int Cols) {
    size1 = Rows;
    size2 = Cols;
    arr = new double *[size1];
    for (int i = 0; i < size1; ++i){
        arr[i] = new double [size2];
    }
    for (int i = 0; i < size1; ++i){
        for (int j = 0; j < size2; ++j){
            arr[i][j] = other.arr[i][j];
        }
    }
}

std::ostream &operator<<(std::ostream &os, Matrix &a) {
    for (int i=0; i<a.size1; i++)
    {
        for (int j=0; j<a.size2; j++)
            os<<a.arr[i][j]<<"\t";
        os<<"\n";
    }
    return os;
}

bool Matrix::isNull() {
    bool flag = true;
    for(int i = 0; (i < size1)&&(flag); ++i){
        for(int j = 0; (j < size2)&&(flag); ++j){
            flag = arr[i][j] == 0;
        }
        return flag;
    }
    return false;
}

Matrix Matrix::submatrix(int rows, int cols) {
    return Matrix(*this, rows, cols);
}