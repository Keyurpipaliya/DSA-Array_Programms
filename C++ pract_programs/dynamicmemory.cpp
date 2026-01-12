// Write an program Dynamic Menory Allocation
#include <iostream>
#include <vector>

int main() {
    int size;
    std::cout << "Enter the number of elements for the array: ";
    std::cin >> size;


    int* dynamicArray = new int[size];

    // 1. Dynamically allocate an array of 'size' integers
    std::cout << "Enter " << size << " integer values:" << std::endl;
    for (int i = 0; i < size; ++i) {
        std::cout << "Element " << i + 1 << ": ";
        std::cin >> dynamicArray[i];
    }

    // Display the elements
    std::cout << "You entered: ";
    for (int i = 0; i < size; ++i) {
        std::cout << dynamicArray[i] << " ";
    }
    std::cout << std::endl;

    // Deallocate the dynamically allocated array using 'delete[]'
    delete[] dynamicArray;
    dynamicArray = nullptr;

    return 0;
}

