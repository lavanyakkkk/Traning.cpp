#include <iostream>
#include <array>
#include <algorithm> // for sort, reverse

int main() {
    // Declare and initialize an array of 5 integers
    std::array<int, 5> arr = { 10, 20, 30, 40, 50 };

    // Accessing elements
    std::cout << "Element at index 2 (using at): " << arr.at(2) << std::endl;
    std::cout << "First element: " << arr.front() << std::endl;
    std::cout << "Last element: " << arr.back() << std::endl;

    std::array<int,0>arr1;

    // Size and empty check
    std::cout << "Size of array: " << arr1.size() << std::endl;
    std::cout << "Is array empty? " << (arr1.empty() ? "Yes" : "No") << std::endl;

    // Fill array
    arr.fill(7);
    std::cout << "After fill: ";
    for (int i : arr) std::cout << i << " ";
    std::cout << std::endl;

    // Reassign values
    arr = { 1, 4, 3, 2, 5 };

    // Sort array
    std::sort(arr.begin(), arr.end());
    std::cout << "After sorting: ";
    for (int i : arr) std::cout << i << " ";
    std::cout << std::endl;

    // Reverse array
    std::reverse(arr.begin(), arr.end());
    std::cout << "After reversing: ";
    for (int i : arr) std::cout << i << " ";
    std::cout << std::endl;

    // Data pointer access
    int* p = arr.data();
    std::cout << "Pointer to first element: " << *p << std::endl;


    //cbegin() / cend() Returns reverse iterators

    std::reverse(arr1.rbegin(), arr1.rend());
    std::cout << "after reversing the iterators: ";
    for (int i : arr) std::cout << i << " ";
    std::cout << std::endl;
    return 0;
}