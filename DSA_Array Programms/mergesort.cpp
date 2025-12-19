// Write an program of merge sort numbers

//merge(arr , 0 , 3 , 6); n1 = 3-0+1 = 4 n2 = 6 - 3 = 3
#include <iostream>

using namespace std;

void merge(int arr[], int left, int mid, int right) {
    int n1 = mid - left + 1;    
    int n2 = right - mid;

    int L[n1], R[n2];

}

void mergesort(int arr[], int left, int right) {
    if (left<right)
    {
        int mid = left + (right - left) / 2;

        mergesort(arr, left, mid);

        mergesort(arr, mid + 1, right);

        merge(arr, left, mid, right);
    }
}


int main() {

    int arr[] = {38, 27, 43, 3, 9, 82, 10};

    int n = 7;

    mergesort(arr, 0, n - 1);

    cout<< "Sorted Arry:"<<":"<<endl;
    
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i] <<" ";
    }
    return 0;
}