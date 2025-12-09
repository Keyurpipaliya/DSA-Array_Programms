#include <iostream>>

using namespace std;

int main() {

    int arr[100], n;

    cout<<"Enter number of elements: ";
    cin >>n;

    cout<<"Enter array Elements :\n";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    // Reverse array

    int start = 0;
    int end = n - 1;

    while (start < end)
    {
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;

        start++;
        end--;
    }

    cout<< "\n Reverse Array:\n";

    for (int i = 0; i < n; i++)
    {
        cout<< arr[i] <<"";
    }
    
    return 0;

}