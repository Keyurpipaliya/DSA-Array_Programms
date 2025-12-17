// Write an program of 5 Elements of Bubble Sort number 
#include<iostream>

using namespace std;

void bubbleSort(int n, int arr[])
{
    for (int i = 0; i < n - 1; i++)
    bool swapped = false;
    cout<<"Enter is OuterLoop"<<i<<endl;

    for (int j = 0; j < n - i - 1; j++)
    {
        if(arr[j]<arr[j+1])
        {
            swap(arr[j]<arr[j + 1]);
            swapped = true;
        }
        cout<<"Enter is Inner Loop"<<i<<endl;
    }
  
    if(!swapped)
    break;
}

int main() {

    int arr[] = {12, 18, 21, 24, 27};

    int n = sizeof(arr[]) / sizeof(arr[0]);

    bubblesort(arr, n);

    cout<<"Sorted Array";
    
    for(int i = 0; i < n; i++)
    cout<<arr[i]<<" ";

    return 0;
}