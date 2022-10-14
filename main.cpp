#include "Matrix.h"

int main() {
    DArray arr1;
    std::cout<<arr1;
    DArray arr2(2, 2);
    std::cout<<arr2;
    DArray arr3(arr1);
    std::cout<<arr3;
    std::cout<<(arr3 == arr1)<<"\n"<<(arr3 != arr1)<<"\n";
    DArray arr4(3, 8);
    std::cout<<arr4;
    std::cout<< arr4(1, 2)<<"\n";
    arr4(1, 2) += 1;
    std::cout<< arr4(1, 2)<<"\n";
    std::cout<<"\n";
    arr3 = arr1 + arr3;
    std::cout<<arr3;
    std::cout<<(arr3 == arr1)<<"\n"<<(arr3 != arr1)<<"\n";
    arr3 = arr1 - arr3;
    std::cout<<arr3;
    arr2 = arr2*5;
    std::cout<<arr2;
    std::cout<<"\n";
    DArray arr5(1, 4);
    std::cout<<arr5;
    DArray arr6(4, 3);
    std::cout<<arr6;
    arr5 = arr5 * arr6;
    std::cout<<arr5;
    DArray arr7(3, 4, true);
    std::cout<<arr7.isNull()<<std::endl;
    DArray arr8(10, 10);
    std::cout<<arr8<<std::endl;
    DArray arr9 = arr8.submatrix(2, 3);
    std::cout<<arr9<<'\n'<<arr9.isNull()<<std::endl;

    return 0;
}