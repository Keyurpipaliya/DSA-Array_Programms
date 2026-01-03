//write an program of Reverse numbers of Character.

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    
    vector<int> v = {100, 200, 300, 400, 500};

    for (int x : v)
    {
       cout<<x <<" ";
    }

    reverse(v.begin(), v.end());

    cout<<" \n After reversing the vector: ";
    for (int x : v)
    {
        cout<<x <<" ";
    }
    
    return 0;
}