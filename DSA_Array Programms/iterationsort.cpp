// Write an program of iteration sort Elements of numbers 

#include <iostream>

using namespace std;

int main() {

    int arr[] = {12, 11, 13, 5, 6};

    int n = 5;

    for(int i = 1; i < n; i++) {

        int key = arr[i];

        int j = i - 1;

        while (j >= 0 && arr[j]<key)
        {
        arr[j + 1] = arr[j];
        j--;
        }

        arr[j + 1] = key;
    }

    for (int i = 0; i < n; i++)
    { 
        cout<< arr[i]<<"";
    } 

    return 0; 
    
}

// Dry Run

/*
int key = arr[i] //11

int j = 0;

while(0 >= 0 && 12 > 11) //
arr[j + 1] = arr[j]
arr[0 + 1] = arr[0]
arr[1] = arr[0]
11 = 12
12, 12, 13, 5, 6

j =- 1

arr[j + 1] = key
arr[-1 + 1] = 11
arr[0] = 11
11, 12, 13, 5, 6

*/
// Step 2   

/*
int key = arr[2] //13

int j = 1

while(i>=0 && 12 > 13)
 
arr[j + 1] = key

arr[i + 1] = 13

arr[2] = 13

11, 12, 13, 5, 6

*/

//Step 3

/*
int key = arr[3] //5

int j = 2

while(2 >= 0 && 13 > 5)
arr[j + 1] = arr[j]
arr[2 + 1] = arr[2]
arr[3] = arr[2]
5 = 13
11, 12, 13, 13, 6

arr[i + 1] = key;

arr[i + 1] = 5;

arr[2] = 5

11, 12, 5, 13, 6

while(i >= 0 && 12 > 5)  
arr[j + 1] = arr[j];
arr[1 + 1] = arr[2];
arr[2] = 12

arr[j + 1] = key;

arr[0 + 1] = key;

arr[1] = 5;

11, 5, 12, 13, 6

5, 11, 12, 13, 6
 
*/


