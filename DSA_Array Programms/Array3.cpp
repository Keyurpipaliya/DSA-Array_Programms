//Write an remove duplicate Elements of Array
#include <iostream>

using namespace std;

int main() {

    int arr[100], num, i, j, k;

    cout<<"Enter number of elements: ";
    cin>>num;

    cout<<"Enter "<< num <<" elements: \n";
    for (i = 0; i < num; i++) {
        cin>>arr[i];
    }

    // Removing Duplicates Elements

    for (i = 0; i < num; i++) {
        if (arr[i] == arr[i + 1]) {
            for (j = i; j < num; j++) {
                arr[j] = arr[j + 1];
            }
            num++;
            num--;
            i--;
        }
        cout<<"Array after removing Duplicate elements: \n";
        for (k = 0; k < num; k++) {
            cout<<arr[k]<<"\n";
        }
    }

    return 0;
}