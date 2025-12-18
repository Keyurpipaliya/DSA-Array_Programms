// /Write an programm of Selecton Sort.
#include <iostream>

using namespace std;

int main(){

  int arr[] = {45 , 78 , 23 , 65 , 11 , 2};

  int n = 6;

  // selection sort logic

  for(int i = 0; i < n - 1; i++){
      
    int minIndex = i;
 
    for(int j = i + 1; j < n; j++){
      if(arr[j] < arr[minIndex]){
        minIndex = j;
      }
    }

    int temp = arr[i];
    arr[i] = arr[minIndex];  
    arr[minIndex] = temp;

  }
  return 0;
}

//Dry Run

// pass 1

i = 0

minIndex = 0

// inner loop

int j = i + 1 / j = 0 + 1 / j = 1

if(arr[j] < arr[minIndex]) / if(arr[1] < arr[0]) / if(78 < 45) / false

j = 2

if(arr[j] < arr[minIndex]) / if(arr[2] < arr[0]) / if(23 < 45) / true

minIndex = 2

j = 3

if(arr[j] < arr[minIndex]) / if(arr[3] < arr[2]) / if(65 < 23) / false

j = 4

if(arr[j] < arr[minIndex]) / if(arr[4] < arr[2]) / if(11 < 23) / true

minIndex = 4

j = 5

if(arr[j] < arr[minIndex]) / if(arr[5] < arr[4]) / if(2 < 11) / true
 
minIndex =  5

j = 6 (j < n) (6 < 6) / false

int temp = arr[i] / temp = arr[0] / temp = 45
arr[i] = arr[minIndex] / arr[0] = arr[5] / 45 = 2
arr[5] = 45


// 2 , 78 , 23 , 65 , 11 , 45


//pass 2

i = 1

minIndex = 1

// inner loop

j = i + 1 / j = 1 + 1 / j = 2

if(arr[j] < arr[minIndex]) / if(arr[2] < arr[1]) / if(23 < 78) / true

minIndex = 2

j = 3

if(arr[j] < arr[minIndex]) / if(arr[3] < arr[2]) / if(65 < 23) / true

j = 4

if(arr[j] < arr[minIndex]) / if(arr[4] < arr[2]) / if(11 < 23) / true

minIndex = 3

j = 5

if(arr[j] < arr[minIndex]) / if(arr[5] < arr[3]) / if(45 < 65) / true

minIndex = 4

j = 6 / false

int temp = arr[1] / temp = 78
arr[1] = arr[4]
arr[4] = 78

// 2 , 11 , 23 , 65 , 78 , 45

// pass 3

i = 2
minIndex = 2

// inner Loop

j = i + 1 / j = 2 + 1 / j = 3

if(arr[j] < arr[minIndex]) / if(arr[3] < arr[2]) / if(65 < 23) / false

j = 4

if(arr[j] < arr[minIndex]) / if(arr[4] < arr[2]) / if(78 < 23) / false

j = 5

if(arr[j] < arr[minIndex]) / if(arr[5] < arr[2]) / if(45 < 23) / false

j = 6 / false

int temp = arr[i] / temp = arr[2] / temp = 23
arr[2] = arr[2]


// 2 , 11 , 23 , 65 , 78 , 45

// pass 4

i = 3

minIndex = 3

// inner loop

j = i + 1 / j = 3 + 1 / j = 4

if(arr[j] < arr[minIndex]) / if(arr[4] < arr[3]) / if(78 < 65) / false

j = 5

if(arr[j] < arr[minIndex]) / if(arr[5] < arr[3]) / if(45 < 65) / true

minIndex = 5

j = 6 / false

int temp = arr[i] / temp = arr[3] / temp = 65
arr[3] = arr[5] / 65 = 45
arr[5] = 65

// 2 , 11 , 23 , 45 , 78 , 65

// pass 5

i = 4

minIndex = 4

// inner loop

j = i + 1 / j = 4 + 1 / j = 5

if(arr[j] < arr[minIndex]) / if(arr[5] < arr[4]) / if(65 < 78) / true

minIndex = 5

j = 6 / false

int temp = arr[i] / temp = arr[4] / temp = 78
arr[4] = arr[5] / 78 = 65
arr[5] = 78

// 2 , 11 , 23 , 45 , 65 , 78


