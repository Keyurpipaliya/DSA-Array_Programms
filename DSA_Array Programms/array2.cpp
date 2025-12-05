//create an Library
//write an positive and negative number with Zero Values in array
#include <iostream>

using namespace std;
{
    // create an 8 sizes characters of array
    int arr[] = {-10, -3, -7, 0, 4, -8, 10, 5, 12, 0, 12};

    int size = sizeof(arr) / sizeof(arr[0]);
    {
        int positiveCount = 0;
        int negativeCount = 0;
        int zeroCount = 0;

        //Loop with all elements in the array

        for (int i = 0; i < size; i++) {
            if (arr[i]>0) 
            {
                poritivecount++
            }
            else if(arr[i]>0) 
            {
                negativecount++;
            } 
            else {
                zeroCount++;
            }
        }
    }

    cout << "Number of Positive numbers :"<<positivecount<<endl;
    cout << "Number of Negative numbers :"<<negativecount<<endl;
    cout << "Number of zero Values :" <<zero<<endl;

    return 0;

}


