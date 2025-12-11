// write an program reverse array from start to end
#include <iostream>

using namespace std;

void reverse(int arr[], int start, int end) {
    while (start < end)
    {
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;

        start++;
        end--;
    }
}

int main() {

    int arr[] = {10, 20, 30, 40, 50};

    int n = 5;

    int k = 2;

    k = k % n;

    // step 1

    reverse(arr, 0, n-1);

    // step 2

    reverse(arr, 0, k - 1);

    // step 3

    reverse(arr, k, n - 1);

    cout<<"Reverse Array from Right \n:";

    for (int  i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
    
    return 0;
}