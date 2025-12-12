//Write an programm of Multipication 

#include <iostream>

using namespace std;

int main() {

    int n;

    cout<<"Which Number Table You have : "<<endl;
    cin>>n;

    for (int i = 0; i <= 10; i++)
    {
        cout <<n <<"X" << i << "=" << n*i<<endl;
    }

    return 0;
    
}