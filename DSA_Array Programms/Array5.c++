//write an program to rotating elements by certain numbers of position in given array
//Array rotation mean shifting elements left or right by a fixed numbers of postion
#include<iostream>

using namespace std;

void reverse(int arr[], int start, int end) 
{
    while(start < end) 
    {
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;

        start++;
        end--;
    }
}

int main() {

    int arr[] = {10,20,30,40,50};
    int n = 5;
    int k = 4; // divide by n - 5

    k = k % n; // k < n

    //step 1

    reverse(arr, 0, n - 1); // 0 - 2 // [10, 20, 30, 40, 50];

    //step

    reverse(arr, k, n - 1); // 3 - 4 // [40][50] = [50][40]

    reverse(arr, 0, n - 1); // 0 - 4 // [30][20][10][40][50] = [40][50][10][20][30]

    cout <<"Array after rotation";

    for (int i = 0; i < n; i++)
    {
        cout <<arr[i]<<" ";
    }
    
}