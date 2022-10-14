//
// Created by solop on 14.09.2022.
//

#include "Matrix.h"


DArray::~DArray(){
    if(size1 > 0) {
        for (int i = 0; i < size1; ++i){
            delete[] arr[i];
        }
        delete[] arr;
    }
}

DArray::DArray(const DArray &other) {
    if(other.size1 <= 0) {
        std::cout << "Can't create empty array!" << "\n";
        arr = nullptr;
    } else {
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
}

DArray::DArray(int Size1, int Size2, bool Null) {
    if(Size1 <= 0) {
        std::cout << "Can't create matrix with size below 1!" << "\n";
        arr = nullptr;
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

DArray& DArray::operator=(const DArray &other) {
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

DArray DArray::operator+(const DArray &other) {
    DArray a;
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

DArray DArray::operator*(int x) {
    DArray a;
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

double DArray::operator()(int i, int j) const {
    if(i>=0 && i<size1){
        if(j>=0&&j<size2){
            return arr[i][j];
        }
    } else exit(-1);
}

double &DArray::operator()(int i, int j) {
    if(i>=0 && i<size1){
        if(j>=0&&j<size2){
            return arr[i][j];
        }
    } else exit(-1);
}

DArray DArray::operator-(const DArray &other) {
    DArray a;
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

bool DArray::operator==(const DArray &other) {
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

bool DArray::operator!=(const DArray &other) {
    DArray a;
    a.size1 = size1;
    a.size2 = size2;
    a.arr = new double *[size1];
    for (int i = 0; i < size1; ++i){
        a.arr[i] = new double [size2];
    }
    for (int i = 0; i < size1; ++i){
        for (int j = 0; j < size2; ++j){
            a.arr[i][j] = arr[i][j];
        }
    }
    return !(a==other);
}

DArray DArray::operator*(DArray &other) {
    if((this->size2 == other.size1)&&(this->size1 == 1||other.size2 == 1)) {
        DArray a(this->size1, other.size2);
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
    }else exit(-1);
}

void DArray::size() {
    std::cout<<"Rows: "<<size1<<"Columns: "<<size2<<std::endl;
}

DArray::DArray(const DArray &other, int Rows, int Cols) {
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

std::ostream &operator<<(std::ostream &os, DArray &a) {
    for (int i=0; i<a.size1; i++)
    {
        for (int j=0; j<a.size2; j++)
            os<<a.arr[i][j]<<"\t";
        os<<"\n";
    }
    return os;
}

bool DArray::isNull() {
    bool flag = true;
    for(int i = 0; (i < size1)&&(flag); ++i){
        for(int j = 0; (j < size2)&&(flag); ++j){
            flag = arr[i][j] == 0;
        }
        return flag;
    }
    return false;
}

DArray DArray::submatrix(int rows, int cols) {
    return DArray(*this, rows, cols);
}