/*
define: example code of Array in CPP(11)
date: 2022.1.14.
resource: “소년코딩 - C++ 07.21 - std::array 소개”. 접근된 2022년 1월 14일. https://boycoding.tistory.com/213.
*/

#include <array>
#include <iostream>
#include <algorithm>

int main(void){

    std::array<double, 3> MyArray1;
    std::array<double, 5> MyArray2 = {9.1, 7.2, 5.3, 3.4, 1.5};
    std::array<double, 5> MyArray3{10.4, 12.6, 1.7, 3.8, 7.9};


    std::array<double, 5> MyArray4;
    MyArray4 = {9.9, 1.10, 3.11};

    std::cout << MyArray2[2] << " " << MyArray2[3] << std::endl;

    MyArray2.at(0) = 2.3;
    MyArray2.at(1) = 3.4;

    std::cout << MyArray2[2] << " " << MyArray2[3] << std::endl;

    std::cout << MyArray1.size() << std::endl;
    std::cout << MyArray4.size() << std::endl;

    return 0;
}

