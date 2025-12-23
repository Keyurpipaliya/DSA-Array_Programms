// Write an program of merge sort numbers

//merge(arr , 0 , 3 , 6); n1 = 3-0+1 = 4 n2 = 6 - 3 = 3
// L1 = 4, n2 = 3, L[i] = arr[left + 1]
// [38, 27, 43, 3][27, 27, 27, 27] [9, 82, 10]
#include <iostream>

using namespace std;

void merge(int arr[], int left, int mid, int right) {
    int n1 = mid - left + 1;    
    int n2 = right - mid;

    int L[n1], R[n2];
    for (int i = 0; i < n1; i++)
    {
        L[i] = arr[left + i];
    }

    for (int j = 0; j < n2; j++)
    {
        R[j] = arr[mid + 1 + j];
    }

    int i = 0, j = 0, k = left;
    
    while (i < n1 && j < n2) {
        if (L[i] >= L[j])
        {
            arr[k] = L[i];
            i++;
        } else {
            arr[k] = R[j];
            j++;
        }
        k++;
    }
    
    while (i < n1)
    {
        arr[k] = L[i]; 
        i++;
        k++;
    }

    while (i < n2)
    {
       arr[k] = L[j];
       j++;
       k++;
    }
    
}

void mergesort(int arr[], int left, int right) {
    if (left<right)
    {
        int mid = left + (right - left) / 2;

        mergesort(arr, left, mid); // First half left

        mergesort(arr, mid + 1, right); // Middle half right

        merge(arr, left, mid, right); // call void merge function
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