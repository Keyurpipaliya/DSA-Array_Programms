// Write a C++ program to find the second smallest element in an array.
#include <iostream>

using namespace std;

int main() {
    int arr[] = {12, 5, 7, 3, 19, 5};
    int n = sizeof(arr) / sizeof(arr[0]);

    if (n < 2)
    {
        cout<<"Enter Second smallest elements not found";
    }
    
    int smallest = INT_MAX;
    int secondSmallest = INT_MAX;

    for (int i = 0; i < n; i++)
    {
        if(arr[i]<smallest) {
            secondSmallest = smallest;
            smallest = arr[i];
        }
        else if(arr[i] > smallest && arr[i] < secondSmallest ) {
            secondsmallest = arr[i];
        }
    }

    if (secondSmallest == INT_MAX) {
        cout <<"Second Smallest Element does not";
    } else {
        cout <<"Second Smallest element is:" << secondSmallest;
    }
    

    return 0;
}