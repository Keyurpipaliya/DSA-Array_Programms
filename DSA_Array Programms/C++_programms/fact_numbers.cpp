//factorial numbers using Recursion arrguments.
#include <iostream>

using namespace std;

int main(int n) {
    if(n==0 || n == 1) {
        return 1;
    } else {
        return n * factorial(n-1);
    }

    cout<<"Enter is factorial numbers: "<<":"<<endl;

    return 0;
}

