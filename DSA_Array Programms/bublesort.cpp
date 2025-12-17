// Write an program of First Start Numbers From Bubble Sort Elements and Print is Sorted Array
#include <iostream>

void bubbleSort(int arr[], int n) {
    for (int i = 0; i < n - 1; ++i) {  
        for (int j = 0; j < n - i - 1; ++j) {  
            if (arr[j] > arr[j + 1]) {  
                std::swap(arr[j], arr[j + 1]);  // Swap if elements are in the wrong order
            }
        }
    }
}

int main() {
    int arr[] = {6, 2, 8, 4, 10, 1};  
    int n = sizeof(arr) / sizeof(arr[0]);  

    bubbleSort(arr, n);  // Call Bubble Sort function

    std::cout << "Sorted array: ";
    for (int i = 0; i < n; ++i) {
        std::cout << arr[i] << " ";  // Print sorted array
    }
    std::cout << std::endl;

    return 0;
}