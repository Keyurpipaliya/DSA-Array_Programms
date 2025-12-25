// Write an program of count of Positive and Negative Numbers 

#include <iostream>

using namespace std;

int main() {
    int n;
    int positive = 0;
    int negative = 0;
    int arr[n];

    // input is Size of Array
    cout<<"Enter the Number of Elements :";
    cin>>n;


    // input array of Elements
    cout<<"Enter array of Elements \n";
    
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];

        if (arr[i]>0)
            positivecount++;
        else if (arr[i]<0)
            negativecount++;
        
    }

    // It implement is Positive and Negative Numbers.

    cout<< "Positive Numbers count: " <<Positive <<endl;
    cin>> positive;

    cout<< "Negative Numbers count: " <<Negative <<endl;
    cin>> negative;
    

return 0;
}