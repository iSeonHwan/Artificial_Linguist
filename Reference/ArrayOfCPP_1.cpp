/*
define: example code of Array in CPP(11)
date: 2022.1.14.
resource: “소년코딩 - C++ 07.21 - std::array 소개”. 접근된 2022년 1월 14일. https://boycoding.tistory.com/213.
*/

#include <array>
#include <iostream>
#include <algorithm>

int main(void){

    std::array<int, 3> MyArray1;
    std::array<int, 5> MyArray2 = {9, 7, 5, 3, 1};
    std::array<int, 5> MyArray3{10, 12, 1, 3, 7};

    //std::array<int, > MyArray = {9, 7, 6, 9, 1}; // illegal, array length must be provided.

    // initializer available.

    std::array<int, 5> MyArray4;
    MyArray4 = {9, 1, 3}; //okay, elements 3 and 4 are set to zero!

    //MyArray4 = {1, 2, 3, 4, 5, 6}; // not allowed, too many elements in initializer list!

    std::cout << MyArray2[0] << " " << MyArray2[1] << std::endl;

    MyArray2.at(0) = 100;
    MyArray2.at(1) = 111;

    std::cout << MyArray2[0] << " " << MyArray2[1] << std::endl;

    std::cout << MyArray1.size() << std::endl;
    std::cout << MyArray4.size() << std::endl;

    return 0;
}

