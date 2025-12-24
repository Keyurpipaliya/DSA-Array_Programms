// write an program of Elements pivot table and sequence characters of numbers.

#include <iostream>

using namespace std;


    // Partition

    int arr[] = {6, 8, 10, 12, 14, 15, 17, 18, 19};

    int n = 9;

    int pivot = arr[high];

    int i = low - 1;

    for (int j = 0; j < high; j++)
    {
        if(arr[j] < pivot) {
            i++;
            swap(arr[i], arr[j]);
        }
    }

    swap(arr[i + 1], arr[high]);


    return i + 1;
    }

    void quickSort(int arr[], int low, int high ) {
        if(low < high) {

        int pi = partition(arr, low ,high); 

        quickSort(arr low , pi - 1); // left side

        quickSort(arr, pi + 1 , high); //  right side
        }   
    }

    int main(){

         int arr[] = {14  16 , 12 , 15 , 17 , 19 , 11 , 13};

         int n = 8;

          quickSort(arr, 0 , n - 1);

        cout << "Sorted Array: " ;
        for ( i = 0; i < n; i++)
        {
            cout <<arr[]<< " ";
        }
        
    return 0;
}

// Dry run 

int pivot = 7

int pivot = 13

int i = low - 1

int 0 - 1

int i = 1

int high = 7

16 < 13

j = 0

14 < 13 false 16 < 13 false 12 < 13 true 15 < 13 false

