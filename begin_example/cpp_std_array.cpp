#include <array>

std::array<int, 3> myArray;
std::array<int, 5> myArray2 = { 9, 7, 5, 3, 1 }; // initializer list
std::array<int, 5> myArray3 { 9, 7, 5, 3, 1 }; // uniform initialization

// in c++17
std::array myArray { 9, 7, 5, 3, 1 }; // The type is deduced to std::array<int, 5>
std::array myArray { 9.7, 7.31 }; // The type is deduced to std::array<double, 2>

// std::array will clean up after itself when it goes out of scope, so there’s no need to do any kind of manual cleanup.



////////////////////////////////////////////////////////////////////////////////
// Sorting std::array
#include <algorithm> // for std::sort
#include <array>
#include <iostream>

int main()
{
    std::array myArray { 7, 3, 1, 9, 5 };
    std::sort(myArray.begin(), myArray.end()); // sort the array forwards
//  std::sort(myArray.rbegin(), myArray.rend()); // sort the array backwards

    for (int element : myArray)
        std::cout << element << ' ';

    std::cout << '\n';

    return 0;
}
