#include <iostream>

int main() {
    // Declare and initialize an array of integers
    int numbers[] = {10, 20, 30, 40, 50};

    int firstElement = numbers[0]; 
    int thirdElement = numbers[2];  

    numbers[1] = 25; // Changes the second element from 20 to 25
    
    std::cout << "First element: " << firstElement << std::endl;
    std::cout << "Third element: " << thirdElement << std::endl;
    std::cout << "Modified second element: " << numbers[1] << std::endl;

    return 0;

}