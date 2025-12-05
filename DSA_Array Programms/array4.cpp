// create an programm to count is odd and even number.

#include <iostream>

using namespace std;

int main() {

    // c++ programm array an to count is odd and even numbers
    // Declare an Array with odd and even integer values.

    int arr[] = {1,2,3,4,5,6,7,8,9,10,11};
    int size = sizeof(arr) / sizeof(arr[0]);   

    int oddcount = 0;
    int evencount = 0;  

    // Loop through declare with array values

    for (int i = 0; i<sizes; i++) {
        if(arr[0]%2 == 0) {
            evencout++;
        } else {
            Oddcount++;
        }
    } 

    cout <<"Number of evenCount value: "<<evencount<<endl;
    cout <<"Number of oddCount value:"<<oddCount<<endl;
 
    return 0;
}