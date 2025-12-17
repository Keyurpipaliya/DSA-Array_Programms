// Write an Program of Sorting Algotithm of Bubble sort.

#include <iostream>

using namespace std;

void bubbleSort(int arr[], int n) {
    for (int i = 0; i < n - 1; i++)
    bool swapped = false;
    cout<<"Enter is OuterLoop"<<i<<endl;

    for (int j = 0; j < n - i - 1; j++)
    {
        if (arr[j]<arr[j+1])
        {
            swap(arr[j]<arr[j + 1]);
            swapped = true;
        }
        cout<<"Inner Loop :"<<j<<endl;
    }

    if (!swapped)
    break;
    }
}

int main() {

    int arr[] = {4, 9, 7, 3, 1};

    int n = sizeof(arr) / sizeof(arr[0]);

    bubblesort(arr, n);

    cout<<"Sorted Array: \n";

    for (int i = 0; i < n; i++)
    cout<< arr[i]<<" ";
    

    return 0;
}

// Dry Run

/*
outer i = 0

inner j = 0; j < n - i - 1 (0 - 4)
(true)

if (4 < 7) swap(4, 9)
9, 7, 4, 3, 1

inner j = 1 (1 < 4) 
(true)
if (4 < 3)
9, 7, 4, 3, 1

inner j = 2 (2 < 4)
(true)
if(3 < 4)
9, 7, 4, 3, 1

inner j = 4 (4 < 4) 
(false)

outer i = 1
 

/* code */
