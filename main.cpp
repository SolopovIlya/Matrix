#include "Matrix.h"

int main() {
    srand(time(nullptr));

    Matrix arr1;
    std::cout<<arr1<<std::endl;

    Matrix arr2(2, 2);
    std::cout<<arr2<<std::endl;
    arr2 = arr2 * 5;
    std::cout<<arr2<<std::endl;

    Matrix arr3(arr1);
    std::cout<<arr3;
    std::cout<<(arr3 == arr1)<<"\n"<<(arr3 != arr1)<<std::endl;
    std::cout<<std::endl;
    arr3 = arr1 + arr3;
    std::cout<<arr3;
    std::cout<<(arr3 == arr1)<<"\n"<<(arr3 != arr1)<<std::endl;
    std::cout<<std::endl;
    arr3 = arr1 - arr3;
    std::cout<<arr3<<std::endl;

    Matrix arr4(3, 8);
    std::cout<<arr4;
    std::cout<<"a(1,2) = "<< arr4(1, 2)<<std::endl;
    arr4(1, 2) += 1;
    std::cout<<"a(1,2) = "<< arr4(1, 2)<<std::endl;

    std::cout<<std::endl;
    Matrix arr5(1, 4);
    std::cout<<arr5<<std::endl;
    Matrix arr6(4, 3);
    std::cout<<arr6<<std::endl;
    arr5 = arr5 * arr6;
    std::cout<<arr5<<std::endl;

    Matrix arr7(3, 4, true);
    std::cout<<"\n"<<arr7.isNull()<<"\n"<<std::endl;
    Matrix arr8(5, 5);
    std::cout<<arr8<<std::endl;
    Matrix arr9 = arr8.submatrix(2, 3);
    std::cout<<arr9<<'\n'<<arr9.isNull()<<std::endl;

    return 0;
}