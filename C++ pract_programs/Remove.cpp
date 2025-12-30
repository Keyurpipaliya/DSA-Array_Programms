//Write an program of Remove Duplicate Elements in Array
#include <iostream>

using namespace std;

int removeDuplicate(int arr[], int n)
{
    if (n==0 || n==1) 
        return n;
    
        int temp[n];
        
        int j  =  0;

        for (int i = 0; i < n - 1; i++)
        if (arr[i] != arr[i + 1]) 
        temp[j] = arr[i];

        for (int i = 0; i < j; i++)
            arr[i] = temp[i];
}


int main() {
    int arr[] = {1, 2, 2, 3, 4, 4, 4, 5, 5}; // Integer of Array Elements
    int n = 9; // Sizes of array 

    int n = sizeof(arr) / sizeof(arr[0]); 

    n = removeDuplicates(arr, n);
    cout<< arr[i] <<" ";

    return 0;
}