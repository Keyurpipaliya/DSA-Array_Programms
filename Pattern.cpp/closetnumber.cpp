//cloaset number of array

//arr={4, 7, 10, 12, 18}
#include <iostream>

using namespace std;

int main() {

    int arr[] = {4, 7, 10, 12, 18};

    int n = sizeof(arr) / sizeof(arr[0]);

    int target = 6;

    int closet = arr[0];

    int mindiff = abs(arr[0] - target);

    for (int i = 1; i < n; i++)
    {
        int diff = abs(arr[i] - target);

        if (diff < mindiff)
        {
            mindiff = diff;
            closet = arr[i];
        }
        
    }

    cout<< "closet" <<closet <<endl;

    return 0;
    
}

