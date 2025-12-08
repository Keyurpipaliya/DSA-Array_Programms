// c++ programm to inserting elements in given position using Array

#include <iostream>
using namespace std;

int main() {

    int a[100], num, pos, value;

    cout << "Enter Number of Elements";
    cin >> num;

    cout << "Enter " << num << "Elements:\n";
    for (int  i = 0; i < num; i++)
    {
        cin>>a[i];
    }

    cout << "Enter Position  to insert (0 to"<< num << "):";
    cin>>pos; 
    cout << "Enter value to insert :";
    cin>>value;

    for (int i = num - 1; i >= pos; i--) {
        a[i + 1] = a[i];
    }

    // find element position

    for (int i = num + 1; i<=pos; i++) {
        cout<<"Enter is Element Position :"<<num <<":";
        cin>>position;
    }

    //  print element position
    cout<<"Enter is Elements of Position :"<<position<<":";
    cin>>position;

    return 0;
    
    
}